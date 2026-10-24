#include<stdio.h>
#include<string.h>
void xoadaucach(char chuoi[]){
	int sodaucach=0;
	while(chuoi[sodaucach]==' '){
		sodaucach++;
	}
	int i=0;
	while(chuoi[i+sodaucach]!='\0'){
		chuoi[i]=chuoi[i+sodaucach];
		i++;
		
	}
	chuoi[i]='\0';
}
int main(){
	char chuoi[100];
	fgets(chuoi,sizeof(chuoi),stdin);
	xoadaucach(chuoi);
	printf("Ket qua sau khi xoa dau cach la: %s\n",chuoi);
}
