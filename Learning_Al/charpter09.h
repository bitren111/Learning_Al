#pragma once
#ifndef CHARPTER09_H
#define CHARPTER09_H
#include<iostream>
using namespace std;
template<typename T> class DNode {
public:
	DNode(){}
	DNode(T t, DNode* prev, DNode* next):value=t, prev=prev,next=next {}
	T value;
	DNode* prev;
	DNode* next;

};
template<typename T> class DoubleLink {
public:
	DoubleLink();
	~DoubleLink();

	int size();
	int is_empty();

	T get(int index);
	T get_first();
	T get_last();

	int insert(int index, T t);
	int insert_first(T t);
	int append_last(T t);
	int del(int index);
	int delete_first();
	int delete_last();

private:
	int c;
	DNode<T>* phead;
	DNode<T>* get_node(int index);
};
#endif // !CHARPTER09_H
