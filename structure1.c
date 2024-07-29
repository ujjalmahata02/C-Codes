#include<stdio.h>
int main()
{
struct student
{
char name[100];
int roll;
float marks;
};
struct student s[100];
for(int i=0; i<100; i++)
{
printf("\n enter name");
scanf("%s",s[i].name);
printf("\n enter roll and marks");
scanf("%s",&s[i].roll,&s[i].marks);
}
printf("\n the student data type are");
for(int i=0; i<100; i++)
{
printf("%s \t %d\t %f",s[i].name,s[i].marks,s[i].roll,s[i].marks);	
}
return 0;
}