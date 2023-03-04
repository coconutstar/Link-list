#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;

typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;

void list_head_inser(LNode* &L){
	L = (LinkList)malloc(sizeof(LNode)); 
	LNode *s;
    s = (LinkList)malloc(sizeof(LNode));
	ElemType x;
	L->next=NULL; 
	while(x!=9999){
	scanf("%d",&x);
    s = (LinkList)malloc(sizeof(LNode));
    s->data = x;
    s->next=L->next;
    L->next=s;
	} 
}

void list_foot_insert(LNode* &L){
	LNode* r;
	LNode* s1;  
	L = (LinkList)malloc(sizeof(LNode));
	r = (LinkList)malloc(sizeof(LNode));
	L->next=NULL; 
	r=L; 
	ElemType e;
	while(e!=9999){
	scanf("%d",&e); 
	s1 = (LinkList)malloc(sizeof(LNode));
	s1->data=e;
	r->next=s1;
	r=s1;
	}
	r->next=NULL;
}

void print_list(LinkList &L){
	LNode *l=L;
  while(l->next!=NULL){
  	l=l->next;
  	printf("%3d",l->data);
  }	
  	printf("\n");
}

int main(){
	LNode *L;
	list_head_inser(L);
	print_list(L); 
	LNode *L2;
	list_foot_insert(L2);
	print_list(L2); 
	return 0; 
} 
