#include <iostream>
using namespace std;
typedef struct LNode
{
  int data;
  struct LNode *next;
} LNode, *Linklist;

//����ͷ�ڵ������
Linklist aaaa()
{
  LNode *L = new LNode;
  int a;
  cin >> a;
  L->data = a;
  LNode *p = L; //����һ��ָ��ָ��ͷ��㣬
  //��������
  cin >> a;
  while (a != 0)
  {
    LNode *q = new LNode;
    q->data = a;
    q->next = NULL;
    p->next = q;
    p = p->next;
    cin >> a;
  }
  p->next = NULL;
  return L;
}