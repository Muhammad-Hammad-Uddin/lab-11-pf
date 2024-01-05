#include<stdio.h>
#include<stdlib.h>  
	struct Register{
	int course_id;
	char course_name[50];	
	};
	struct  student{
	int student_id;
    char firstname[50];
    char lastname[50];
    char cellno[15];
    char email[50];
    struct Register Reg;
		
	};
int main(){
	struct student arr[5];
	int i;
	for(i=0;i<5;i++){
		printf("Enter details for %d",i+1);
		printf("Student Id: ");
		scanf("%d",&arr[i].student_id);
		printf("First Name: ");
		scanf("%s",arr[i].firstname);
        printf("Last Name: ");
        scanf("%s",arr[i].lastname);
        printf("Cell Number: ");
        scanf("%s",arr[i].cellno);
        printf("Email: ");
        scanf("%s",arr[i].email);
        printf("enter Course id");
        scanf("%d",&arr[i].Reg.course_id);
        printf("CourseName: ");
        scanf("%s",arr[i].Reg.course_name);
	}
	for(i=0;i<5;i++){
		printf("Enter details for %d",i+1);
		printf("Student Id: ");
		printf("%d",arr[i].student_id);
		printf("First Name: ");
		printf("%s",arr[i].firstname);
        printf("Last Name: ");
        printf("%s",arr[i].lastname);
        printf("Cell Number: ");
        printf("%s",arr[i].cellno);
        printf("Email: ");
        printf("%s",arr[i].email);
        printf("enter Course id");
        printf("%d",arr[i].Reg.course_id);
        printf("CourseName: ");
        printf("%s",arr[i].Reg.course_name);
	}
	    
        

	
	
}
