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
	while(x!=9999){
	scanf("%d",&x);
    s = (LinkList)malloc(sizeof(LNode));
    s->data = x;
    s->next=L->next;//s����һ���ڵ�ָ��ͷָ�����һ���ڵ� 
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
	ElemType p,p1=0;//λ�� 
	ElemType x=0;//��¼������ 
	LNode *L1;
	L1=L;
	while(L1->next!=NULL){
  	 L1=L1->next;
  	 x++; 
  }	
  	scanf("%d",&p);
  if(p<=0||p>x){
  	printf("�����ַ����,���������룡����"); 
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
//	print_list(L);bugδ���� 
	e = list_queryby_position(L);
	printf("��λ�õ�ֵΪ��%d",e);
	return 0;
}
