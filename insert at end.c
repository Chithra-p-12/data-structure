#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
int main() {
    struct Node *head=NULL, *temp, *newNode;
    int val;
    printf("Enter value: ");
    scanf("%d",&val);

    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=val; newNode->next=NULL;

    if(head==NULL) head=newNode;
    else {
        temp=head;
        while(temp->next!=NULL) temp=temp->next;
        temp->next=newNode;
    }
    return 0;
}

