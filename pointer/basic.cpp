#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int i=25;
	int * iptr;
	iptr=&i;
	
	cout<<"The value of i is : "<< *iptr<<"\n";	
	cout<<"The memory address of i is : "<< iptr<<"\n";
}
