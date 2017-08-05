#ifndef _STACK_H
#define _STACK_H

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode Stack;
typedef PtrToNode Position;
typedef int ElementType; 

Stack CreateStack(void);
void MakeEmpty(Stack S);
void Push(ElementType X, Stack S);
void Pop(Stack S);
ElementType Top(Stack S); 
int IsEmpty(Stack S);
void PrintStack(Stack S);

#endif /*_STACK_H*/

typedef struct Node  
{
    ElementType Element;  
    Position Next;  
}Node;
