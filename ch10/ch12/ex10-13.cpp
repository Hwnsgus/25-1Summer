#include <iostream>
#include <string>
#include <map>
using namespace std;

class ScoreManager{
	map<string, int> list;
	string name;
	void input();
	void search();
public:
	ScoreManager(string name) { this->name = name; };
	void run();
};

void ScoreManager::run() {
	cout << "***** �������� ���α׷�" << name << "�� �����մϴ� *****" << endl;
	while (true) {
		cout << "�Է�:1, ��ȸ:2, ����:3 >>";
		int menu;
		cin >> menu;

		switch (menu){
		case 1: input(); break;
		case 2: search(); break;
		case 3: cout << "���α׷��� �����մϴ�" << endl;
			return;
		}
	}
}

void ScoreManager::input(){
	cout << "�̸��� ���� >>";
	string name;
	int score;
	cin >> name >> score;
	//list[name] = score;
	list.insert(make_pair(name, score)); //map�� ������
	cout << list.size() << "�� �����" << endl;
}

void ScoreManager::search() { //Ű�� �ؽ������� �޸��� Ư�� ��ҿ� ������
	//�� ���� ������ ���� �� ����
	cout << "�̸� >>";
	string name;
	cin >> name;
	if (list.find(name) == list.end()){ //find�� name�� ã�� ������ end��� ������ �Է�
		cout << name << "�л��� ������ �����ϴ�" << endl;
	}
	else {
		int score = list[name];// name�� ����Ʈ�� ���� score
		cout << name << "�� ������" << score << endl;
	}
}

int main() {
	ScoreManager sMan("Ai Score");
	sMan.run();
}