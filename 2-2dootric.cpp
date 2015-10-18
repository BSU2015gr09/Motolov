#include<iostream>
#include<clocale>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	int num = 0, sum = 0;
	do{
		cout << "введите число" << "\n";
		cin >> num;
		if (num > 0){
			sum = sum + num;
		}
	} while (num > 0); 
	cout << "сумма положительных чисел равана:" << sum;
	return 0;
}
