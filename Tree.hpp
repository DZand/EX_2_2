#pragma once
#include <iostream>

namespace ariel
{
  struct Node
  {
	int value;
	struct Node *left;
	struct Node *right;
  };

class Tree
{
  Node* Troot;
	
  public:

  Tree(Node);

  Tree();  

    public:          //functions

    int size();

    int parent(int);

    int left(int);

    int right(int);

    void insert(int);

    void Tree::HelpInsert(Node* main,Node NewNode);

    int root();

    void remove (int);

    bool contains(int);

    void print();

  };
}
