/*Write a Menu driven C program to accomplish the following functionalities in Queue using
Linked List:
e. Insert an element into the queue using a Linked List (Enqueue Operation).
f. Delete an element from the queue using a Linked List (Dequeue Operation).
g. Return the value of the FRONT element of the queue (without deleting it from the
queue) using a Linked List (Peep operation).
h. Display the elements of a queue using a Linked List.
*/
#include <stdio.h>
#include <stdlib.h>

// Define the structure for the linked list node
struct Node {
    int data;
    struct Node* next;
};

// Queue structure
struct Queue {
    struct Node* front;
    struct Node* rear;
};

// Function to initialize the queue
void initQueue(struct Queue* q) {
    q->front = q->rear = NULL;
}

// Check if the queue is empty
int isEmpty(struct Queue* q) {
    return (q->front == NULL);
}

// Enqueue operation (Insert an element)
void enqueue(struct Queue* q, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;
    
    // If the queue is empty, both front and rear point to the new node
    if (q->rear == NULL) {
        q->front = q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
    printf("%d inserted into the queue\n", value);
}

// Dequeue operation (Delete an element)
void dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Cannot perform dequeue.\n");
    } else {
        struct Node* temp = q->front;
        printf("%d dequeued from the queue\n", temp->data);
        q->front = q->front->next;
        if (q->front == NULL) {
            q->rear = NULL;  // If the queue becomes empty, set rear to NULL
        }
        free(temp);
    }
}

// Peep operation (Get the front element)
void peep(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. No front element.\n");
    } else {
        printf("Front element is %d\n", q->front->data);
    }
}

// Display the elements of the queue
void display(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Nothing to display.\n");
    } else {
        struct Node* temp = q->front;
        printf("Queue elements are: ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
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
