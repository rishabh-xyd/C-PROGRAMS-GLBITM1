
#include <stdio.h>

int main() {
struct student {
    int rollno,totalmarks;
    char name[40];
}stud[100];
int i,n;
printf("Enter the number of students:");
scanf("%d",&n);
for(i=1;i<=n;i++){
    printf("Enter the name of the sudent%d:",i);
    scanf("%[^\n]%*c",stud[i].name);
    printf("\nEnter the roll number of the sudent%d:",i);
    scanf("%d",&stud[i].rollno);
    printf("\nEnter the total marks of the sudent%d:",i);
    scanf("%d",&stud[i].totalmarks);
}
    for(i=1;i<=n;i++){
        printf("\nThe name of the sudent%d is:%s",i,stud[i].name);
        printf("\nThe roll number of the sudent%d is:%d",i,stud[i].rollno);
        printf("\nThe total marks of the sudent%d:%d",i,stud[i].totalmarks);
}

 return 0;

}
