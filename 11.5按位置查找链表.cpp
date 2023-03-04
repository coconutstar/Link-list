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
	while(x!=9999){
	scanf("%d",&x);
    s = (LinkList)malloc(sizeof(LNode));
    s->data = x;
    s->next=L->next;//s的下一个节点指向头指针的下一个节点 
    L->next=s;
	} 
}
print_list(LinkList &L){
  while(L->next!=NULL){
  	L=L->next;
  	printf("%3d",L->data);
  }	
  	printf("\n");
}

 int list_queryby_position(LinkList &L){
	ElemType p,p1=0;//位置 
	ElemType x=0;//记录链表长度 
	LNode *L1;
	L1=L;
	while(L1->next!=NULL){
  	 L1=L1->next;
  	 x++; 
  }	
  	scanf("%d",&p);
  if(p<=0||p>x){
  	printf("输入地址有误,请重新输入！！！"); 
  	return 0;
  }else{
  	  while(p1!=p){
  	  	if(p1==p)
			break;
			L=L->next;
			p1++;
  }
}
  return L->data;
}

int main(){
	LNode *L;
	ElemType e;
	list_head_inser(L);
//	print_list(L);bug未处理 
	e = list_queryby_position(L);
	printf("此位置的值为：%d",e);
	return 0;
}
