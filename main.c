/*main file for testing Static Stack implementation*/

#include<stdio.h>

#ifndef STATICSTACK_C
#include "staticStack.c"
#endif

#ifndef STATICSTACK_H
#include "staticStack.h"
#endif

#define PRINT_STACK printf("\nTop->");\
					for(int i=Stack.SP;i>=0;i--)\
						printf("%d->",Stack.data[i]);\
					printf("END\n");\

int main(void)
{
	int status, data;
	sStack_t Stack;
	
	StackInit(&Stack);
	
	status=isEmpty(&Stack);
	if(status)
		printf("\nStack is Empty.\n");
	else 
		printf("\nStack is NOT Empty.\n");
	
	push(&Stack,10);
	push(&Stack,20);
	push(&Stack,30);
	push(&Stack,40);
	
	PRINT_STACK;
	
	status=push(&Stack,50);
	if(status)
		printf("\ndata is pushed");
	else
		printf("\nStack is Full.");
	
	status=push(&Stack,60);
	if(status)
		printf("\ndata is pushed");
	else
		printf("\nStack is Full.");
	
	PRINT_STACK;
	
	status=pop(&Stack,&data);
	if(status)
		printf("\nPopped data = %d ",data);
	else
		printf("\nStack is Empty.");
	
	status=pop(&Stack,&data);
	if(status)
		printf("\nPopped data = %d ",data);
	else
		printf("\nStack is Empty.");
	
	PRINT_STACK;
	
	status=pop(&Stack,&data);
	if(status)
		printf("\nPopped data = %d ",data);
	else
		printf("\nStack is Empty.");
	
	status=pop(&Stack,&data);
	if(status)
		printf("\nPopped data = %d ",data);
	else
		printf("\nStack is Empty.");
	
	status=pop(&Stack,&data);
	if(status)
		printf("\nPopped data = %d ",data);
	else
		printf("\nStack is Empty.");
	
	status=pop(&Stack,&data);
	if(status)
		printf("\nPopped data = %d ",data);
	else
		printf("\nStack is Empty.");
	
	PRINT_STACK;
}