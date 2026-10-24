#include<stdio.h>
#include<string.h>
void xoadaucach(char chuoi[]){
	int dodai=strlen(chuoi);
	int vitricuoi=dodai-1;
	while(chuoi[vitricuoi]==' '){
		chuoi[vitricuoi]='\0';
		vitricuoi=vitricuoi-1;
		
	}
} 
int main(){
	char chuoi[100];
	fgets(chuoi,sizeof(chuoi),stdin);
	xoadaucach(chuoi);
	printf("Ket qua sau khi xoa dau cach cuoi chuoi la: %s\n",chuoi);
}
