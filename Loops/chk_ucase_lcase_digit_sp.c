#include <stdio.h>

int main() {
    char crtr;
    int i_crtr;
    printf("Enter character:");
    scanf("%c",&crtr);
    i_crtr=crtr;//type conversion converted to type on left
    //If the ASCII value of the character is between 65 and 90, print "Upper".
    //If the ASCII value of the character is between 97 and 122, print "Lower".
    //If the ASCII value of the character is between 48 and 57, print "Number".
    //Else, print "Symbol"
    if (i_crtr>=65 && i_crtr<=95){
        printf("Upper");
    }
    else if (i_crtr>=97 && i_crtr<=122){
        printf("Lower");
    }
    else if (i_crtr>=48 && i_crtr<=57){
        printf("Number");
    }
    else
        printf("Special Character");
    printf("\n");
}
