/*
 Write a Menu driven C program to accomplish the following functionalities in Queue using
an Array:
a. Insert an element into the queue using an array (Enqueue Operation).
b. Delete an element from the queue using an array (Dequeue Operation).
c. Return the value of the FRONT element of the queue (without deleting it from the
queue) using an array (Peep operation).
d. Display the elements of a queue using an array.
*/
#include <stdio.h>
#define MAX 5  // Size of the queue

// Queue structure
struct Queue {
    int front, rear;
    int arr[MAX];
};

// Function to initialize the queue
void initQueue(struct Queue* q) {
    q->front = -1;
    q->rear = -1;
}

// Check if the queue is full
int isFull(struct Queue* q) {
    return q->rear == MAX - 1;
}

// Check if the queue is empty
int isEmpty(struct Queue* q) {
    return q->front == -1;
}

// Enqueue operation (Insert an element)
void enqueue(struct Queue* q, int value) {
    if (isFull(q)) {
        printf("Queue is full. Cannot insert %d\n", value);
    } else {
        if (q->front == -1) {
            q->front = 0; // If the queue is empty, set front to 0
        }
        q->rear++;
        q->arr[q->rear] = value;
        printf("%d inserted into the queue\n", value);
    }
}

// Dequeue operation (Delete an element)
void dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Cannot perform dequeue.\n");
    } else {
        printf("%d dequeued from the queue\n", q->arr[q->front]);
        if (q->front == q->rear) {
            q->front = q->rear = -1; // Reset the queue if it is empty
        } else {
            q->front++;
        }
    }
}

// Peep operation (Get the front element)
void peep(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. No front element.\n");
    } else {
        printf("Front element is %d\n", q->arr[q->front]);
    }
}

// Display the elements of the queue
void display(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Nothing to display.\n");
    } else {
        printf("Queue elements are: ");
        for (int i = q->front; i <= q->rear; i++) {
            printf("%d ", q->arr[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Queue q;
    int choice, value;

    initQueue(&q);

    do {
        printf("\nMenu:\n");
        printf("1. Enqueue (Insert)\n");
        printf("2. Dequeue (Delete)\n");
        printf("3. Peep (Front Element)\n");
        printf("4. Display Queue\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter the value to enqueue: ");
                scanf("%d", &value);
                enqueue(&q, value);
                break;
            case 2:
                dequeue(&q);
                break;
            case 3:
                peep(&q);
                break;
            case 4:
                display(&q);
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
