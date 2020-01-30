#include<iostream>
using namespace std;

int main()
{
	const int size=3;
	float arr[size];
	for(int i=0;i<size;i++)
	{
		cout<<"enter the marks of student "<< i+1<<"\n";
		cin>>arr[i];
	}
	for(int i=0;i<size;i++)
	{
		cout<<"the marks of student "<<i+1<<"\n";
		cout<<arr[i];
		cout<<"\n";
	}
}
