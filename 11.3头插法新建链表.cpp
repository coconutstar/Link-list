#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;

typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;

//LNode*是结构体指针，和LinkList是完全等价的 
void list_head_inser(LNode* &L){
	L = (LinkList)malloc(sizeof(LNode));//申请头结点空间 
	LNode *s;
    s = (LinkList)malloc(sizeof(LNode));
	ElemType x;
	L->next=NULL; 
	scanf("%d",&x);
	while(x!=9999){
    s = (LinkList)malloc(sizeof(LNode));
    s->data = x;
    s->next=L->next;//s的下一个节点指向头指针的下一个节点 
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
 	LinkList L;//链表头指针 
 	list_head_inser(L);//头插法 
 	print_list(L);//打印链表 
 	return 0;
 }
 
