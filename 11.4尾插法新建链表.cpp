#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;
typedef struct LNode{
	ElemType data;
	struct LNode* next;
}LNode,*LinkList;

void list_foot_insert(LNode* &L){
	LNode* r;//ָ��Ҫ����Ԫ�ص�ǰһ���ڵ� ��β��㣩 
	LNode* s1; //������ڵ� 
	L = (LinkList)malloc(sizeof(LNode));
	r = (LinkList)malloc(sizeof(LNode));
	r=L; 
	ElemType e;
    scanf("%d",&e);
	while(e!=9999){
	s1 = (LinkList)malloc(sizeof(LNode));//Ϊ�½ڵ����ռ� 
	s1->data=e;
	r->next=s1;
	r=s1;//ָ�������ǰ�Ľڵ� 
	scanf("%d",&e);
	}
	r->next=NULL;//���һ���ڵ��nextʼ�ձ���null 
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
