#include <stdio.h>
/**
* positive_or_negative - print whether n is positive or negative.
* @n: n argument for number n
*/
void positive_or_negative(int n)
{
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
}
