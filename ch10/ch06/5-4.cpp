#include <iostream>
using namespace std;

bool bigger(int a, int b, int& c) {
	if (a == b) {
		return true;
	}
	else {
		if (a > b) c = a;
		else c = b;
		return false;
	}

}

int main() {
	int a = 10, b = 20, c=0;

	if (bigger(a, b, c) == true)
	{
		cout << "����" << endl;
	}
	else
		cout << " ū ����" << c << endl;
	
}