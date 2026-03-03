#include <stdio.h>
#include <string.h>

int main() {
    char ch[100];
    printf("Enter a code name: ");
    scanf("%s", ch);

    int len = strlen(ch);

    printf("Mirror format: ");
    for(int i = len - 1; i >= 0; i--) {
        printf("%c", ch[i]);
    }
    printf("\n");

    return 0;
}