#include<stdio.h>
#include<string.h>
void demsotu(char chuoi[]){
	int dem=0;
	int trongtu=0;
	int i;
	for(i=0;chuoi[i]!='\0';i++){
		if(chuoi[i]!=' ' && chuoi[i]!='\t' && chuoi[i]!='\n'){
			if(trongtu==0){
				dem++;
				trongtu=1;
			}
			}
			else{
				trongtu=0;
		}
	}
	printf("Ket qua cac tu trong chuoi la: %d\n",dem);
}
int main(){
	char chuoi[100];
	fgets(chuoi,sizeof(chuoi),stdin);
	demsotu(chuoi);
	return 0;
}
