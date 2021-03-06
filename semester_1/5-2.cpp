﻿//В двумерном массиве NxM заполненном случайными натуральными числами
//найти седловую точку если она там есть.Седловой точкой называется элемент матрицы который является минимумом в строке и максимумом в столбце.
//Вывести сумму элементов главной диагонали матрицы(N = M)
//Вывести сумму элементов нижнего треугольника матрицы(N = M)#include <iostream>
#include <iostream>
using namespace std;
#include <iomanip>;
void initialisation(int a[6][6], int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= N - 1; j++){
			a[i][j] = rand() % 15+23;
			

				cout << " " << a[i][j] << " ";
				if (j == N - 1){
					cout << endl;
				}
		}
	}
	}
int maxcol(int x, int y, int a[6][6], int N){
	int maxcol= a[x][y];
	
	int i = 0;
	for (; i < N; i++){
		if (maxcol<a[i][y]){
			return false;
		}
	}
	return true;
	
}

int minst(int x, int y, int a[6][6], int N){
	int mins = a[x][y];
	
	int j = 0;
	for (; j < N; j++){
		if (mins>a[x][j]){
			return false;
		}
	}
	return true;
	
}

void saddlepoint(int a[6][6], int N){
	int i = 0;
	int j = 0;
	int counter = 0;

	for (i = 0; i < N; i++){
		for (j = 0; j < N; j++){
			counter = 0;
			if (minst(i, j, a, N) && maxcol(i, j, a, N)){
				counter++;
				cout << "seddle point is" << a[i][j] << "i=" << i << " " << "j=" << j << endl;
			}
		}
	}
	if (counter == 0){
		cout << "no seddle point" << endl;
	}
}

void diagonalsum(int a[6][6], int N){
	cout << "Сумма элементов диагонали "<<endl;
	int i = 0;
	int j = 0;
	int sum = 0;
	for (; i < N; i++, j++){
		sum += a[i][j];
		
	}
	cout << "SUM=" << sum<<endl;
}
void downtriangle(int a[6][6], int N){
	cout << "Находим сумму элементов нижнего треугольника " << endl;
	int i = 0;
	int j = 0;
	int Sum = 0;
	for (; i < N; i++){
		for (j=0; j <= i; j++){
			Sum += a[i][j];
		}
	}
	cout << "Summa=" << Sum;
}
int main(){
	setlocale(LC_ALL, "Russian");
	const int N = 6;
	int a[6][6];
	initialisation(a, N);
	saddlepoint(a, N);
	diagonalsum(a,N);
	downtriangle(a,N);
}