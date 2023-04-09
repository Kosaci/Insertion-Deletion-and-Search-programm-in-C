#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void display()
{
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements are: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

void enqueue(int value)
{
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full, cannot insert any more elements!\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = value;
    printf("%d is inserted into the queue\n", value);
}

int dequeue() {
    if (front == -1) {
        printf("Queue is empty\n");
        return -1;
    }
    if (front > rear) {
        front= -1;
        rear = -1;
    }
    else {
        printf("The element %d is  deleted", queue[front]);
        for ( int i = front; i<=rear;i++) {
            
            queue[i]=queue[i+1];
            
        }
        rear--;
        }
        
    
}

int main()
{
    int choice, value;
    printf("Queue operations using array\n");
    printf("----------------------------\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Display\n");
    printf("4. Exit\n");

    do {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice, please try again!\n");
        }
    } while (1);

    return 0;
}
