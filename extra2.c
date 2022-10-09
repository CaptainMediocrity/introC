#include<stdio.h>

int main(void)
{

	unsigned long long int x, y, c;
	unsigned long long int n[30]={0};
	int i;
	i=0;

printf("Welcome to the base 10 ---> base 2 converter\n");
printf("Enter a number from 0 ---> 18,446,744,073,709,551,615: ");
scanf("%llu", &x);


while(x!=0)
{
	y=x%2;
	x=(x/2);
	n[i]=y;
	i++;	
}

printf("Your number in base 2 is:\n");

for(i=i-1; i>=0;i--)
{
	printf("%llu", n[i]);
}

return 0;
}
