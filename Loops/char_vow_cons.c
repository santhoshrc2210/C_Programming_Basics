#include <stdio.h>

int main() {
    char crtr;
    printf("Enter character:");
    scanf("%c",&crtr);
    //check for capital letters also observe last iteration of if
    if (crtr=='a'||crtr=='e'||crtr=='i'||crtr=='o'||crtr=='u'||crtr=='A'||crtr=='E'||crtr=='I'||crtr=='O'||crtr=='U')
        printf("Character is a vowel\n");
    else
        printf("Character is not a vowel\n");

    return 0;
}
