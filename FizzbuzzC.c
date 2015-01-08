#include <stdio.h>
#include <stdlib.h>
int main()
{
int number = 0;
// getchar ();
printf("Nombre ?\n");

scanf("%d", &number);


if (number % 5 == 0 && number % 3 == 0)
{
printf("\n");
printf("FizzBuzz");
printf("\n");
}
else if (number % 3 == 0)
{
printf("\n");
printf("Fizz");
printf("\n");
return 0;
}
else if (number % 5 == 0)
{
printf("\n");
printf("Buzz");
printf("\n");
return 0;
}
else
{
printf("%d",number);
}

