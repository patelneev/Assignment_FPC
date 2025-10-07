//Count the number of words in a string
#include <stdio.h>
void main()
{
    char str[100];
    int i,c= 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            c++;
        }
    }
    printf("Number of words: %d\n",c);
}

