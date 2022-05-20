#include <iostream>
#include "headfun.cpp" //���滻��circlesinglefun.cpp
using namespace std;

int findloop(LNode *L)
{
  LNode *fast = L, *slow = L;
  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast)
      return 1;
  }
  return 0;
}

int main()
{
  LNode *L = aaaa();
  cout << "���Ϊ:" << findloop(L);
  return 0;
}
