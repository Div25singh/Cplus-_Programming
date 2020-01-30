#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[50];
	cout<<"enter a string \n";
	cin.getline(str,50);
	//check length
	int len;
	int x= strlen(str);  //lenght of string
	for(len=0; str[len]!='\0';len++); //before space lenght
	cout<<"the length of the string is \n "<<len;
	
	for(int i=0; i<x;i++)
	{ //filling
		if(str[i]== ' ')
		{
			str[i]='-';	
		}	
	}	
	cout<<"the changed string is : \n"<<str;
	
}
