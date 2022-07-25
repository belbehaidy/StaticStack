/*Implementation of Header file functions for Static Stack*/

#define STATICSTACK_C


#ifndef STATICSTACK_H
#include "staticStack.h"
#endif

void StackInit(sStack_t *Stack)
{
	Stack->SP=-1;
}
int isFull(sStack_t *Stack)
{
	return(Stack->SP == (STACK_SIZE-1));
}
int isEmpty(sStack_t *Stack)
{
	return (Stack->SP == -1);
}
int push(sStack_t *Stack,int data)
{
	int pushed=1;
	
	if(!isFull(Stack))
		Stack->data[++(Stack->SP)] = data;
	else pushed=0;
	
	return pushed;
}
int pop(sStack_t *Stack,int *data)
{
	int popped=1;
	
	if(!isEmpty(Stack))
		*data = Stack->data[(Stack->SP)--];
	else popped=0;
	
	return popped;
}
int peek(sStack_t *Stack,int *data)
{
	int peeked=1;
	
	if(!isEmpty(Stack))
		*data = Stack->data[(Stack->SP)];
	else peeked=0;
	
	return peeked;
}
