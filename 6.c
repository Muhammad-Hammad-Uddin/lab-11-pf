#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct date{
int day;
int month;
int year;
};

int main(){
	struct date date1;
	printf("Enter Date: ");
	scanf("%d",&date1.day);
	printf("Enter Month: ");
	scanf("%d",&date1.month);
	printf("Enter Year: ");
	scanf("%d",&date1.year);
	int daystoadd = 45;
	while(daystoadd > 0) {
	int daysinmonth = 30; 
        int daystillend = daysinmonth - date1.day + 1;

        if (daystoadd <= daystillend) {
            date1.day += daystoadd;
            daystoadd = 0; 
        } else {
            date1.month++;
            date1.day = 1;
            daystoadd -= daystillend;
            if (date1.month > 12) {
                date1.month = 1;
                date1.year++;
            }
        }
	}
	
	printf("\n");
	printf("Final date after adding 45 days:\n%d-%d-%d\n", date1.day, date1.month, date1.year);
}
