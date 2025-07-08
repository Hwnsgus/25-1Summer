#include <iostream>
using namespace std;
//Friend �Լ� ����


class Matrix {
	int data[2][2];
public:
	Matrix();
	Matrix(int a, int b, int c, int d);
	friend Matrix operator +(Matrix a, Matrix b);
	friend Matrix& operator +=(Matrix& a, Matrix b);
	friend bool operator ==(Matrix a, Matrix b);
	void show();
};

Matrix::Matrix() {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			data[i][j] = 0;
		}
	}
}

Matrix::Matrix(int a, int b, int c, int d) {
	data[0][0] = a;
	data[0][1] = b;
	data[1][0] = c;
	data[1][1] = d;

}

Matrix operator + (Matrix a, Matrix b){
	Matrix tmp;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			tmp.data[i][j] = a.data[i][j] + b.data[i][j];
		}
	}
	return tmp;
}

Matrix& operator +=(Matrix& a, Matrix b) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			a.data[i][j] += b.data[i][j];
		}
	}
	return a;
}

bool operator == (Matrix a, Matrix b) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (a.data[i][j] == b.data[i][j])
				return false;
		}
	}
	return true;
}

void Matrix::show() {
	cout << "Matrix = { ";
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << data[i][j] << ' ';
		}
	}
	cout << "}" << endl;
}

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;// ������ ������ �ϳ��� �ǹ̸� ���Ӱ� �ο� �����Ϸ��� a+b�� ���������� �ʱ⿡ a.+(b)�� �����Ͽ� ����� �� -> �̷��� �����ؾ���
	a.show(); b.show(); c.show();

	(a += b) += Matrix(10, 10, 10, 10);// a.+=(b)�� ���
	a.show(); b.show(); c.show();

	if (a == Matrix(13, 15, 17, 19))  // a.==(c) ==(a, c)
		cout << " a and c are the same" << endl;
	else
		cout << " a and c are the different" << endl;
}