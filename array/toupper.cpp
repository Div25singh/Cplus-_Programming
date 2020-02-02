#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
	char str[50];
	int i;
	cout<<"enter a string \n";
	gets(str);
	str[0]=toupper(str[0]);
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]==' ')
		{
			str[i+1]=toupper(str[i+1]);
		}
	}
		cout<<"the updated string is : "<<str;	
}









