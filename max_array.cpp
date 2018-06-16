#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int max,arr[100],n;
cout<<"enter how many elements you want to enter : "<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
max=arr[0];
for(int i=0;i<n;i++)
{
if(arr[i]>max)
max=arr[i];
}
cout<<"the max element in the array is "<<max;
	return 0;
	
}
