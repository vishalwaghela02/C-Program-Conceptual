#include <stdio.h>

int main(void)
{
    char chChar;

    printf("Enter character:\n");
    scanf("%c", &chChar);

    switch(chChar)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("It is small letter vowel\n");
            break;

        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("It is capital letter vowel\n");
            break;
    }

    return 0;
}