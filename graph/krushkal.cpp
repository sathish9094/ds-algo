#include <iostream>
#include <unordered_map>
#include <vector>
#include "Disjointset.h"

using namespace std;


struct Edge{
  char vertex1;
  char vertex2;
  int weight;

  Edge(char v1,char v2,int w):vertex1(v1),vertex2(v2),weight(w){}
};

struct Graph{
  vector<char> vertices;
  vector<Edge> edges;
};



int main(){

  Disjoint_set ds;

  char t[] = {'a','b','c','d','e','f'};
  Graph g;
  g.vertices = vector<char>(t , t + sizeof(t)/sizeof(t[0]));
  g.edges.push_back(Edge('a','b',4));
  g.edges.push_back(Edge('a','f',2));
  g.edges.push_back(Edge('f','b',5));
  g.edges.push_back(Edge('c','b',6));
  g.edges.push_back(Edge('c','f',1));
  g.edges.push_back(Edge('f','e',4));
  g.edges.push_back(Edge('d','e',2));
  g.edges.push_back(Edge('d','c',3));

  kruskal(g);
  return 0;

}
