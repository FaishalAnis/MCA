/*Write a Menu driven C program to accomplish the following functionalities in Circular
Queue using Array:
i. Insert an element into the circular queue.
j. Delete an element from the circular queue.
k. Return the value of the FRONT element of the circular queue (without deleting it
from the queue).
l. Display the elements of a circular queue using the circular queue.
*/
#include <stdio.h>
#define MAX 5  // Size of the queue

// Circular Queue structure
struct CircularQueue {
    int front, rear;
    int arr[MAX];
};

// Function to initialize the queue
void initQueue(struct CircularQueue* q) {
    q->front = q->rear = -1;  // Queue is empty initially
}

// Check if the queue is full
int isFull(struct CircularQueue* q) {
    return (q->rear + 1) % MAX == q->front;
}

// Check if the queue is empty
int isEmpty(struct CircularQueue* q) {
    return q->front == -1;
}

// Enqueue operation (Insert an element)
void enqueue(struct CircularQueue* q, int value) {
    if (isFull(q)) {
        printf("Queue is full. Cannot insert %d\n", value);
    } else {
        if (q->front == -1) {  // If the queue is empty
            q->front = 0;
        }
        q->rear = (q->rear + 1) % MAX;  // Circular increment of rear
        q->arr[q->rear] = value;
        printf("%d inserted into the queue\n", value);
    }
}

// Dequeue operation (Delete an element)
void dequeue(struct CircularQueue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Cannot perform dequeue.\n");
    } else {
        printf("%d dequeued from the queue\n", q->arr[q->front]);
        if (q->front == q->rear) {  // Only one element was present
            q->front = q->rear = -1;  // Reset the queue
        } else {
            q->front = (q->front + 1) % MAX;  // Circular increment of front
        }
    }
}

// Peep operation (Get the front element)
void peep(struct CircularQueue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. No front element.\n");
    } else {
        printf("Front element is %d\n", q->arr[q->front]);
    }
}

// Display the elements of the circular queue
void display(struct CircularQueue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Nothing to display.\n");
    } else {
        printf("Queue elements are: ");
        int i = q->front;
        while (i != q->rear) {
            printf("%d ", q->arr[i]);
            i = (i + 1) % MAX;
        }
        printf("%d\n", q->arr[q->rear]);  // Print the last element
    }
}

int main() {
    struct CircularQueue q;
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
