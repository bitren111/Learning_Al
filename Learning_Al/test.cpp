#include"charpter06.h"
#include"charpter07.h"
#include"charpter08.h"
using namespace std;

//int main() {
//	vector<int> p{ 16,14,10,8,7,9,3,2,4,1 };
//	vector<int> q{ 2,8,7,1,3,5,6,4 };
//	vector<int> r{ 2,5,3,0,2,3,0,3 };
//	//vector<int> b(r.size(), 0);
//	////MAX_HEAP(p, 1);
//	////QUICKSORT(q, 0, q.size() - 1);
//	//COUNTING_SORT(r,b,5);
//	//for (auto i : b)
//	//	cout << i << " ";
//	//cout << endl;
//	int a[] = {329,457,657,839,436,720,355};
//	RadixSort(a, 7);
//	return 0;
//}
int main()
{
	int i;
	int a[] = { 8,2,3,4,3,6,6,3,9 };
	int ilen = (sizeof(a)) / (sizeof(a[0]));

	cout << "before sort:";
	for (i = 0; i<ilen; i++)
		cout << a[i] << " ";
	cout << endl;

	bucketSort(a, ilen, 10); // Í°ÅÅÐò

	cout << "after  sort:";
	for (i = 0; i<ilen; i++)
		cout << a[i] << " ";
	cout << endl;

	return 0;
}