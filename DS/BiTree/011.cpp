#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

void fun(BTNode *p, char x, int L)
{
  if (p != NULL)
  {
    if (p->data == x)
      cout << "7���ڵĲ���Ϊ:" << L;
    fun(p->lchild, x, L + 1); //���ﲻ��дL++
    fun(p->rchild, x, L + 1);
  }
}

void fun1(BTNode *p, char x, int L)
{
  if (p != NULL)
  {
    if (p->data == x)
      cout << "7���ڵĲ���Ϊ:" << L;
    ++L;
    fun1(p->lchild, x, L);
    fun1(p->rchild, x, L);
    --L;
  }
}

int main()
{
  BTNode *T = aaaa();
  int L = 1;
  fun1(T, '7', L);
}
