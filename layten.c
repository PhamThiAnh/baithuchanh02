#include<stdio.h>
#include<string.h>
void layten(char chuoi[],char ten[]){
	int i=strlen(chuoi)-1;
	while(i>=0 && chuoi[i]!=' '){
		i--;
	}
	strcpy(ten,&chuoi[i+1]);
}
int main(){
	char chuoi[100];
	char ten[100];
	fgets(chuoi,sizeof(chuoi),stdin);
	chuoi[strcspn(chuoi,"\n")]='\0';
	layten(chuoi,ten);
	printf("Ket qua sau khi lay ten la: %s\n",ten);
}
