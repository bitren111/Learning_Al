#pragma once
#ifndef CHARPTER12_H
#define CHARPTER12_H
#include<iostream>
using namespace std;
template<typename T>
class BSTNode {
public:
	T key;
	BSTNode* left;
	BSTNode* right;
	BSTNode* parent;
	BSTNode(T value, BSTNode* p, BSTNode* l, BSTNode* r) :
		key(value), left(l),right(r),parent(p){}
};

template<typename T>
class BSTree {
private:
	BSTNode<T>* mroot;
public:
	BSTree();
	~BSTree();

	void preOrder();
	void inOrder();
	void postOrder();

	BSTNode* search(T key);
	BSTNode* iterativeSearch(T key);

	T minimum();
	T maximum();

	BSTNode<T>* successor(BSTNode<T>* x);
	BSTNode<T>* predecessor(BSTNode<T>* x);

	void insert(T key);
	void remove(T key);
	void destory();
	void print();
private:
	// ǰ�����"������"
	void preOrder(BSTNode<T>* tree) const;
	// �������"������"
	void inOrder(BSTNode<T>* tree) const;
	// �������"������"
	void postOrder(BSTNode<T>* tree) const;

	// (�ݹ�ʵ��)����"������x"�м�ֵΪkey�Ľڵ�
	BSTNode<T>* search(BSTNode<T>* x, T key) const;
	// (�ǵݹ�ʵ��)����"������x"�м�ֵΪkey�Ľڵ�
	BSTNode<T>* iterativeSearch(BSTNode<T>* x, T key) const;

	// ������С��㣺����treeΪ�����Ķ���������С��㡣
	BSTNode<T>* minimum(BSTNode<T>* tree);
	// ��������㣺����treeΪ�����Ķ�����������㡣
	BSTNode<T>* maximum(BSTNode<T>* tree);

	// �����(z)���뵽������(tree)��
	void insert(BSTNode<T>* &tree, BSTNode<T>* z);

	// ɾ��������(tree)�еĽ��(z)�������ر�ɾ���Ľ��
	BSTNode<T>* remove(BSTNode<T>* &tree, BSTNode<T> *z);

	// ���ٶ�����
	void destroy(BSTNode<T>* &tree);

	// ��ӡ������
	void print(BSTNode<T>* tree, T key, int direction);
};

#endif // !CHARPTER12_H
