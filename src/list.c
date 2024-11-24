#include "../incl/list.h"
#include "../incl/util.h"

// Function to initialize the linked list
void initList(struct ListNode **head, const int* array, const int arrayLength)
{
    if (arrayLength == 0)
    {
        *head = NULL;
        return;
    }
    
    *head = malloc(sizeof(struct ListNode));
    if (*head == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    (*head)->val = array[0];
    (*head)->next = NULL;
    
    struct ListNode *current = *head;

    for (int i = 1; i < arrayLength; i++)
    {
        struct ListNode *newNode = malloc(sizeof(struct ListNode));
        if (newNode == NULL)
        {
            fprintf(stderr, "Memory allocation failed\n"); 
            // Free the previously allocated nodes 
            struct ListNode *temp; 
            while (*head != NULL)
            {
                temp = *head; 
                *head = (*head)->next; 
                free(temp);
            }
            exit(1);
        }
        newNode->val = array[i];
        newNode->next = NULL;
        current->next = newNode;
        current = newNode;
    }
}