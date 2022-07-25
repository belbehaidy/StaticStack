/*Header file for Static Stack declerations*/

#define STATICSTACK_H

#define STACK_SIZE 100

typedef struct
{
	int SP;
	int data[STACK_SIZE];
}sStack_t;

void StackInit(sStack_t *Stack);
int isFull(sStack_t *Stack);
int isEmpty(sStack_t *Stack);
int push(sStack_t *Stack,int data);
int pop(sStack_t *Stack,int *data);
int peek(sStack_t *Stack,int *data);