#include <iostream>
using namespace std;
typedef struct LNode
{
  int data;
  struct LNode *next;
} LNode, *Linklist;

Linklist aaaa()
{
  LNode *L = new LNode; //����һ��ͷ���
  LNode *p = L;         //����һ��ָ��ָ��ͷ��㣬
  //��������
  int a;
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
