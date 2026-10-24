#include<stdio.h>
void xoakytu(char chuoi[],int vitricanxoa){
	for(int i=vitricanxoa;chuoi[i]!='\0';i++){
		chuoi[i]=chuoi[i+1];
	}
}
int main(){
	char chuoi[100];
	int vitri;
	scanf("%d",&vitri);
	fgets(chuoi,sizeof(chuoi),stdin);
	xoakytu(chuoi,vitri);
	printf("Ket qua sau khi xoa: %s\n",chuoi);
	return 0;
}
