#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int arr1[100][100];
	int arr2[100][100];
	int n,m;
	
	cout<<"enter the row of matrix \n";
	cin>>n;
	cout<<"enter the colum of matrix \n";
	cin>>m;
	cout<<"enter the elements";
	for(int i=0; i<n ; i++)
	{
		for(int j=0; j<m ; j++)
		{
			cin>>arr1[i][j];
		}
	}
	cout<<"the matrix is \n";
	for(int i=0; i<n ; i++)
	{	cout<<"\n";
		for(int j=0; j<m ; j++)
		{
			cout<<arr1[i][j]<<" ";
		}
	}
	cout<<"\n";
	cout<<"the transpose of the matrix is \n";
	for(int i=0; i<n ; i++)
	{	cout<<"\n";
		for(int j=0; j<m ; j++)
		{
			arr2[i][j] =arr1[j][i];
			cout<<arr2[i][j]<<" ";
		}
	}
}
