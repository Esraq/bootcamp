#include<stdio.h>
int main()
{
	
	int a[5]={45,98,97,87,98};
	int i;
	int sum=0;
	
	for(i=0;i<5;i++){
		
		
		sum=sum+a[i];
		printf("%d\n",a[i]);
	}
	
	
	printf("Sum:%d",sum);
	
	
	
	
	return 0;
	
}


