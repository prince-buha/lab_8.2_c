/* 
Q.1 Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different.
For example,
enter the array size: 2
enter the elemnts of array A
enter a[0]:12
enter a[1]:13
enter the array size: 4
enter the elemnts of array B
enter b[0]:22
enter b[1]:33
enter b[2]:44
enter b[3]:55
Array c:- 12 13 22 33 44 55



*/
#include<stdio.h>

void main(){
	 int n;
	printf("enter the array size: ");
	scanf("%d",&n);
	
	int a[n];
	
	int i;
	printf("enter the elemnts of array A\n");
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	int m;
	printf("enter the array size: ");
	scanf("%d",&m);
	
	int b[m];

	
	printf("enter the elemnts of array B\n");
	
	for(i=0;i<m;i++)
	{ 
		printf("enter b[%d]:",i);
		scanf("%d",&b[i]);
	}
	
	int c[n+m];
	for(i=0;i<n;i++){
		c[i]=a[i];
	}
	for(i=0;i<m;i++){
		c[n+i]=b[i];
	}
	printf("Array c:- ");
	for(i=0;i<n+m;i++){
		printf("%d ",c[i]);
	}
	

}
