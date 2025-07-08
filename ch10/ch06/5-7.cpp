#include <iostream>
using namespace std;

class MyIntStack {
	int *p= NULL;
	int tos = 0;
	int size = 0;

public:
	MyIntStack(int size) { 
		p = new int[size];
		if (!p)
		{
			cout << "���� �Ҵ� ����" << endl;
			exit(0);
		}
		this->size = size;
	};
	~MyIntStack() {
		if(p != NULL)
		delete[] p;
	}

	bool push(int n);
	bool pop(int &n);

	MyIntStack(const MyIntStack& scr); //���� ������
};

MyIntStack::MyIntStack(const MyIntStack& src) { // ���� ���� �ڵ� ���� ���� �ڵ带 ������ �� ����Ʈ �ߺ� x
	
	p = new int [src.size];
	for (int i = 0; i < src.tos; i++){
		p[i] = src.p[i];
	}
	tos = src.tos;
	size = src.size;
}

bool MyIntStack::push(int n) {
	if (tos == 10) {
		return false;
	}
	p[tos] = n;
	tos++;
	return true;

}

bool MyIntStack::pop(int& n) {
	if (tos == 0){
		return false;
		
	}
	tos--;
	n = p[tos]; // ������ p���� �����ؼ� tos�Ÿ���ŭ ������ �ִ� ��  n = *(p + tos );
	return true;
}

int main() {
	MyIntStack a(50); // ����� ��ü 

	a.push(10);
	a.push(20);
	
	int n;
	a.pop(n);

	MyIntStack b = a;
	b.pop(n);
	cout << n;

/*for (int i = 0; i < 11; i++)
	{
		if (a.push(i) == false) {
			cout << "������ ����" << endl;
		}
		else {
			cout << "����" << endl;

		}
	}

	int n;
	for (int n = 0; n < 11; n++)
	{
		if (a.pop(n) == false) {
			cout << "������ �������" << endl;
		}
		else {
			cout << "����" << n << endl;
		}
	}*/
}