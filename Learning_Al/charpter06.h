#pragma once
#ifndef CHARPTER06_H
#define CHARPTER06_H
#include<vector>
#include<iostream>
int parent(int);//返回父节点下标
int left(int); //返回左孩子节点下标
int right(int); //返回右孩子节点下标
//维护堆
void MAX_HEAP(std::vector<int>&, int);
//构建最大堆
void BUILD_MAX_HEAP(std::vector<int>&);
//堆排序算法
void HEAPSORT(std::vector<int>&);
#endif // !CHARPTER06_H
