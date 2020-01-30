#include<iostream>
using namespace std;

int main()
{
	char str[50],c;
	cout<<"enter the string";
	cin>>str;
	int len;
	//check the length of the string
	for(len=0; str[len]!='\0';len++); // till null character is not found
	int i , j , flag=0;
	for(i=0,j=len-1;i<len/2;i++,j--)
	{
		if(str[i]!=str[j])
		{
			flag=1;
			break;
		}
	}
	if(flag)
		cout<<" not palindrome";
	else
	cout<<"palindrome";
	return 0;
}
