#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct SNode
{
char data;
struct SNode* next;
};

void Push(struct SNode** top, char ch)
{
	struct SNode *newptr;
	newptr=(struct SNode *)malloc(sizeof(struct SNode));
	newptr->data=ch;
	if(*top==NULL)
	{
		newptr->next=NULL;
		*top=newptr;
	}
	else
	{
		newptr->next=*top;
		*top=newptr;
	}
}
char Pop(struct SNode** top)
{
	char c = (*top)->data;
	struct SNode *tempptr;
	tempptr=*top;
	*top=(*top)->next;
	free(tempptr);
	return c;
}
bool IsEmpty(struct SNode* top)
{
	return (top==NULL);
}
char Top(struct SNode* top)
{
	char d = top->data;
	return d;
}

