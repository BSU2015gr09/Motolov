﻿#include<iostream>//Вводятся числа до первого отрицательного,выводится сумма чисел
#include<clocale>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	int num = 0, sum = 0;
	do{
		cout << "введите число" << "\n";
		cin >> num;
		if (num > 0){ // Подумате как обойтись без этой проверки, ведь она дублирует while (num > 0); 
			sum = sum + num;
		}
	} while (num > 0); //надо НЕотрицательных, а не положительных
	cout << "сумма положительных чисел равана:" << sum;
	return 0;
}
