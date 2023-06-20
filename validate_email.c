//Sophia Hostetler
//U27264415
//This program will check the eligibility of an email based on whether it ends in .edu or not

#include<stdio.h>
int read_line(char *str, int n);
int validate(char *s1);

int main()
{
	char input[1001];
	
//prompt user to input email

	printf("Input: ");
	
	int length;

//call read_line function

	length=read_line(input, 1000);
	
	char *p;

	printf("Output: ");

//for loop to go through all of the characters and calls validate function

	for(p=input;p<input+length;p++)
	{
			
		if(validate(p)==0)

		{
			printf("Not eligible for discount");
			return 0;
		}
		else if(validate(p)==1)
		{

			printf("Verification successful");
			return 0;
		}
	}	

return 0;
}

//validate function checks if the email is valid for the discount

int validate(char *s1)
{

	int i, c=0, d=0;

//for loop to go through the string

	for(i=0;*(s1+i)!='\0';i++)
	{
		c++;
	}

//for loop to check if the email ends in .edu
	
	for(i=0;i<c;i++)
	{
		if(i==c-4)
		{
			if(*(s1+i)=='.')
			{
				d++;
			}
		}
		if(i==c-3)
		{
			if(*(s1+i)=='e')
			{
				d++;
			}
		}
		if(i==c-2)
		{
			if(*(s1+i)=='d')
			{
				d++;
			}
		}
		if(i==c-1)
		{
			if(*(s1+i)=='u')
			{
				d++;
			}
		}
	}
	c=0;

//if statement checking if all previous requirements match to ending in .edu

	if(d==4)
	{
		c=1;
	}
	else
	{
		c=0;
	}
return c;
}

//read_line function reads the characters and stores them

int read_line(char *str, int n)
{
	int ch, i=0;
	
	while((ch=getchar()) != '\n')
	{
		if(i<n)
		{
			*str++=ch;
			i++;
		}
	}
	*str='\0';
	return i;
}
