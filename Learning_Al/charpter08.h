#pragma once
#ifndef CHARPTER08_H
#define CHARPTER08_H
#include<vector>
#include<iostream>
#include<cstring>
void COUNTING_SORT(std::vector<int>&, std::vector<int>&, int);

void print(std::vector<int>&, std::ostream&);

int KeySize(int [], int n);

void RadixSort(int [], int n);

void bucketSort(int* a, int , int );
#endif // !CHARPTER08_H
