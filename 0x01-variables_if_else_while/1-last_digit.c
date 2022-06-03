#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{

int n, last;
char mssg[] = "Last digit of";
srand(time(0));
n = rand() - RAND_MAX / 2;
last_num = n % 10;
if (last_num > 5)
{
printf("%s %d is %d and greater than the number5\n", mssg, n, last_num);
}
else if (last_num == 0)
{
printf("%s %d is %d and is 0\n", mssg, n, last_num);
}
else if (last_num < 6)
{
printf("%s %d is %d and it is less than 6 and but not 0\n", mssg, n, last_num);
}
return (0);
}
