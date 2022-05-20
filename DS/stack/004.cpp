#include <iostream>
#include "stackfun.cpp"
using namespace std;

bool fun(stack &s, string str)
{
  int i = 0;
  while (str[i] != '\0')
  {
    switch (str[i])
    {
    case '(':
      push(s, '(');
      break;
    case '{':
      push(s, '{');
      break;
    case ')':
      if (pop(s) != '(')
        return false;
      break;
    case '}':
      if (pop(s) != '{')
        return false;
      break;
    default:
      break;
    }
    ++i;
  }
  if (s.top == -1)
    return true;
  else
    return false;
  return true;
}

int main()
{
  stack s;
  Init(s);
  string S = "(15+())";
  cout << "���Ϊ��";
  bool q = fun(s, S);
  if (q == true)
    cout << "����ƥ��!" << endl;
  else
    cout << "���Ų�ƥ��!" << endl;
}