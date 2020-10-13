#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char line[50];
	cout<<"enter a string: \n";
	gets(line); // used to read string
	cout<<"\n the string is : \n"<<line;
	int x=strlen(line);
	int count=0;
		for(int i=0; i<x;i++)
		{
			switch(line[i]) //checking for all vowels ( upper or lower case )
			{
				case 'a':
				case 'A':
				case 'E':
				case 'e':
				case 'i':
				case 'I':
				case 'o':
				case 'O':
				case 'u':
				case 'U':
				++count;	
				
				}
		}
		
		cout<<"\n the total vowels are: \n"<<count;
		
}
