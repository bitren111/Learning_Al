#include"charpter06.h"
int parent(int i) {
	return (i + 1) / 2 - 1;
}

int left(int i) {
	return 2 * i+1;
}

int right(int i) {
	return 2 * i + 2;
}

void MAX_HEAP(std::vector<int>& A, int i) {
	int l = left(i);
	int r = right(i);
	int largest = i;
	if (l<A.size() && A[l]>A[i]) {
		largest = l;
	}
	if (r<A.size() && A[r]>A[largest]) {
		largest = r;
	}
	if (largest != i) {
		int t = A[i];
		A[i] = A[largest];
		A[largest] = t;
		MAX_HEAP(A, largest);
	}
}

void BUILD_MAX_HEAP(std::vector<int>& A) {
	for (int i = A.size() / 2 - 1; i != -1; --i) {
		MAX_HEAP(A, i);
	}
}

void HEAPSORT(std::vector<int>& A) {
	BUILD_MAX_HEAP(A);
	for (int i = A.size() - 1; i != 0; --i) {
		int t = A[0];
		A[0] = A[i];
		A[i] = t;
		A.pop_back();
		MAX_HEAP(A, 0);
	}
}