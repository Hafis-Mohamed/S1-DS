#include<stdio.h>


int main(){
    char st[100],q[100],stack[100];
    int rear=-1,front=0,top=-1;
    printf("Enter the string :");
    scanf("%s",st);
    for(int i=0;st[i]!='\0';i++){
        q[++rear]=st[i];
        stack[++top]=st[i];
    }
    while(top>=0){
        if(stack[top]!=q[front]){
            printf("String is not palindrome");
            return 0;
        }
        front++;
        top--;
    }
    printf("String is palindrome");
    
}