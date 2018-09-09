#include"charpter08.h"
#include<math.h>
void COUNTING_SORT(std::vector<int>& A, std::vector<int>& B, int k) {
	print(A, std::cout);
	std::vector<int> C(k+1,0);
	for (int j = 0; j != A.size(); ++j) {
		C[A[j]] += 1;
	}
	print(C, std::cout);
	for (int j = 1; j != k+1; j++) {
		C[j] += C[j - 1];
	}
	print(C, std::cout);
	for (int j = A.size() - 1; j >= 0; --j) {
		B[C[A[j]]-1] = A[j];
		C[A[j]] -= 1;
	}
}

void print(std::vector<int>& A, std::ostream& os) {
	for (auto i : A)
		os << i << " ";
	os << std::endl;
}

//寻找数组中最大数的位数作为基数排序循环次数
int KeySize(int a[], int n) {
	int key = 1;
	for (int i = 0; i<n; i++) {
		int temp = 1;
		int r = 10;
		while (a[i] / r>0) {
			temp++;
			r *= 10;
		}
		key = (temp>key) ? temp : key;//key保存最大
	}
	return key;
}

//基数排序
void RadixSort(int a[], int n) {
	int key = KeySize(a, n);
	int bucket[10][10] = { 0 };
	int order[10] = { 0 };
	for (int r = 1; key>0; key--, r *= 10) {//循环次数
		for (int i = 0; i<n; i++) {//内部循环n个数
			int lsd = (a[i] / r) % 10;
			bucket[lsd][order[lsd]++] = a[i];
		}

		int k = 0;
		for (int i = 0; i<10; i++) {
			if (order[i] != 0) {//有数
				for (int j = 0; j<order[i]; j++)
					a[k++] = bucket[i][j];
			}
			order[i] = 0;
		}
	}
}

