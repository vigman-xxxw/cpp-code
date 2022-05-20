#include <iostream>
using namespace std;
#define maxsize 50

typedef struct
{
  char data[maxsize];
  int top;
} stack;

void Init(stack &s) //��ʼ��
{
  s.top = -1;
}

bool push(stack &s, int x) //��ջ
{
  if (s.top == maxsize - 1)
    return false;
  s.data[++s.top] = x;
  return true;
}

int pop(stack &s) //��ջ
{
  if (s.top == -1)
    return false;
  return s.data[s.top--];
}
