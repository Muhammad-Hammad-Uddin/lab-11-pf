#include<stdio.h>
#include<stdlib.h>

struct tunnel{
	
	int length;
	int width;
	int height;
};

int main(){
	
	struct tunnel box;
	printf("enter length width and height for %d",i+1);
	scanf("%d %d %d",&box.length,&box.width,&box.height);
	if(box.height < 41){
		int vol = box.length*box.width*box.height;
		printf("\n%d",vol);
	}
	
	return 0;
}
