#include<stdio.h>
#include<stdlib.h>
void nhapmang(float *a,int n,int m){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%f",&a[i*m+j]);
		}
	}
}
void inmang(float *a,int n,int m){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%f ",a[i*m+j]);
		}
		printf("\n");
	}
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	float *a=(float*)malloc(n*m*sizeof(float));
	if (a==NULL){
		printf("Cap phat that bai!\n");
		return 1;
	}
	nhapmang(a,n,m);
	inmang(a,n,m);
	free(a);
	a=NULL;
	return 0;
	
}
