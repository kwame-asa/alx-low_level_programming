#include "main.h"
/**
 * _isalpha - Checks for alphabectic characters 
 *@c: The character to be checked 
 *Return: 1 for alphabectic character or 0 for anythings else   
 */
 
int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
