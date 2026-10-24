#include<stdio.h>
#include<string.h>
void chuanhoa(char*goc,char*ketqua){
	int j=0;
	int i;
	for(i=0;i<strlen(goc);i++){
		if(goc[i]!=' '){
			ketqua[j]=goc[i];
			j++;
		}
		else{
			if(j>0 && ketqua[j-1]!=' '){
				ketqua[j]=' ';
				j++;
			}
		}
	}
	if(j>0 && ketqua[j-1]==' '){
		j--;
	}
	ketqua[j]='\0';
}
int main(){
	char goc[100];
	char ketqua[100];
	fgets(goc,sizeof(goc),stdin);
	goc[strcspn(goc,"\n")]='\0';
	chuanhoa(goc,ketqua);
	printf("Ket qua sau khi xoa dau cach o trong chuoi la: %s\n",ketqua);
}
