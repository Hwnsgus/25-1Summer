#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
	Random (){}//�����ڸ� private���� ����
public:
	static void seed() { srand((unsigned int)time(0)); }
	static int nextInt(int min = 0, int max = 32767);
	static char nextAlphabet();
	static double nextDouble();// 0~1 ������ �Ǽ� ����
};

int Random::nextInt(int min, int max) {
	int w = max - min + 1;
	int n = rand() % w + min;
	return n;
}

char Random::nextAlphabet() {
	char c;
	int n = rand() % 26;
	int m = rand() % 2;

	if (m == 0){
		 c = n + 'a';
	}
	else {
		 c = n + 'A';
		 return c;
	}
}

double Random::nextDouble() {
	double d = (double)rand();
	d = d / RAND_MAX; // RAND_MAX -> rand�� double Ÿ������ ȣȯ�ǵ��� ����
	return d;
}

int main() {
	Random::seed();
	cout << "1���� 100���� ������ ���� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++) {
		int n = Random::nextInt(1, 100);
		cout << n << ' ';
	}cout << endl;

	cout << "���ĺ��� �����ϰ� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++) {
		char c = Random::nextAlphabet();
		cout << c << ' ';
	}cout << endl;



	cout << "������ �Ǽ� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++) {
		double d = Random::nextDouble();
		cout << d << ' ';
	}cout << endl;


}