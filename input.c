#include <stdio.h>
/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
   *cc = 'o';
   ccc = 'l';
}
#include <stdio.h>
/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   char c;
   char *p;

   p = &c;
   c = 'J';
   modif_my_char_var(p, c);
   printf("Value of 'p' after the call: %c\n", p);
   printf("Value of 'c' after the call: %c\n", c);
   return (0);
}