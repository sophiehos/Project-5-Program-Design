//Sophia Hostetler
//U27264415
//This program will modify project 2 in order to put the phone number in the command line argument


#include<stdio.h>
#include<string.h>

void translate(char *word, char *phone_number);

int main(int argc, char *argv[])
{

//if statement to ensure correct number of arguments are entered

	if(argc!=2)
	{
		printf("Output: Incorrect number of arguments.Usage: ./a.out phoneNumber\n");
		return -1;
	}
	
	char number[100];

//call translate function

	translate(argv[1], number);
	printf("Output: %s\n", number);

return 0;
}

//translate function turns the alphabetic letters into numbers for a phone number

void translate(char *word, char *phone_number)
{
	int i=0;

//while loop making sure the null character is not pointed to to run the program

	while(*(word+i)!='\0')
	{

//if and else if statements for letters pointing to their designated number

	if(*(word+i)=='A' || *(word+i)=='B' || *( word+i)=='C')
		*(phone_number+i) = '2';

	else if(*(word+i)=='D' || *( word+i)=='E' || *(word+i)=='F')
		*(phone_number+i) = '3';

	else if(*(word+i)=='G' || *(word+i)=='H' || *(word+i)=='I')
		*(phone_number+i) = '4';

	else if(*(word+i)=='J' || *(word+i)=='K' || *(word+i)=='L')
		*(phone_number+i) = '5';

	else if(*(word+i)=='M' || *(word+i)=='N' || *(word+i)=='O')
		*(phone_number+i) = '6';

	else if(*(word+i)=='P' || *(word+i)=='Q' || *(word+i)=='R' || *(word+i)=='S')
		*(phone_number+i) = '7';

	else if(*(word+i)=='T' || *(word+i)=='U' || *(word+i)=='V')
		*(phone_number+i) = '8';

	else if(*(word+i)=='W' || *(word+i)=='X' || *(word+i)=='Y' || *(word+i)=='Z')
		*(phone_number+i) = '9';

	else
		*(phone_number+i) = *(word+i);
		i++;

	}

	*(phone_number+i) = '\0';

}
