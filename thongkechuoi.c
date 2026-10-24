#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[100];
	int dem[256]={0};
	int i;
	fgets(chuoi,sizeof(chuoi),stdin);
	chuoi[strcspn(chuoi,"\n")]='\0';
	for(i=0;chuoi[i]!='\0';i++){
		int vi_tri=(unsigned char)chuoi[i];
		dem[vi_tri]++;
		
	}
	printf("\nKet qua thong ke\n");
	for(i=0;i<256;i++){
		if(dem[i]>0){
			printf("Ky tu '%c' xuat hien: %d lan\n",i,dem[i]);
		}
	}
	return 0;
	
}

