#ifndef POINT_H
#define POINT_H

class Point {
	int x, y;
public:
	Point(int x, int y) { this->x = x; this->y = y;}
		int getX() { return x; } //getter ��������� ���� ���� 	//	void setX() { this->x = x ; } //setter ��������� ���� ����
		int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};


#endif 


