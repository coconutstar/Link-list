#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;

typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;

//LNode*�ǽṹ��ָ�룬��LinkList����ȫ�ȼ۵� 
void list_head_inser(LNode* &L){
	L = (LinkList)malloc(sizeof(LNode));//����ͷ���ռ� 
	LNode *s;
    s = (LinkList)malloc(sizeof(LNode));
	ElemType x;
	L->next=NULL; 
	scanf("%d",&x);
	while(x!=9999){
    s = (LinkList)malloc(sizeof(LNode));
    s->data = x;
    s->next=L->next;//s����һ���ڵ�ָ��ͷָ�����һ���ڵ� 
    L->next=s;
    scanf("%d",&x);
	} 
}
print_list(LinkList &L){
  while(L->next!=NULL){
  	L=L->next;
  	printf("%d",L->data);
  }	
}
 int main(){
 	LinkList L;//����ͷָ�� 
 	list_head_inser(L);//ͷ�巨 
 	print_list(L);//��ӡ���� 
 	return 0;
 }
 
