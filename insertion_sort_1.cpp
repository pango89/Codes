//this is a test comment
#include <iostream>
#include <stdio.h>
using namespace std;
void display(int *arr, int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void insertionSort(int *arr,int n)
{
    //display(arr,n);
	int ele=arr[0],i,j;
	for(i=1;i<n;i++)
	{
		ele=arr[i];
		j=i;
		while(j>=1 && arr[j-1]>ele)
		{
				arr[j]=arr[j-1];
				j--;
		}
		arr[j]=ele;
		display(arr,n);
	}
}

int main()
{
	int n=0,i=0;
	int *arr;
	scanf("%d",&n);
	arr=new int[n];
	for(;i<n;i++)
        scanf("%d",&arr[i]);
    insertionSort(arr,n);
    delete[] arr;
	return 0;
}
