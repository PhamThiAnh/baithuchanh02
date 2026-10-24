#include<stdio.h>
#include<string.h>
void chuanhoaten(char chuoi[]){
	int i,j=0;
	int n=strlen(chuoi);
	if(n>0 && chuoi[n-1]=='\n'){
		chuoi[n-1]='\0';
		n--;
	}
	for(i=0;i<n;i++){
		if(chuoi[i]!=' '||(j>0 && chuoi[j-1]!=' ')){
			chuoi[j]=chuoi[i];
			j++;
		}
	}
	if(j>0&&chuoi[j-1]==' '){
		j--;
	}
	chuoi[j]='\0';
	n=j;
	for(i=0;i<n;i++){
		if(i==0 || chuoi[i-1]==' '){
			if(chuoi[i]>='a' && chuoi[i]<='z'){
				chuoi[i]=chuoi[i]-32;
			}
		}
		else{
			if(chuoi[i]>='A' && chuoi[i]<='Z'){
				chuoi[i]=chuoi[i]+32;
			}
		}
	}
}
	int main(){
		char chuoi[100];
		fgets(chuoi,sizeof(chuoi),stdin);
		chuanhoaten(chuoi);
		printf("Ket qua sau khi chuan hoa ten rieng la:%s\n",chuoi);
		return 0;
	}
