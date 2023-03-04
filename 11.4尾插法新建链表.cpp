#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;
typedef struct LNode{
	ElemType data;
	struct LNode* next;
}LNode,*LinkList;

void list_foot_insert(LNode* &L){
	LNode* r;//指向要插入元素的前一个节点 （尾结点） 
	LNode* s1; //待插入节点 
	L = (LinkList)malloc(sizeof(LNode));
	r = (LinkList)malloc(sizeof(LNode));
	r=L; 
	ElemType e;
    scanf("%d",&e);
	while(e!=9999){
	s1 = (LinkList)malloc(sizeof(LNode));//为新节点分配空间 
	s1->data=e;
	r->next=s1;
	r=s1;//指向待插入前的节点 
	scanf("%d",&e);
	}
	r->next=NULL;//最后一个节点的next始终保持null 
}

void print_list(LinkList &L){
   LNode* l;
   l=L;
  while(l->next!=NULL){
  	l=l->next;
  	printf("%3d",l->data);
  }	
}

int main(){
    LinkList L;
	list_foot_insert(L);
	print_list(L);
	return 0;
}
