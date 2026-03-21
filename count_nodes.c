#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node* createnode(int data) {
    struct node *a;
    a = (struct node*)malloc(sizeof(struct node));
    a->data = data;
    a->next = NULL;
    return a;
}

struct node* atend(struct node *head, int data) {
    struct node *a = createnode(data);
    if (head == NULL)
        return a;

    struct node *temp;
    temp = head;
    while (temp->next != NULL)   
        temp = temp->next;

    temp->next = a;              
    return head;
}

int countnode(struct node *head) 
{
    int c = 0;                  
    struct node *temp;
    temp = head;
    while (temp != NULL)         
    {
        c++;
        temp = temp->next;
    }
    return c;                   
}

void traverse(struct node *head) {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL)
            printf(" -> ");
        temp = temp->next;
    }
    printf(" -> NULL\n");
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    struct node *head = NULL;
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        int data;
        scanf("%d", &data);
        head = atend(head, data);   
    }

    printf("\nLinked List: ");
    traverse(head);

    printf("Number of nodes: %d\n", countnode(head)); 

    return 0;
}
