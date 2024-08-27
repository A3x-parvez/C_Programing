#include <stdio.h>
#include <stdlib.h>

#define max 10
int queue[max];

int front = -1;
int rear = -1;

void enqueue();
void dequeue();
void display();

void enqueue()
{
    int val;
    if ((rear + 1) % max == front)
    {
        printf("Queue is full.\n");
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    printf("Enter value : ");
    scanf("%d", &val);
    rear = (rear + 1) % max;
    queue[rear] = val;
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue is empty.\n");
        return;
    }
    printf("Dequeued element: %d\n", queue[front]);
    if (front == rear)
    {
        front = rear = -1; // Reset front and rear when the queue becomes empty
    }
    else
    {
        front = (front + 1) % max;
    }
}

void display()
{
    int i;
    if (front == -1)
    {
        printf("Queue is empty.\n");
        return;
    }
    i = front;
    printf("Queue elements: ");
    do
    {
        printf("%d ", queue[i]);
        i = (i + 1) % max;
    } while (i != (rear + 1) % max);
    printf("\n");
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n1. Enter element\n2. Delete element\n3. Display\n4. EXIT\n");
        printf("Enter choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exit.\n");
            return 0;
        default:
            printf("Warning! Enter a valid choice!\n");
        }
    }
}

