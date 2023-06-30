#include "main.h"
/**
*leet - encoded string
*Letters a and A should be replaced by 4
*Letters e and E should be replaced by 3
*Letters o and O should be replaced by 0
*Letters t and T should be replaced by 7
*Letters l and L should be replaced by 1
*@s: string source
*Return: string
*/
char *leet(char *s)
{
int v, r;
char *a = "aAeEoOtTlL";
char *b = "4433007711";
v = 0;
while (s[v] != '\0')
{
r = 0;
while (r < 10)
{
if (a[r] == s[v])
{
s[v] = b[r];
}
r++;
}
v++;
}
return (s);
}
