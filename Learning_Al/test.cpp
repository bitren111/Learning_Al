#include"charpter06.h"
#include"charpter07.h"
using namespace std;
#include<iostream>
int main() {
	vector<int> p{ 16,14,10,8,7,9,3,2,4,1 };
	vector<int> q{ 2,8,7,1,3,5,6,4 };
	//MAX_HEAP(p, 1);
	QUICKSORT(q, 0, q.size() - 1);

	for (auto i : q)
		cout << i << " ";
	cout << endl;
	return 0;
}