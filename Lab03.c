#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int num[20];
	int i;
	printf("�п�J�Q�ӼƦr, �ΪŮ�j�}");
	
	for(i=0;i<10;i++){
		scanf("%d",&num[i]);
	}
	printf("�z��J���Ʀr��:\n");
	
	for(i=0;i<10;i++){
	    printf("%d\n",num[i]);
	}
		
	return 0;
}
