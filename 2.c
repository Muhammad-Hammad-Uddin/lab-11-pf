#include<stdio.h>
#include<string.h>
struct auto_mob{
	char s_no[50];
	int year;
	char material[50];
	int quantity;

	};
int main(){
	struct auto_mob car[50]={
	{"AA0",2010,"steel",4},
	{"BB0",2005,"plastic",10},
	{"CC1",2015,"glass",20},
	{"CC5",2004,"steel",10},
		
	};
	int i;
	for (i=0;i<4 ; i++){
			if(strcmp(car[i].s_no,"BB1")>=0 && strcmp(car[i].s_no,"CC6")<=0 ){
				printf("%s\t",car[i].s_no);
				printf("%d\t",car[i].year);
				printf("%s\t",car[i].material);
				printf("%d\t",car[i].quantity);
			}
			if(strcmp(car[i].s_no,"BB1")>=0 && strcmp(car[i].s_no,"CC6")<=0 ){
				printf("\n");
			}
			
		}
	}
