#include<stdio.h>
#include<stdlib.h>
void nhap(int **matran,int n,int m){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&matran[i][j]); 
		} 
	} 
} 
void in(int **matran,int n,int m){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",matran[i][j]); 
		}
		printf("\n"); 
	} 
} 
int main(){
	int n,m;
	int i,j;
	scanf("%d %d",&n,&m);
	int **matran=(int **)malloc(n*sizeof(int *));
	if(matran==NULL){
		printf("Cap phat that bai!\n");
		return 1;
	}
	for(i=0;i<n;i++){
		matran[i]=(int *)malloc(m*sizeof(int));
		if(matran[i]==NULL){
			printf("Cap phat that bai!\n");
			return 1;
		}
	}
	nhap(matran,n,m);
	in(matran,n,m);
	for(i=0;i<n;i++){
		free(matran[i]);
	}
	free(matran);
	matran=NULL;
	return 0;
}
