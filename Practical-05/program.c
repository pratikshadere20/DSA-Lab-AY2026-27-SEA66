#include <stdio.h>
#define MAX 5
int queue[MAX];
int front = -1, rear = -1;
void enqueue(int parcel)
{
    if ((rear + 1) % MAX == front)
    {
        printf("Queue is Full!\n");
        return;
    }
    if (front == -1)
        front = 0;
    rear = (rear + 1) % MAX;
    queue[rear] = parcel;
    printf("Parcel %d added successfully.\n", parcel);
}
void dequeue()
{
    if (front == -1)
    {
        printf("Queue is Empty!\n");
        return;
    }
    printf("Parcel %d processed and deleted.\n", queue[front]);
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % MAX;
    }
}
void display()
{
    int i;
    if (front == -1)
    {
        printf("Queue is Empty!\n");
        return;
    }
    printf("Current Parcel Queue: ");
    i = front;
    while (1)
    {
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}
int main()
{
    int choice, parcel;
    while (1)
    {
        printf("\n--- Post Office Parcel Queue ---\n");
        printf("1. Add Parcel\n");
        printf("2. Process/Delete Parcel\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter Parcel Number: ");
                scanf("%d", &parcel);
                enqueue(parcel);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}