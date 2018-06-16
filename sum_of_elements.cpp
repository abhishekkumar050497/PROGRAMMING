//1st --Program to find sum of elements in a given array
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int sum=0,n;
	int a[100];
	cout<<"how many numbers you want to enter \n";
	cin>>n;
	cout<<"enter the numbers : \n";
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
	sum+=a[i];
	}
	cout<<"The sum of all the elements in the array=  "<<sum;
	return 0;
}
