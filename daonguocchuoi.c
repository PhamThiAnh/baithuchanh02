#include<stdio.h>
#include<string.h>
void daonguoc(char chuoi[]){
	int i;
	int n=strlen(chuoi);
	for(i=0;i<n/2;i++){
		char temp=chuoi[i];
		chuoi[i]=chuoi[n-1-i];
		chuoi[n-1-i]=temp;
}
	}
int main(){
	char chuoi[100];
	fgets(chuoi,sizeof(chuoi),stdin);
	chuoi[strcspn(chuoi,"\n")]='\0';
	daonguoc(chuoi);
	printf("Ket qua sau khi dao nguoc la:%s",chuoi);
}
