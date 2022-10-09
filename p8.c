#include <stdio.h>

int main (void){

FILE *fp_out; // declares pointer to a file 

	char *str1 = "Four score and seven years ago our";
	char *str2 = "fathers brought forth on this continent,";
	char *str3 = "a new nation, conceived in Liberty and dedicated";
	char *str4 = "to the proposition that all men are created equal.";

	fp_out = fopen("my_file", "w");

		if(fp_out != NULL)
		{
			char *n = "\n";

		fprintf(fp_out, str1);
		fputs(n, fp_out);
		fprintf(fp_out, str2);
		fputs(n, fp_out);
		fprintf(fp_out, str3);
		fputs("\n", fp_out);
		fprintf(fp_out, str4);


		/*	int i;

			for(i=0; *str1[i] != '\0'; i++)
			{
			// empty loop
			}
			str1[i] = "\n\0";
			
			for(i=0; *str2[i] !='\0'; i++)
			{
			//empty
			}
			str2[i] = "\n\0";
			
			for(i=0; *str3[i] !='\0'; i++)
			{
			//empty
			}
			str3[i] = "\n\0";

			for(i=0; *str4[i] !='\0'; i++)
			{
			//empty
			}
			str4[i] = "\n\0";
			
			fputs(str1, fp_out);
			fputs(str2, fp_out);
			fputs(str3, fp_out);
			fputs(str4, fp_out);
		*/
			


			fclose(fp_out);
		}  
		else 
		printf("I couldn't open the file \"my_file\".\n");
		
return 0;

} // end of main
