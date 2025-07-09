#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Student {
public:
	Student(string name, int score) {
		this->name = name;
		this->score = score;
	}
	string name;
	int score;
};

class ScoreManager {
	vector<Student>list; //vector = ������ �迭, �ϳ��� ������
	string name;
	void input();
	void search();
public:
	ScoreManager(string name) { this->name = name;}
	void run();
};

void ScoreManager::run() {
	cout << "***** �������� ���α׷�" << name << "�� �����մϴ� *****" << endl;
	while (true) {
		cout << "�Է�:1, ��ȸ:2, ����:3 >>";
		int menu;
		cin >> menu;

		switch (menu) {
		case 1: input(); break;
		case 2: search(); break;
		case 3: cout << "���α׷��� �����մϴ�" << endl;
			return;
		}
	}
}

void ScoreManager::input() { //���ʹ� �迭�̱⿡ ���� ���� �ð��� �����ɸ�
	//�߰��� ���� ������ٰ� �ϸ� �迭�̶� �� ����ų� �о�ƾߵ� << �޸� ��ġ�� ����
	cout << "�̸��� ���� >>";
	string name;
	int score;
	cin >> name >> score;
	list.push_back(Student(name, score));
	cout << list.size() << "�� �����" << endl;
}

void ScoreManager::search() {
	cout << "�̸� >>";
	string name;
	cin >> name;
	for (int i = 0; i < list.size(); i++){
		Student s = list.at(i);
		if (s.name == name){
			cout << name << "�� ������" << s.score << endl;
			return;
		}
	}
	cout << name << "�л��� ������ �����ϴ�" << endl;

}

int main() {
	ScoreManager sMan("Ai Score");
	sMan.run();
}