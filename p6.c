#include <stdio.h>

#define TRUE 1
#define FALSE 0

void make_copy_of_string(char str[], char str_copy[]);
void keep_chars(char str[]);
void convert_upper_to_lower_case(char str[]);
_Bool isPalindrome(char str[]);

int main(void){

	char phrase[101], phrase_copy[101];

// --------------------------------------------


	printf("Enter phrase to check: ");
	fgets(phrase, 101, stdin);
	printf("A: *%s*\n", phrase);

	make_copy_of_string(phrase, phrase_copy);
	printf("B: *%s*\n", phrase_copy);

	keep_chars(phrase_copy);
	printf("C: *%s*\n", phrase_copy);

	convert_upper_to_lower_case(phrase_copy);
	printf("D: *%s*\n", phrase_copy);




	if (isPalindrome(phrase_copy) == TRUE)
		printf("\n The Phrase %s\n Is a palindrome!\n", phrase);
	else 
		printf("Your phrase: %s\nIs not a palindrome!\n", phrase);





	return 0;
}
//-----------  COPY STRING  -----------------------------


void make_copy_of_string(char str[], char str_copy[])
{
	int i=0;

	while(str[i] != '\n' && str[i] != '\0')
	{
		str_copy[i] = str[i];
		i++;
	}// end of while

	str_copy[i] = '\0';
	str[i]      = '\0';

}


//-------------------  KEEP CHARS  ----------------------

void keep_chars(char str[])
{
	int i=0, j=0;

	while (str[i] != '\0')
	{
		if( ('A'<=str[i] && str[i] <= 'Z') || ('a'<=str[i] && str[i]<='z') )
		{
			str[j] = str[i];
			i++;
			j++;
		}// end of if
	
	else 
	{
		i++;
	}//end of else

	}//end of while loop

	str[j] = '\0';

}


//-----------------  CONVERT UPPER TO LOWERCASE  -------------------


void convert_upper_to_lower_case(char str[])
{
	int i=0, j=0;

	while (str[i] != '\0')
	{
		if ( 'A' <= str[i] && str[i] <= 'Z')
		{
			str[j] = str[i] + 32;
			i++;
			j++;
		}// end of if 
	else
	{
		i++;
		j++;
	}//end of else
	
	}// end of while

	str[j]='\0';
}

	
//-------------------  _BOOL IS PALINDROME  -----------------------


_Bool isPalindrome(char str[])
{

int i;
int index_of_last_letter;
int x;

for(i=0; str[i] != '\0'; i++)
{
	// empty for loop
}

index_of_last_letter = i-1;

for(i=0; str[i] != '\0'; i++)
{
	if(str[i] != str[index_of_last_letter - i])
	{
		return FALSE;
	}
}


return TRUE;

}// end of isPalindrome 

