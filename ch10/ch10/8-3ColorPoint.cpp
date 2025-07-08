#include<iostream>
#include<string>
#include "ColorPorint.h"
using namespace std;

ColorPoint::ColorPoint(int x, int y, string color) 
	: Point(x, y){ //point.h�� ���� Point ȣ��
	this->color = color;	
}

void ColorPoint::setPoint(int x, int y) {
	move(x, y);

}

ColorPoint::ColorPoint() : Point(0, 0){
	color = "BLACK";
}

void ColorPoint::setColor(string color) {
	this->color = color;
}

void ColorPoint::show() {
	cout << color << "������ (" << getX() << "," << getY() << ")�� ��ġ�� ���Դϴ�." << endl;
}

void ColorPoint::up() {
	move(getX(), getY() + 1);
}