#include <stdio.h>
#include <string.h>

int main() {
    char st[10];         // Input string
    char stack[10];      // Stack array
    int top = -1;        // Stack top pointer

    printf("Enter the string to get reverse: ");
    scanf("%s", st);     // Corrected scanf

    // Push each character to the stack
    for (int i = 0; st[i] != '\0'; i++) {
        stack[++top] = st[i];  // Pre-increment top, then assign
    }

    printf("Reversed string: ");
    // Pop characters from the stack and print
    while (top >= 0) {
        printf("%c", stack[top]);
        top--;
    }

    printf("\n");
    return 0;
}
