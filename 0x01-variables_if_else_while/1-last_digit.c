#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 (Success)
 **/
int main(void)
{
int n, last_digit;
char msg[] = "the Last digit of the given number";
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;
if(last_digit > 5)
{
printf("%s %d is %d and it is greater than 5\n",msg,n,last_digit);
}
else if(last_digit == 0)
{
printf("%s %d is %d and is 0\n",msg,n,last_digit);
}
else if(last_digit < 6)
{
printf("%s %d is %d and it is less than 6 and but not than 0\n",msg,n,last_digit);
}
return(0);

