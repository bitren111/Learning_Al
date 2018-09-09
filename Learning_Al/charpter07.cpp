#include"charpter07.h"
void QUICKSORT(std::vector<int>& A, int p, int r) {
	if (p < r) {
		auto q = PARTITION(A, p, r);
		QUICKSORT(A, p, q - 1);
		QUICKSORT(A, q + 1, r);
	}
}

int PARTITION(std::vector<int>& A, int p, int r) {
	auto x = A[r];
	auto i = p - 1;
	for (auto j = p; j != r; j++) {
		if (A[j] <= x) {
			i += 1;
			auto t = A[i];
			A[i] = A[j];
			A[j] = t;
		}
	}
	auto t = A[i+1];
	A[i+1] = A[r];
	A[r] = t;
	return i + 1;
}

