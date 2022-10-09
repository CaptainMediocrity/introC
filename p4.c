#include <stdio.h>

#define FALSE 0
#define TRUE 1

int main(void)
{

unsigned long long int test_int, nth_prime, number_of_primes, divisor;

_Bool isPrime;

test_int = 1;
number_of_primes = 0;

printf("Input nth prime number that you would like to find: ");
scanf("%llu", &nth_prime);

do 
{
	test_int++;
	isPrime = TRUE;

		for (divisor = 2; divisor < test_int; divisor++)
		{
			if (test_int%divisor == 0)
			{
				isPrime = FALSE;
				break;
			}
		}

	if (isPrime == TRUE)
		number_of_primes++;
		
}

while(number_of_primes < nth_prime);

printf("The %llu prime number is %llu", nth_prime, test_int);

return 0;

}
