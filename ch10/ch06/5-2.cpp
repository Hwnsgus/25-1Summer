#include <iostream>
#include <string>
using namespace std;

void half(double &x) { //������ ���� ȣ�� -> �Լ��� �޴� ���� ���� ���� �ٸ� �̸����� �����Ͽ� ���
	x /= 2;
}


int main() {
	double n = 20;
	half(n);
	cout << n;
}