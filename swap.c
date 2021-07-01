#include<stdio.h>
#include<stdlib.h>

void swap_max(int arr[], int l, int n)
{
  int large = arr[n] ;
	int idx = n;
  
	for(int i=n; i<l; i++)
  {
		if(arr[i] > large)
    {
			large = arr[i];
			idx = i;
		}
	}
  
  int t = arr[n];
	arr[n] = large;
	arr[idx] = t;
}

void ssort(int arr[],int l)
{
	for(int i=0; i<l; i++)
  {
		swap_max(arr,l,i);
	}
}
