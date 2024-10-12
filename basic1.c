#include<stdio.h>
	int main(){
		int a[20],n,i;
		printf("enter num of elements:");
		scanf("%d",&n);
		printf("\nenter elements:");
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		printf("\nelements of array with address are:");
		for(i=0;i<n;i++)
		printf("a[%d]=%d | address a[%d]=%u\n",i,a[i],i,&a[i]);
		return 0;
}