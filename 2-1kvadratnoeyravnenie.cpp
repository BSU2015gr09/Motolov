﻿#include<iostream>//написать программу решающие квадратное уравнение
#include<clocale>
#include<cmath>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	int a = 0, b = 0, c = 0;
	float d = 0,x1 = 0, x2 = 0, x0 = 0, x = 0;
	cout << "¬введите коэфициенты квадратного уравнени¤"<<"\n";
	cout << "¬введите коэфициент а:" <<"\n";
	cin >> a;
	cout << "¬введите коэфициент b:" << "\n ";
	cin >> b;
	cout << "¬введите коэфициент c:" << "\n ";
	cin >> c;
	
	if (a == 0 || b == 0 || c == 0){
		if (a == 0 && b != 0 && c != 0){
			x = (-c) / b;
			cout << "корнем линейного уравнени¤ ¤вл¤етс¤ x=" << x;
		}
		if (a != 0 && b == 0 && c != 0){
			x = (-c) / a;
			if (x < 0){
				cout << "уравнение не имеет решени¤";
			}
			else
				x1 = sqrt(x);
			x2 = -(sqrt(x));
			cout << "корн¤ми квадратного уравнени¤ ¤вл¤ютс¤: x1=" << x1 << " и x2=" << x2;
		}
		if (a != 0 && b != 0 && c == 0){
			x = (-b) / a;
			cout << "корн¤ми квадратного уравнени¤ ¤вл¤ютс¤: x1=" << "0" << " и x2=" << x;
		}
	}
	if (a == 0 && b != 0 && c == 0){
		cout << "корнем квадратного уравнени¤ ¤вл¤ютс¤: x=" << "0";
	}
	if (a != 0 && b == 0 && c == 0){
		cout << "корнем квадратного уравнени¤ ¤вл¤ютс¤: x=" << "0";
	}
	if (a == 0 && b == 0 && c != 0){
		cout << "уравнение не имеет корней";
	}
		d = (pow(b,2) - (4 * a*c));
	if (d > 0){
		x1 = ((-b) + sqrt(d)) / (2 * a);
		x2 = ((-b) - sqrt(d)) / (2 * a);
		cout << "корн¤ми квадратного уравнени¤ ¤вл¤ютс¤: x1="<<x1<<" и x2="<<x2;

	}
	if (d == 0){
		x0 = ((-b) / 2*a);
		cout << "корнем квадратного уравнени¤ ¤вл¤етс¤: x=" << x0;
     }
	if (d < 0){

	}
	
}
