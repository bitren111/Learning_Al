#pragma once
#ifndef CHARPTER06_H
#define CHARPTER06_H
#include<vector>
#include<iostream>
int parent(int);//���ظ��ڵ��±�
int left(int); //�������ӽڵ��±�
int right(int); //�����Һ��ӽڵ��±�
//ά����
void MAX_HEAP(std::vector<int>&, int);
//��������
void BUILD_MAX_HEAP(std::vector<int>&);
//�������㷨
void HEAPSORT(std::vector<int>&);
#endif // !CHARPTER06_H
