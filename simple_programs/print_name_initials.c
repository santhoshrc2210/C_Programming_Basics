#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    //creating a character array of length 20
    char f_name[20],m_name[20],l_name[20];
    printf("Enter name:");
    //scanf reads only one char before whitespace
    //%s for multiple characters, no need to use &
    scanf("%s%s%s",f_name,m_name,l_name);
    printf("%c%c%c\n",f_name[0],m_name[0],l_name[0]);
    return 0;
}
