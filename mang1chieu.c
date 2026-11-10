#include<stdio.h>
#include<stdlib.h>
void nhapmang(float*a,int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%f",&a[i]); 
	}
}
void inmang(float*a,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%f ",a[i]);
	} 
} 
int main(){
	int n;
	scanf("%d",&n);
	float *a=(float*)malloc(n*sizeof(float));
	if (a==NULL){
		printf("Cap phat that bai!\n");
		return 1;
	}
	nhapmang(a,n);
	inmang(a,n);
	free(a);
	a=NULL;
	return 0;
}
	
