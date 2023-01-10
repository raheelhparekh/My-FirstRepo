#include <stdio.h>  
#include <string.h>  
  
int top,stack[100];  
  
void push(char x){  
  
      // Push(Inserting Element in stack) operation  
      if(top == 100-1){  
          printf("stack overflow");  
      }  else {  
          stack[++top]=x;  
      }  
  
}  
  
void pop(){  
    // Pop (Removing element from stack)  
      printf("%c",stack[top--]);  
}  
  
  
main()  
{  
   char str[]="Raheel Parekh";  
   int length = strlen(str);  
   int i;  
  
   for(i=0;i<length;i++)  
        push(str[i]);  
  
   for(i=0;i<length;i++)  
      pop();  
} 