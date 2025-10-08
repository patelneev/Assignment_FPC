
//Count consonants in a string
#include <stdio.h>
#include <string.h>
void main()
{
 char str[100];
 int c= 0;
 printf("Enter a string: ");
 fgets(str, sizeof(str), stdin); // Read string input (including spaces)
 for (int i = 0; str[i] != '\0'; i++)
 {
 if (! (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A'
|| str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'))
 {
 c++;
 }
 }
 printf("Number of consonants: %d\n", c);
}
Output