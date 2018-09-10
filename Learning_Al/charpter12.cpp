#include"charpter12.h"
template<typename T>
void BSTree<T>::preOrder(BSTNode<T>* tree) const {
	if (tree != NULL) {
		cout << tree->key << " ";
		preOrder(tree->left);
		preOrder(tree->right);
	}
}

template<typename T>
void BSTree<T>::preOrder() {
	preOrder(mroot);
}

template<typename T>
void BSTree<T>::inOrder(BSTNode<T>* tree) const {
	if (tree != NULL) {
		inOrder(tree->left);
		cout << tree->key << " ";
		inOrder(tree->right);
	}
}

template<typename T>
void BSTree<T>::inOrder() {
	inOrder(mroot);
}

template <typename T>
void BSTree<T>::postOrder(BSTNode<T>* tree) const
{
	if (tree != NULL)
	{
		postOrder(tree->left);
		postOrder(tree->right);
		cout << tree->key << " ";
	}
}

template <typename T>
void BSTree<T>::postOrder()
{
	postOrder(mroot);
}

template<typename T>
BSTNode<T>* BSTree<T>::search(BSTNode<T>* x, T key) const {
	if (x == NULL || x->key = key) {
		return x
	}
	if (key < x->key) {
		return search(x->left, key);
	}
	else {
		return search(x->right, key);
	}
}

template <typename T>
BSTNode<T>* BSTree<T>::search(T key)
{
	search(mroot, key);
}

template <typename T>
BSTNode<T>* BSTree<T>::iterativeSearch(BSTNode<T>* x, T key) const {
	while ((x!=NULL) &&(x->key!=key))
	{
		if (key < x->key)
			x = x->left;
		else
			x = x->right;
	}
	return x;
}

template <typename T>
BSTNode<T>* BSTree<T>::iterativeSearch(T key) {
	iterativeSearch(mroot, key);
}

template <typename T>
BSTNode<T>* BSTree<T>::minimum(BSTNode<T>* tree) {
	if (tree == NULL) {
		return NULL;
	}
	while (tree->left!=NULL)
	{
		tree = tree->left;
	}
	return tree;
}

template <typename T>
T  BSTree<T>::minimum() {
	BSTNode<T>* p = minimum(mroot);
	if (p != NULL)
		return p->key;
	return (T)NULL;
}

template <typename T>
BSTNode<T>* BSTree<T>::maximum(BSTNode<T>* tree) {
	if (tree == NULL)
		return NULL;
	while (tree->right!=NULL)
	{
		tree = tree->right;
	}
	return tree;
}

template <typename T>
T BSTree<T>::maximum() {
	BSTNode<T>* p = maximum(mroot);
	if (p != NULL)
		return p->key;
	return (T)NULL;
}

template<typename T>
BSTNode<T>* BSTree<T>::predecessor(BSTNode<T>* x) {
	if (x->left != NULL)
		return maximum(x->left);
	BSTNode<T>* y = x->parent;
	while ((y!=NULL)&&(x==y->left))
	{
		x = y;
		y = y->parent;
	}
	return y;
}

template<typename T>
BSTNode<T>* BSTree<T>::successor(BSTNode<T>* x) {
	if (x->right != NULL)
		return minimum(x->right);
	BSTNode<T>* y = x->parent;
	while ((y!=NULL)&&(x==y->right))
	{
		x = y;
		y = y->parent;
	}
	return y;
}


/*
* 打印"二叉查找树"
*
* key        -- 节点的键值
* direction  --  0，表示该节点是根节点;
*               -1，表示该节点是它的父结点的左孩子;
*                1，表示该节点是它的父结点的右孩子。
*/
template <typename T>
void BSTree<T>::print(BSTNode<T>* tree, T key, int direction)
{
	if (tree != NULL)
	{
		if (direction == 0)    // tree是根节点
			cout << setw(2) << tree->key << " is root" << endl;
		else                // tree是分支节点
			cout << setw(2) << tree->key << " is " << setw(2) << key << "'s " << setw(12) << (direction == 1 ? "right child" : "left child") << endl;

		print(tree->left, tree->key, -1);
		print(tree->right, tree->key, 1);
	}
}


template <class T>
void BSTree<T>::print()
{
	if (mRoot != NULL)
		print(mRoot, mRoot->key, 0);
}