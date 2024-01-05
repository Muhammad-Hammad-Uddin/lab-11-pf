#include<stdio.h>
#include<string.h>

struct totalsalary{
char name[30];
float salary;
int hours;
};

int main()
{
struct totalsalary data[10];
int i;
for(i=0;i<10;i++){
printf("\n\nEnter data for employee %d\n",i+1);
printf("Enter Name: ");
getchar();
gets(data[i].name);
printf("Enter Salary: ");
scanf("%f",&data[i].salary);
int final= data[i].salary;
printf("Enter Hours worked: ");
scanf("%d",&data[i].hours);
if(data[i].hours>=12)
{
final+=150;
}
else if(data[i].hours>=10)
{
final+=100;
}
else if(data[i].hours>=8)
{
final+=50;
}
printf("\nName : %s",data[i].name);
printf("\nFinal Salary : %d ",final);
}
}
