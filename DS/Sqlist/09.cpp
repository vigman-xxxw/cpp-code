#include <iostream>
#include "sqlist.cpp"
using namespace std;

int Find(Sqlist &A, Sqlist &B)
{
  int i, j, k;
  i = j = k = 0;
  Sqlist C;
  while (i < A.length && j < B.length)
    if (A.data[i] < B.data[j])
      C.data[k++] = A.data[i++];
    else
      C.data[k++] = B.data[j++];
  while (i < A.length)
    C.data[k++] = A.data[i++];
  while (j < B.length)
    C.data[k++] = B.data[j++];
  return C.data[(A.length + B.length) / 2];
} //法一

int find(Sqlist &A, Sqlist &B)
{
  int a0 = 0, b0 = 0, am, bm, an = A.length - 1, bn = B.length - 1;
  while (a0 != an || b0 != bn)
  {
    am = (a0 + an) / 2;
    bm = (b0 + bn) / 2;
    if (A.data[am] == B.data[bm])
      return A.data[am];
    else if (A.data[am] < B.data[bm])
    {
      a0 = a0 + bn - bm;
      bn = bm;
    }
    else
    {
      b0 = b0 + an - am;
      an = am;
    }
  }
  if (A.data[a0] > B.data[b0])
    return B.data[b0];
  else
    return A.data[a0];
} //法二

int main()
{
  Sqlist A = {{11, 13, 15, 17, 19}, 5};
  Sqlist B = {{2, 4, 6, 8, 20}, 5};
  cout << find(A, B) << endl;
}
