#include <iostream>
#include "headfun.cpp"
using namespace std;

void fun(LNode *&A, LNode *&B)
{
  LNode *p = A->next, *q = B->next, *s;
  A->next = NULL;
  B->next = NULL;
  while (p != NULL && q != NULL)
  {
    if (p->data <= q->data)
    {
      s = p;
      p = p->next;
      s->next = A->next;
      A->next = s;
    }
    else
    {
      s = q;
      q = q->next;
      s->next = A->next;
      A->next = s;
    }
  }
  while (p != NULL)
  {
    s = p;
    p = p->next;
    s->next = A->next;
    A->next = s;
  }
  while (q != NULL)
  {
    s = q;
    q = q->next;
    s->next = A->next;
    A->next = s;
  }
}

int main()
{
  cout << "����A:";
  LNode *A = aaaa();
  cout << "����B:";
  LNode *B = aaaa();
  fun(A, B);
  LNode *q = A->next;
  cout << "��������Ϊ:";
  while (q != NULL)
  {
    cout << q->data << " ";
    q = q->next;
  }
  return 0;
}