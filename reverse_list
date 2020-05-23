#include<stdio.h> 
#include<stdlib.h> 
int n,ele,k,i;
struct Node 
{ 
    int data; 
    struct Node* next; 
}; 
struct Node *reverse (struct Node *head, int k) 
{ 
    struct Node* current = head; 
    struct Node* next = NULL; 
    struct Node* prev = NULL; 
    int count = 0;    
    while (current != NULL && count < k) 
    { 
        next  = current->next; 
        current->next = prev; 
        prev = current; 
        current = next; 
        count++; 
    } 
    if (next !=  NULL) 
       head->next = reverse(next, k);  
    return prev; 
} 
void push(struct Node** head_ref, int new_data) 
{ 
    struct Node* new_node = 
            (struct Node*) malloc(sizeof(struct Node)); 
    new_node->data  = new_data; 
    new_node->next = (*head_ref);     
    (*head_ref)    = new_node; 
} 
void printList(struct Node *node) 
{ 
    while (node != NULL) 
    { 
        printf("%d  ", node->data); 
        node = node->next; 
    } 
}     
int main(void) 
{ 
    struct Node* head = NULL; 
    printf("Enter the no of elemnts");
    scanf("%d",&n);
    printf("Enter the elements of SLL");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ele);
        push(&head,ele);
    }
     printf("\nGiven linked list \n"); 
     printList(head); 
     printf("Enter the value of size k\n ");
     scanf("%d",&k);
     head = reverse(head, k); 
     printf("\nReversed Linked list \n"); 
     printList(head); 
     return(0); 
} 
