#include<stdio.h>
#include<string.h>
int main(){
	char pw[100];
	int c;
	while(c<5){
		scanf("%s",pw);
		if(strcmp(pw,"abcxyz")==0){
			printf("Accept\n");
		}
		else{
			printf("yeu cau nhap lai\n");
			c++;
		}
	}
	printf("Ban da nhap sai 5 lan!\n");
	return 0;
}
