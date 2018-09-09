#include"charpter09.h"
template<typename T>
DoubleLink<T>::DoubleLink():c(0){
	phead = new DNode<T>();
	phead->prev = phead->next = phead;
}

template<typename T>
DoubleLink<T>::~DoubleLink() {
	DNode<T>* ptmp;
	DNode<T>* pnode = phead->next;
	while (pnod!=phead)
	{
		ptmp = pnode;
		pnode = pnode->next;
		delete ptmp;
	}
	delete phead;
	phead = NULL;
}

template<typename T>
int DoubleLink<T>::size() {
	return c;
}

template<typename T>
int DoubleLink<T>::is_empty() {
	return c == 0;
}

template<typename T>
DNode<T>* DoubleLink<T>::get_node(int index) {
	if (index < 0 || index >= c) {
		std::cout<< "get node failed! the index in out of bound!" << std::endl;
		return NULL;
	}
	if (index <= c / 2) {
		int i = 0;
		DNode<T>* pindex = phead->next;
		while (i++<index)
		{
			pindex = pindex->next;
		}
		return pindex;
	}

	int j = 0;
	int rindex = c - index - 1;
	DNode<T>* prindex = phead->prev;
	while (j++<rindex)
	{
		prindex = prindex->prev;
	}
	return prindex;
}

template<typename T>
T DoubleLink<T>::get(int index) {
	return get_node(index)->value;
}

template<typename T>
T DoubleLink<T>::get_first() {
	return get_node(0)->value;
}

template<typename T>
T DoubleLink<T>::get_last()
{
	return get_node(count - 1)->value;
}

template<typename T>

int DoubleLink<T>::insert(int index, T t) {
	if (index == 0)
		return insert_first(t);
	DNode<T>* pindex = get_node(index);
	DNode<T>* pnode = new DNode<T>(t, pindex->prev, pindex);
	pindex->prev->next = pnode;
	pindex->prev = pnode;
	count++;

	return 0;
}

// 将节点插入第一个节点处。
template<class T>
int DoubleLink<T>::insert_first(T t)
{
	DNode<T>* pnode = new DNode<T>(t, phead, phead->next);
	phead->next->prev = pnode;
	phead->next = pnode;
	count++;

	return 0;
}

// 将节点追加到链表的末尾
template<class T>
int DoubleLink<T>::append_last(T t)
{
	DNode<T>* pnode = new DNode<T>(t, phead->prev, phead);
	phead->prev->next = pnode;
	phead->prev = pnode;
	count++;

	return 0;
}

// 删除index位置的节点
template<class T>
int DoubleLink<T>::del(int index)
{
	DNode<T>* pindex = get_node(index);
	pindex->next->prev = pindex->prev;
	pindex->prev->next = pindex->next;
	delete pindex;
	count--;

	return 0;
}

// 删除第一个节点
template<class T>
int DoubleLink<T>::delete_first()
{
	return del(0);
}

// 删除最后一个节点
template<class T>
int DoubleLink<T>::delete_last()
{
	return del(count - 1);
}

