#include <stdio.h>

/**
*main- prints the largest prime factor
*of a number
*
*Return: returns 0
*/

int main(void)
{
int a;
long b = 612852475143;

while (a++ < b / 2)
{
if (b % a == 0)
{
b /= 2;
continue;
}

for (a = 3; a < b / 2; a += 2)
{
if (b % a == 0)
b /= a;

}
}
printf("%ld\n", b);
return (0);
}
