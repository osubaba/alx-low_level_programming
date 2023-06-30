#include "main.h"
/**
*rot13 - encoding a string
*@s: - string
*Return: result
*/
char *rot13(char *s)
{
int v, t;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (v = 0; s[v] != '\0'; v++)
{
for (t = 0; a[t] != '\0'; t++)
{
if (s[v] == a[t])
{
s[v] = b[t];
break;
}
}
}
return (s);
}
