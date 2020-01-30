#include<iostream>
#include<conio.h>
using namespace std;

int main()
{	int size,flag,pos;
	cout<<"enter the size of the array \n";
	cin>>size;
	int arr[size];
	for(int i=0; i<size;i++)
	{
		cout<<"enter the element"<<i+1<<"\n";
		cin>>arr[i];
	}
	int num;
	cout<<"enter the searched element";
	cin>>num;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==num)
		{
		
		flag=1;
		pos=1;
		break;
		}
	}
	if (flag==0)
		cout<<"element not found";
	else
	cout<<"element found at position"<<pos+1<<"\n";
	getch();
}
