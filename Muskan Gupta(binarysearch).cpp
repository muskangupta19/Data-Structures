//BINARY SEARCH
#include<stdio.h>
#include<conio.h>
int* bsort(int a[],int n){
	int i,swap=0,j,k;
	for(i=0;i<n;i++){
		swap=0;
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
				swap=1;
			}
		}
		if(swap==0){
			break;
		}
	}
	return a;
}
int bsearch(int m[],int n,int x){
	int b=0,e=n-1,mid=0;
	int r=-1;
	while(b<=e){
		mid=(b+e)/2;
		if (m[mid]==x){
			r=mid;
		}
		else if(m[mid]<=x){
			b=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	return r;
}
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
	printf("\n--Array after sorting--\n");
	int* m=bsort(a,n);
	for(i=0;i<n;i++){
		printf("%d ",m[i]);
	}
	int res;
	res=bsearch(m,n,x);
	if(res==-1){
		printf("\nElement not found");
	}
	else{
		printf("\nElement found at position: %d",res+1);
	}
	return 0;
}
