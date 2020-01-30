#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
	char word[50],str[50];
	int k=0;
	cout<<"enter the string"<<endl;
	gets(str);
	strcat(str," ");
	
	//int len;
	//for(len=0; str[len]!='\0';len++); //length
	
	int i;
	for(i=0; str[i]!='\0' ;i++)
	{
		if(str[i]!=' ')
		{
			word[k]=str[i];
			k=k+1;
		}
		else
		{
			while(k>0)
			{
				cout<<word[--k];
				
			}
			cout<<str[i];
		}
						
	}
	getch();
	
}









