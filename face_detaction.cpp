#include <opencv2/opencv.hpp>

using namespace cv;

int main() {
  // Load the face detector
  CascadeClassifier face_detector;
  if (!face_detector.load("haarcascade_frontalface_default.xml")) {
    return -1;
  }

  // Open the video stream
  VideoCapture capture(0);
  if (!capture.isOpened()) {
    return -1;
  }

  // Create a window to display the video
  namedWindow("Face Recognition", WINDOW_AUTOSIZE);

  // Loop until the user presses the Esc key
  while (true) {
    // Capture a frame from the video stream
    Mat frame;
    capture >> frame;

    // Convert the frame to grayscale
    Mat gray;
    cvtColor(frame, gray, COLOR_BGR2GRAY);

    // Detect faces in the grayscale frame
    std::vector<Rect> faces;
    face_detector.detectMultiScale(gray, faces);

    // Draw a rectangle around each detected face
    for (Rect face : faces) {
      rectangle(frame, face, Scalar(0, 255, 0), 2);
    }

    // Display the frame
    imshow("Face Recognition", frame);

    // Wait for a key press
    int key = waitKey(1);
    if (key == 27) {
      break;
    }
  }

  // Destroy the window
  destroyAllWindows();

  return 0;
}
