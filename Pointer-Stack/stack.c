#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/*return ture if L is empty*/  
int IsEmpty(Stack S)
{
	return S -> Next == NULL; 
}

void MakeEmpty(Stack S)
{
	if (S == NULL)
	{
		printf("Must use CreateStack first");
	}else{
		while(!IsEmpty(S))
			Pop(S);
	}
}

/*return the top element*/
ElementType Top(Stack S)
{
	if (!IsEmpty(S))
	{
		return S -> Next -> Element;		
	}else{
		printf("Empty stack!");
		return 0;
	}
}

/*pop the top element*/
void Pop(Stack S)
{
	PtrToNode FirstCell;

	if(IsEmpty(S)){
		printf("Empty Stack\n");
	}else{
		FirstCell = S -> Next;
		S -> Next = S -> Next -> Next;
		free(FirstCell);
	}
}

/*push an element to the top of stack*/
void Push(ElementType X,Stack S)
{
	PtrToNode TmpCell;

	TmpCell = malloc(sizeof(struct Node));
	if (TmpCell == NULL)
	{
		printf("Out of space");
	}else{
		TmpCell -> Element = X;
		TmpCell -> Next = S -> Next;
		S -> Next = TmpCell;
	}
}

/*print the stack, from top to bottom*/
void PrintStack(Stack S)
{
	PtrToNode TmpCell;

	while (!IsEmpty(S))
	{	
		TmpCell = S -> Next;
		printf("%d\n", TmpCell -> Element );
		S = TmpCell;
	}
}

/*create a stack*/  
Stack CreateStack()   
{  
    Stack S;

    S = malloc(sizeof(struct Node));  
    if(S == NULL){
    	printf("Out of space!\n");
    }
    S -> Next = NULL;  
    MakeEmpty(S);

    return S;

}