#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "dec" << '\t' << "hex" << '\t' << "char" << '\t';
	cout << "dec" << '\t' << "hex" << '\t' << "char" << '\t';
	cout << "dec" << '\t' << "hex" << '\t' << "char" << '\t';
	cout << "dec" << '\t' << "hex" << '\t' << "char" << endl;

	cout << "---" << '\t' << "---" << '\t' << "---" << '\t';
	cout << "---" << '\t' << "---" << '\t' << "---" << '\t';
	cout << "---" << '\t' << "---" << '\t' << "---" << '\t';
	cout << "---" << '\t' << "---" << '\t' << "---" << endl;


	cout << right; // ���������� �����ε�

	for ( int i = 0; i < 128; i++){ //dec, hex�� ������     //���׿�����
		cout << dec << i << '\t' << hex << i << '\t' << (isprint(i)?(char)i:'.') << '\t';
		if (i % 4== 3){
			cout << endl;
		}
	}
}