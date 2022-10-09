#include <stdio.h>

#define TRUE 1
#define FALSE 0 

_Bool check_if_prime (unsigned int);

int main(void)
{

	unsigned int nth_prime, number_of_primes;
	unsigned int test_int, divisor;
	_Bool isPrime;

printf("Nth Prime:");
scanf("%u", &nth_prime);

number_of_primes = 0;
test_int = 1;

do
{
	test_int++;
	isPrime = check_if_prime (test_int);

	if(isPrime == TRUE)
		number_of_primes++;
}
while(number_of_primes < nth_prime);

printf("The %u Prime Number = %u\n", nth_prime, test_int);

return 0;
}

_Bool check_if_prime(unsigned int number)
{
	unsigned int divisor;
	_Bool isPrime = TRUE;
	for(divisor = 2; divisor < number; divisor++)
	{
		if(number % divisor == 0)
		{
			isPrime = FALSE;
			break;
		}
	}
	return isPrime;
}
