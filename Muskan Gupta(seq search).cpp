//SEQUENTIAL SEARCH
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
	for(i=0;i<n;i++){
		if(a[i]==x){
			break;
		}
	}
	if(i==n){
		printf("\nElement not present in array");
	}
	else{
		printf("\nElement found at position :%d",i+1);
	}
	return 0;
}
