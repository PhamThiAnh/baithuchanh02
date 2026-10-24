#include<stdio.h>
#include<string.h>
int main(){
	char pw[100];
	int c=0;
	while(1){
		scanf("%s",pw);
		if(strcmp(pw,"abcxyz")==0){
			printf("Accept\n");
			break;
		}
		else{
			printf("Yeu cau nhap lai!\n");
		}
	}
	return 0; 
} 
