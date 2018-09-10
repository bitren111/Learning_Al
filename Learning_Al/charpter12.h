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
	// 前序遍历"二叉树"
	void preOrder(BSTNode<T>* tree) const;
	// 中序遍历"二叉树"
	void inOrder(BSTNode<T>* tree) const;
	// 后序遍历"二叉树"
	void postOrder(BSTNode<T>* tree) const;

	// (递归实现)查找"二叉树x"中键值为key的节点
	BSTNode<T>* search(BSTNode<T>* x, T key) const;
	// (非递归实现)查找"二叉树x"中键值为key的节点
	BSTNode<T>* iterativeSearch(BSTNode<T>* x, T key) const;

	// 查找最小结点：返回tree为根结点的二叉树的最小结点。
	BSTNode<T>* minimum(BSTNode<T>* tree);
	// 查找最大结点：返回tree为根结点的二叉树的最大结点。
	BSTNode<T>* maximum(BSTNode<T>* tree);

	// 将结点(z)插入到二叉树(tree)中
	void insert(BSTNode<T>* &tree, BSTNode<T>* z);

	// 删除二叉树(tree)中的结点(z)，并返回被删除的结点
	BSTNode<T>* remove(BSTNode<T>* &tree, BSTNode<T> *z);

	// 销毁二叉树
	void destroy(BSTNode<T>* &tree);

	// 打印二叉树
	void print(BSTNode<T>* tree, T key, int direction);
};

#endif // !CHARPTER12_H
