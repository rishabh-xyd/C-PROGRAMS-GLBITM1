#include<stdio.h>
int main(){
    int m,n;
    printf("enter the integer value:");
    scanf("%d",&m);
    if(m>0){
        n=1;
    printf("n:%d",n);
    }
    else if(m==0){
        n=0;
    printf("n:%d",n);
    }
    else
	{
        n=-1;
    printf("n:%d",n);
    }
    return 0;
}