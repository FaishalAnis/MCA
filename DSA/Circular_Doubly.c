#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void createList(struct Node** head) {
    int data;
    char choice;
    struct Node *newNode, *temp;

    *head = NULL;

    do {
        printf("Enter data: ");
        scanf("%d", &data);
        
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = newNode->prev = newNode;

        if (*head == NULL) {
            *head = newNode;
        } else {
            temp = *head;
            while (temp->next != *head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
            newNode->next = *head;
            (*head)->prev = newNode;
        }

        printf("Do you want to continue (y/n)? ");
        scanf(" %c", &choice); // Added space before %c to consume newline character
    } while (choice == 'y' || choice == 'Y');
}
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    do {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = *head;

    newNode->data = data;
    if (*head == NULL) {
        newNode->next = newNode->prev = newNode;
        *head = newNode;
    } else {
        newNode->next = *head;
        newNode->prev = temp->prev;
        temp->prev->next = newNode;
        temp->prev = newNode;
        *head = newNode;
    }
}

void insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = head;

    newNode->data = data;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next = head;
    head->prev = newNode;
}

void deleteFromBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    
    struct Node* temp = *head;
    if (temp->next == *head) {
        free(temp);
        *head = NULL;
    } else {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        *head = temp->next;
        free(temp);
    }
}

void deleteFromEnd(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    if (temp == head) {
        free(temp);
        head = NULL;
    } else {
        temp->prev->next = head;
        head->prev = temp->prev;
        free(temp);
    }
}

void deleteAfterNode(struct Node* head, int data) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    while (temp->data != data && temp->next != head) {
        temp = temp->next;
    }

    if (temp->data == data && temp->next != head) {
        struct Node* deleteNode = temp->next;
        temp->next = deleteNode->next;
        deleteNode->next->prev = temp;
        free(deleteNode);
        printf("Node deleted after %d.\n", data);
    } else {
        printf("Node not found or no node to delete after %d.\n", data);
    }
}

void deleteList(struct Node** head) {
    if (*head == NULL) {
        printf("List is already empty.\n");
        return;
    }

    struct Node* temp = *head;
    struct Node* nextNode;
    do {
        nextNode = temp->next;
        free(temp);
        temp = nextNode;
    } while (temp != *head);

    *head = NULL;
    printf("Entire list has been deleted.\n");
}

int main() {
    struct Node* head = NULL;
    int choice, data;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Create Circular Doubly Linked List\n");
        printf("2. Display Circular Doubly Linked List\n");
        printf("3. Insert at Beginning\n");
        printf("4. Insert at End\n");
        printf("5. Delete from Beginning\n");
        printf("6. Delete from End\n");
        printf("7. Delete After a Given Node\n");
        printf("8. Delete Entire List\n");
        printf("9. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createList(&head);
                break;
            case 2:
                displayList(head);
                break;
            case 3:
                printf("Enter data to insert at the beginning: ");
                scanf("%d", &data);
                insertAtBeginning(&head, data);
                break;
            case 4:
                printf("Enter data to insert at the end: ");
                scanf("%d", &data);
                insertAtEnd(head, data);
                break;
            case 5:
                deleteFromBeginning(&head);
                break;
            case 6:
                deleteFromEnd(head);
                break;
            case 7:
                printf("Enter node data after which to delete: ");
                scanf("%d", &data);
                deleteAfterNode(head, data);
                break;
            case 8:
                deleteList(&head);
                break;
            case 9:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
