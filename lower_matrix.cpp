#include<iostream>
#include<conio.h>
using namespace std;
void lower(int mat[3][3],int row,int col)
{int i,j;
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		if(i<j)
		{
			mat[i][j]=0;
			
		}
		cout<<mat[i][j]<<" ";
	}
	cout<<endl;
}
}

int main()
{int mat[][3]={3,3,3,
			4,4,4,
			5,5,5};
			
lower(mat,3,3);
	
}
