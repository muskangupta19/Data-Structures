//MODIFICATION OF SEQUENTIAL SEARCH
#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,x;
	printf("\nEnter no of elements for array");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter elements for array: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nEnter element to be searched");
	scanf("%d",&x);
	int m=0,p=0;
	m=x-a[0];
	p=a[n-1]-x;
	if(m<=p){
		for(i=0;i<n;i++){
		   if(a[i]==x){
		   	 printf("\nElement searched from start");
			 break;
		}
	}
	}
	else{
		for(i=n;i>0;i--){
		   if(a[i]==x){
		   	 printf("\nElement searched from end");
			 break;
		}
	}
	}
	if(i==n){
		printf("\nElement not found");
	}
	else{
		printf("\nElement found at position: %d",i+1);
	}
	return 0;
}
