#include<stdio.h>
main()
{
	int a[10],b[10],c[20];
	int n,i;
	
	printf("enter count ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("enter count A :");
		scanf("%d",&a[i]);
	
	}
		for(i=0; i<n; i++){
		printf("enter count B :");
		scanf("%d",&b[i]);
	
	}
	for(i=0; i<n; i++){
		c[i]=a[i]+b[i];
	}
	

	for(i=0; i<n; i++){
		printf("  %d",c[i]);
	
}
	

}
