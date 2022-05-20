#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

int fun(BTNode *T1, BTNode *T2)
{
  int left, right; //��1������0�������г����н����
  if (T1 == NULL && T2 == NULL)
    return 1;
  if (T1 == NULL || T2 == NULL)
    return 0;
  else
  {
    left = fun(T1->lchild, T2->lchild);
    right = fun(T1->rchild, T2->rchild);
    return left && right;
  }
}

int main()
{
  BTNode *p = aaaa();
  BTNode *q = aaaa();
  cout << "�������Ƿ�����:" << fun(p, q) << endl;
}