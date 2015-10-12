#include<iostream>
#include<clocale>
using std::cout;
using std::cin;
int main(){
	setlocale(LC_ALL, "Russian");
	int a=0,b=0;
	cout << "введите число ";
	cin >> a;
	while ( a!=0){
		b = a % 10;
		a = a / 10;
		cout <<b;
	}
}