#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()  
{  
    int i;
    int a[10] = {12,4354,657,876,2433,23,18,943,54,8};  
    Stack S = malloc(sizeof(struct Node));  
    S = CreateStack();
    for(i=0;i<8;i++){
        Push(a[i],S);
    }
    Pop(S);
    int b = Top(S);
    printf("the top value is:%d \n", b);
    if(IsEmpty(S))  
    {  
        printf("The Stack is empty!\n");  
        exit(1);  
    }else{
    	printf("The Stack is not empty!\n");
    	
    } 
    PrintStack(S);
    return 0;  
}  
