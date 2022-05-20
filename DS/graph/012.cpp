#include <iostream>
using namespace std;

//�ж�����ͼ�Ƿ���ڻ�
#define maxsize 50
#define numedges 6
void init(int parent[], int rank[]) //���鲻��Ҫ���&��������ָ����иı�
{
  for (int i = 0; i < maxsize; ++i)
  {
    parent[i] = -1;
    rank[i] = 0;
  }
}
int find_root(int x, int parent[])
{
  int x_root = x;
  while (parent[x_root] != -1)
    x_root = parent[x_root];
  return x_root;
}
int Union(int x, int y, int parent[], int rank[])
{
  int x_root = find_root(x, parent);
  int y_root = find_root(y, parent);
  if (x_root == y_root)
    return 1;
  else if (rank[x_root] > rank[y_root])
    parent[y_root] = x_root;
  else if (rank[x_root] < rank[y_root])
    parent[x_root] = y_root;
  else
  {
    rank[y_root]++;
    parent[x_root] = y_root;
  }
  return 0;
}

int main()
{
  int parent[maxsize];
  int rank[maxsize];
  init(parent, rank);
  int edges[numedges][2] = {{0, 1}, {1, 2}, {1, 3}, {3, 4}, {2, 5}, {5, 4}};
  for (int i = 0; i < numedges; ++i)
  {
    int x = edges[i][0];
    int y = edges[i][1];
    if (Union(x, y, parent, rank) == 1)
    {
      cout << "�л�!" << endl;
      return 1;
    }
  }
  cout << "û�л�!" << endl;
  return 0;
}
