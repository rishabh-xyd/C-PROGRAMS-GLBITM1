#include<stdio.h>
int main(){
    int m,n,i,j;
    printf("Enter the row and column:");
    scanf("%d%d",&m,&n);
    int a[m][n];
    //print
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",a[i][j]);
        }
    }
    return 0;
}
