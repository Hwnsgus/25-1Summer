#include <iostream>
using namespace std;

template <class T>
T add(T data [], int n) { //타입 T의 배열 data에서 n개의 원소를 합한 결과 리턴
	T sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += data[i];
	}
	return sum;
}

int main() {
	int x[] = { 1, 2, 3, 4, 5 };
	double d[] = { 1.2, 2.3, 3.4, 4.5, 5.6, 6.7 };

	cout << "sum of x[] =" << add(x, 5) << endl;
	cout << "sum of d[] =" << add(d, 6) << endl;
} 