#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char hoten[50];
	int msv;
	float d1,d2,d3;
	
}sv;
void nhap(sv *ds,int n){
	int i;
	for(i=0;i<n;i++){
		fflush(stdin);
		gets(ds[i].hoten);
		scanf("%d",&ds[i].msv);
		scanf("%f%f%f",&ds[i].d1,&ds[i].d2,&ds[i].d3);
	}
} 
void in(sv *ds,int n){
	int i;
	for (i=0;i<n;i++){
		printf("\n%s %d %f %f %f",ds[i].hoten,ds[i].msv,ds[i].d1,ds[i].d2,ds[i].d3);
		
	}
}
int main(){
	int n;
	scanf("%d",&n);
	sv *ds=(sv *)malloc(n*sizeof(sv));
	if(ds==NULL){
		printf("Cap phat that bai!\n");
		return 1;
	}
	nhap(ds,n);
	in(ds,n);
	free(ds);
	ds=NULL;
	return 0;
	
}
