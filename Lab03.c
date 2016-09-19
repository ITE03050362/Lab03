#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int num[20];
	int i;
	printf("請輸入十個數字, 用空格隔開");
	
	for(i=0;i<10;i++){
		scanf("%d",&num[i]);
	}
	printf("您輸入的數字為:\n");
	
	for(i=0;i<10;i++){
	    printf("%d\n",num[i]);
	}
		
	return 0;
}
