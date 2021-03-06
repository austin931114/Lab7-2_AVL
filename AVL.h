#pragma once

#include "NodeInterface.h"
#include "Node.h"
#include "AVLInterface.h"
// #include "AVL_Tree.h"
#include <iostream>

using namespace std;

class AVL : public AVLInterface {
public:
	AVL() {}
	~AVL() {clear();}

	NodeInterface * getRootNode() const;

	bool add(int data);
	bool addFunction(Node*& temp, int data);

	bool remove(int data);
	bool removeFunction(Node*& temp, int data);
	void replace(Node*& oldRoot, Node*& temp);

	void clear();
	void recursiveClear(Node*& temp);

	void rotateLeft(Node*& local_root);

	void rotateRight(Node*& local_root);

	int get_height(Node*& node);
	void calc_height(Node*& node);
	void isBalanced(Node*& node);
	int get_balance(Node* node);
protected:
	Node *root = NULL;

};