#include<stdio.h>
int main(){
    int m,n,i,j;
    printf("Enter the row and column:");
    scanf("%d%d",&m,&n);
    int a[m][n],b[m][n],result[m][n];
	
    //scan
    printf("enter the first matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the second matrix:\n");
      for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    //sum of the matrix
    printf("sum of the matrix\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
           result[i][j]=a[i][j]+b[j][i];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
          printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
