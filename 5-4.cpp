﻿//d) В программе объявлен массив А целых чисел(размер массива 100).Пользователь вводит число реально используемой части массива(число N)
//Эта часть затем заполняется случайными числами.Потом распечатываем массив.Затем удаляем первый элемент массива(сдвигая остальные элементы) и 
//меняем N на единицу.Потом пользователь вводит произвольное число и оно добавляется в конец используемой части массива и меняем N на единицу.Потом 
//распечатываем массив.Затем опять удаляем первый элемент массива(сдвигая остальные элементы) и меняем N на единицу.Потом пользователь вводит произвольное 
//число и оно добавляется в конец используемой части массива и меняем N на единицу.Потом распечатываем массив.
#include <iostream>
using namespace std;
void sizearray(int & s,int N )
{
	cout << "введите размер масcива меньший чем " <<N <<endl;
	cin >> s;
}

void initialisation(int a[], int s) 
{
	int i = 0;
	for (; i<s; i++){
		a[i] = rand() % 20 - 10;
	}
}

void outputarray(int a[], int s) 
{
	for (int i = 0; i<s; i++){
		cout<<i<<":"<<a[i]<<endl;
	}
	
}


void shift(int a[], int  &s)
{

	for (int i = 0; i<s - 1; i++){
		a[i] = a[i + 1];
	}
	
}

void addlastelement(int a[], int &s)
{
	int j=0;
	cout << "введите последний элемент для добавления  " << endl;
	cin >> j;
	
	a[s - 1] = j;
}

int main()
{

	setlocale(LC_ALL, "Russian");
	const int N = 100;
	int a[N];
	int s = 0;
	sizearray(s, N);

	initialisation(a, s); 
	
	
	outputarray(a, s);
		shift(a, s);
		addlastelement(a, s);
		cout << "Добавление введённого  элемента в конец массива" << endl << endl;
		outputarray(a, s);
		shift(a, s);
		addlastelement(a, s);
		cout << "Добавление введённого элемента в конец массива" << endl << endl;
		outputarray(a, s);

	

}