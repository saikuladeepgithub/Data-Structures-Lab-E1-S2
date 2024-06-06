#include <stdio.h>
#include <stdlib.h>
struct node
{
    char data;
    struct node * next;
};
struct node * insertAtBeginS(struct node * head,char data)
{
    struct node * newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    if(head==NULL)
    {
        head=newnode;
        return head;
    }
    else
    {
        newnode->next=head;
        head=newnode;
        return head;
    }
}
struct node * insertAtEndS(struct node * head,char data)
{
    struct node * newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    if(head==NULL)
    {
        head=newnode;
        return head;
    }
    else
    {
        struct node * temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        return head;
    }
}
struct node * deleteAtBeginS(struct node * head)
{
    if(head==NULL)
    {
        return NULL;
    }
    else
    {
        struct node * temp=head;
        head=head->next;
        free(temp);
        return head;
    }
}
struct node * deleteATEndS(struct node * head)
{
    if(head==NULL)
    {
        return NULL;
    }
    else if(head->next==NULL)
    {
        free(head);
        return NULL;
    }
    else
    {
        struct node * temp=head;
        struct node * prev=NULL;
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        free(temp);
        return head;
    }
}
void printList(struct node * head)
{
    struct node * temp=head;
    while(temp!=NULL)
    {
        printf("%c->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
void main()
{
    struct node * head=NULL;
    printf("Initial linked list\n");
    printf("Linked list : ");
    printList(head);
    head=insertAtBeginS(head,'U');
    head=insertAtBeginS(head,'G');
    head=insertAtBeginS(head,'R');
    printf("After inserting three nodes at beginning \n");
    printf("Linked list : ");
    printList(head);
    head=insertAtEndS(head,'K');
    head=insertAtEndS(head,'T');
    printf("After inserting two nodes at end\n");
    printf("Linked list : ");
    printList(head);
    head=deleteAtBeginS(head);
    head=deleteAtBeginS(head);
    printf("After deleting two nodes at beginning \n");
    printf("Linked list : ");
    printList(head);
    head=deleteATEndS(head);
    head=deleteATEndS(head);
    printf("After deleting two nodes at end\n");
    printf("Linked list : ");
    printList(head);
}