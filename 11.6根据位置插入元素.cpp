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

void print_list(LinkList &L){
	LNode *l=L;
  while(l->next!=NULL){
  	l=l->next;
  	printf("%3d",l->data);
  }	
  	printf("\n");
}

//获得查找到的位置的指针 
LinkList GetElem(LinkList L,int SearchPos){
	LNode *l=L;
	int j=0;
	if(SearchPos<0){
		return NULL;
	}
	
	while(l&&j<SearchPos){
		l=l->next;
		j++;
	}
	return l;
}

bool ListFrontInsert(LinkList L,int i,ElemType e){
	LinkList p = GetElem(L,i-1);
	if(NULL==p){
		return false;
	}
    LNode *s;	
    s = (LinkList)malloc(sizeof(LNode));
    s->data=e;
    s->next=p->next;
    p->next=s;
    return true; 
}

 int main(){
 	LNode *L;
 	list_head_inser(L);
 	ListFrontInsert(L,3,60);
 	print_list(L);
 	return 0;
 }
