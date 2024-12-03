#include<stdio.h>
int main(){
    struct student
    {   
        int rollno;
        char name[40];
    }stud;
    printf("Enter the name:");
    scanf("%[^\n]",&stud.name);
    printf("\nEnter the roll number:");
    scanf("%d",&stud.rollno);
    printf("\nName of the student:%s",stud.name);
    printf("\nName of the roll number:%d",stud.rollno);
    return 0;
}
