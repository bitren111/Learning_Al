#include"charpter08.h"
void COUNTING_SORT(std::vector<int>& A, std::vector<int>& B, int k) {
	std::vector<int> C(k+1,0);
	for (int j = 0; j != k+1; ++j) {
		C[A[j]] += 1;
	}
	for (int j = 1; j != k+1; j++) {
		C[j] += C[j - 1];
	}
	for (int j = A.size() - 1; j >= 0; --j) {
		B[C[A[j]]-1] = A[j];
		C[A[j]] -= 1;
	}
}