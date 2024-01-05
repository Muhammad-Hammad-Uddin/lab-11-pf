#include<stdio.h>
struct data{
	int day;
	int month;
	int year;
};
int main(){
	struct data first;
	printf("enter day of first");
	scanf("%d",&first.day);
	printf("enter month of first");
	scanf("%d",&first.month);
	printf("enter year of first");
	scanf("%d",&first.year);
	struct data second;
	printf("enter day of second");
	scanf("%d",&second.day);
	printf("enter day of second");
	scanf("%d",&second.month);
	printf("enter day of second");
	scanf("%d",&second.year);
	if(first.day==second.day&&first.month==second.month&&first.year==second.year){
		
		printf("dates are eqaul");
	}
	else{
		printf("dates are not equal");
	}
	
	
	 
     
}
