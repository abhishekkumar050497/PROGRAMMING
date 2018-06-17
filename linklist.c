//linked list creating and traversal

#include<stdio.h>
#include<conio.h> 
//decaring a linked list
struct Node
{
	int data;
	struct Node *next;
};
void printlist(struct Node *node)
{while(node!=NULL)
{
printf("%d \t",node->data);
node=node->next;
}
}
int main()
{struct Node *head=NULL;
 struct Node *second=NULL;
 struct Node *third=NULL;
 head=(struct Node*)malloc(sizeof(struct Node));	
 second=(struct Node*)malloc(sizeof(struct Node));
 third=(struct Node*)malloc(sizeof(struct Node));
head->data=1;
head->next=second;
second->data=2;
second->next=third;
third->data=3;
third->next=NULL;
printlist(head);
return 0;
}

