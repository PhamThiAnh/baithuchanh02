#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct    {
    	char hoten[30];
    	int masv;
    	float d1, d2, d3;
}Data;
typedef struct tagNode    {
    	Data infor;
    	struct tagNode *link;
}Node;
typedef struct    {
    	Node *pHead;  
    	Node *pTail;
    	int spt;
}LList;
/////////////////////////////////////
void initList(LList *L)
    {
    	L->pHead = NULL;
    	L->pTail = NULL;
    	L->spt = 0;
    }
/////////////////////////////////////
int emptyList(LList L)
 {
    	return (L.spt == 0); 
}
Node *search(LList L,char name[30]){
	Node *pp=L.pHead;
	while(pp!=NULL && !strstr(pp->infor.hoten,name))
		pp=pp->link;
	return pp;
} 
/////////////////////////////////////
void insert_Head(LList *L, Data x)
    {
    	Node *pp;
    	pp = (Node*) malloc(sizeof(Node));
    	pp->infor = x;
    	pp->link = NULL;
    	if(emptyList(*L)){
    			L->pHead = pp;
    			L->pTail = pp;
    		}  	
        else {
    		pp->link = L->pHead;
    		L->pHead = pp;
    		}
    	L->spt++;
    }
void insert_Tail(LList *L,Data x){
	Node *pp;
	pp=(Node *)malloc(sizeof(Node));
	pp->infor=x;
	pp->link=NULL;
	if (emptyList(*L)){
		L->pHead=pp;
		L->pTail=pp;
	}
	else{
		L->pTail->link=pp;
		L->pTail=pp;
	}
	L->spt++;
}
void insert_After(LList *L,Node *q,Data x){
Node *pp;
if (NULL==q) return ;
else{
	pp=(Node *)malloc(sizeof(Node));
	pp->infor=x;
	pp->link=q->link;
	q->link=pp;
	if (q==L->pTail)L->pTail=pp;
	L->spt++;
}
}
void del_Head(LList *L){
	Node *pp;
	if (emptyList(*L)) return;
	else{
		pp=L->pHead;
		L->pHead=pp->link;
		free(pp);
		L->spt--;
		if(L->pHead==NULL) L->pTail=NULL;
	}
	
}
void del_After(LList *L,Node *q){
Node *pp;
if(NULL==q|| q->link==NULL) return;
else{
	pp=q->link;
	if(q->link==L->pTail){
		L->pTail=q;
	}
		q->link=pp->link;
		free(pp);
		L->spt--;
}
}
void del_K(LList *L,char K[30]){
	Node *pp=L->pHead, *q=NULL;
	while (pp!=NULL && !strstr(pp->infor.hoten,K)){
		q=pp;
		pp=pp->link;
	}
	if (NULL==pp) return ;
	else
		if(pp==L->pHead) del_Head(L);
		else del_After(L,q);
}
///////////////////////////////////////
void nhap(Data *x){
    printf("Nhap ma sv: ");
    scanf("%d", &(x->masv));
    if(x->masv > 0){
        while (getchar()!='\n');
        printf("Nhap ho ten sinh vien");
		fgets(x->hoten,sizeof(x->hoten),stdin);
		x->hoten[strcspn(x->hoten,"\n")]='\0'; 
		 
        printf("Nhap diem mon 1: ");
        scanf("%f", &(x->d1));
        printf("Nhap diem mon 2: ");
        scanf("%f", &(x->d2));
        printf("Nhap diem mon 3: ");
        scanf("%f", &(x->d3));
    }
}
void in(Data x){
    printf("Ten: %s, Ma: %d, Diem 1: %.2f, Diem 2: %.2f, Diem 2: %.2f, Diem 3: %.2f\n", 
            x.hoten, x.masv, x.d1, x.d2, x.d3);
}
void processList(LList L){
    Node *pp = L.pHead;
    while( pp != NULL ){
        	in(pp->infor); //in d? li?u trong node 
        	pp = pp->link;
    	}
}
void freeList(LList *L){
	Node *htai=L->pHead;
	Node *tieptheo;
	while(htai!=NULL){
		tieptheo=htai->link;
		free(htai);
		htai=tieptheo; 
	}
	L->pHead=NULL;
	L->pTail=NULL;
	L->spt=0; 
} 
/////////////////////////////////////////

int main(){
    LList L;
	int kt = 0;
	Data x;
	char tenTim[30];
	Node *q=NULL;
	initList(&L); //tao ra 1 ds rong
	do{
	    printf("\nChuong trinh lam viec voi DSLK don SV\n");
	    printf("\n1: Them nut vao dau danh sach");
	    printf("\n2: Them nut vao cuoi danh sach");
	    printf("\n3: Them nut vao sau mot nut khac trong danh sach");
	    printf("\n9: Duyet ds");
	    printf("\n0: Thoat");
	    printf("\nMoi ban chon: ");
	    int chon;
	    scanf("%d", &chon);
	    switch(chon){
	        case 1: 
	            printf("Nhap so thông tin sv them vao dau danh sach\n");
	            nhap(&x);
	            if(x.masv > 0) 
                	insert_Head(&L, x);
            	break;
            case 2:	
	            printf("Nhap thong tin sv them vao cuoi danh sach\n");
				nhap(&x);
				if (x.masv>0)
					insert_Tail(&L,x); 
            	break;
            case 3:
            	if (emptyList(L)){
            		printf("Danh sach rong! Khong the chen.\n");
				}
				else{
					printf("Nhap ten sinh vien dung truoc ma ban chen sau:");
					while (getchar()!='\n');
					fgets(tenTim,sizeof(tenTim),stdin);
					tenTim[strcspn(tenTim,"\n")]='\0';
					q=search(L,tenTim);
					if(q==NULL){
						printf("Khong tim thay sinh vien co ten chua chuoi:%s\n",tenTim);
					}
					else{
						printf("Nhap thong tin sv them vao mot nut khac trong danh sach\n");
						nhap(&x);
	            if(x.masv>0)
	            	insert_After(&L,q,x);
					}
				}
            	break;
            case 4:
            	if(emptyList(L)){
            		printf("Danh sach rong!Khong co gi de xoa.\n");
            		
				}
				else{
					printf("Nhap ten SV muon xoa: ");
					while(getchar()!='\n');
					fgets(tenTim,sizeof(tenTim),stdin);
					tenTim[strcspn(tenTim,"\n")]='\0';
					del_K(&L,tenTim);
					printf("Da thuc hien lenh xoa sv co ten phu hop.\n");
				}
				break;
                
                break;
            case 9:
            	printf("Duyet danh sach\n");
                processList(L);
                break;    
            case 0: 
                printf("Bye bye\n");
	            kt = 1;
	            break;
	        	default:
	        		printf("Lua chon sai!Vui long chon lai:\n");
        }
	}while(kt==0); 
}

