#include <stdio.h>
#include <stdlib.h>
struct node 
{
    char data;
    struct node * next;
};
void main()
{
    struct node * node1,*node2,*node3,*node4,*node5;
    node1=(struct node *)malloc(sizeof(struct node));
    node2=(struct node *)malloc(sizeof(struct node));
    node3=(struct node *)malloc(sizeof(struct node));
    node4=(struct node *)malloc(sizeof(struct node));
    node5=(struct node *)malloc(sizeof(struct node));
    node1->data='R';
    node2->data='G';
    node3->data='U';
    node4->data='K';
    node5->data='T';
    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    node4->next=node5;
    node5->next=node1;
    struct node * head=node1;
    struct node * temp=head;
    printf("Circular linked list : ");
    printf("%c->",node1->data);
    printf("%c->",node2->data);
    printf("%c->",node3->data);
    printf("%c->",node4->data);
    printf("%c\n",node5->data);
}