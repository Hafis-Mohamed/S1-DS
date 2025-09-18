    #include<stdio.h>
    

    int main(){
        char st[10],stack[10];
        int top=0;
        printf("Enter the string to be reversed :");
        scanf("%s",&st);
        for(int i=0;st[i]!='\0';i++)
        {
            stack[top]=st[i];
            top++;
        }
        printf("The reversed string is :");
        top--;
        while(top>=0)
        {

            printf("%c",stack[top]);
            top--;
        }
    }