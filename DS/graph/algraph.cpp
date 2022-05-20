#include <iostream>
using namespace std;
#define maxsize 100
typedef struct ArcNode
{
  int adjvex; //����ָ��ڵ��λ��
  struct ArcNode *nextarc;
} ArcNode, *Node; //�߽��ṹ��

typedef struct
{
  int data;
  ArcNode *firstarc;
} Vnode; //����ṹ��

typedef struct
{
  Vnode adjlist[maxsize];
  int numver, numedg;
} AGraph; //ͼ

//����һ������ͼ
AGraph *aaaa(int v, int e)
{
  AGraph *G = new AGraph;
  G->numver = v;              //������
  G->numedg = e;              //����
  for (int i = 0; i < v; ++i) //��ʼ��������ָ����Ϊ��
    G->adjlist[i].firstarc = NULL;
  //��������
  for (int i = 0; i < e; ++i)
  {
    cout << "����:";
    int v1, v2;
    cin >> v1;
    cin >> v2;
    ArcNode *p = new ArcNode; //�����߽ڵ�ָ��
    p->adjvex = v2;           //�ñ�ָ��Ľڵ�
    // ͷ�巨����
    p->nextarc = G->adjlist[v1].firstarc;
    G->adjlist[v1].firstarc = p;
    //��һ����
    ArcNode *q = new ArcNode; //Ϊ�½��ı�����ռ�
    q->adjvex = v1;           //�ñ�ָ��Ľڵ�
    // ͷ�巨����
    q->nextarc = G->adjlist[v2].firstarc;
    G->adjlist[v2].firstarc = q;
  }
  cout << "���!" << endl;
  return G;
}