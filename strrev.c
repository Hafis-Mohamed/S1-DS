#include<stdio.h>
#include<string.h>



int main(){
    char st[10];
    char stack[10];
    int top =-1;

    
    printf("Enter the string to get reverse :");
    scanf("%s",&st);
    
    for(int i=0;st[i]!='\0';i++){
        stack[++top]=st[i];
    }
    printf("Reversed string:");
    while(top>=0){
        printf("%c",st[top]);
        top--;
    }
    printf("\n");
    return 0;
    
}