#include<stdio.h>
#include<string.h>
	struct students_data{
	int roll_no;
	char name[50];
	char course[50];
	char department[50];
	int year;
	};
int main(){

	
	
	struct students_data fast[450]=
	{
	{20,"hammad","bio","medicine",2010},
	{25,"faraz","commerce","ACCA",2012},
	{22,"saad","Enginnering","mechanical",2009},
	{21,"shaheer","Computer","Cyber",2009},
	};
	int a,i;
	printf("enter year\n");
	scanf("%d",&a);

	for(i=0;i<4;i++){
		if(a==fast[i].year){
			printf("%d\t",fast[i].roll_no);
			printf("%s\t",fast[i].name);
			printf("%s\t",fast[i].course);
			printf("%s\t",fast[i].department);
			printf("%d\t",fast[i].year);
			
		}
		if(a==fast[i].year){
			printf("\n");
		}
		
	}
	int b;
	printf ("enter roll number\n");
	scanf("%d",&b);
	for(i=0;i<4;i++){
		if(b==fast[i].roll_no){
			printf("%d\t",fast[i].roll_no);
			printf("%s\t",fast[i].name);
			printf("%s\t",fast[i].course);
			printf("%s\t",fast[i].department);
			printf("%d\t",fast[i].year);
			
		}
   }
	
	


	
	
}
