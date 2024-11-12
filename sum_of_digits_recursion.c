#include<stdio.h>
int sum(n){
	if(n==0)
	return 0;
	else
	return n+sum(n-1);
}
int main(){
	int n,s;
	printf("enter the number:");
	scanf("%d",&n);
	s=sum(n);
	printf("%d ",s);
	return 0;
}
