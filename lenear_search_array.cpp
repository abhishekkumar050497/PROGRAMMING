#include<iostream>
#include<conio.h>
using namespace std;
int lsearch(int arr[],int l,int r,int x)
{
	if(r<l)
	return -1;
	if(arr[l]==x)
	return l;
	return(arr,l+1,r,x); 
}
int main()
{int i,n,arr[100],x;
cout<<"How many number you want to enter :"<<endl;
cin>>n;
cout<<"enter the array : "<<endl;
for(i=0;i<n;i++)
cin>>arr[i];
cout<<"enter the number you want to search : "<<endl;
cin>>x;	
int index = lsearch(arr, 0, n-1, x);
    if (index != -1)
       printf("Element %d is present at index %d", x, index);
    else
        printf("Element %d is not present", x);
return 0;
	
}
