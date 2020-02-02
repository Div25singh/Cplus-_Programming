#include<iostream>
using namespace std;

int main()
{
	cout<<"enter the Number days of sales";
	int size;	
	cin>>size;
	float arr[size];
	int total;
	for(int i=0; i<size ; i++)
	{
		cout<<"enter sales for day "<<i+1<<"\n";
		cin>>arr[i];
		total = total+arr[i];	
	}
	float avg=total/size;
	cout<<"total is :"<<total;
	cout<<"avg is:"<<avg;
}
