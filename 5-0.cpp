﻿//a) В массиве случайных целых чисел *первый положительный элемент и последний отрицательный элемент переставить местами.
//все четные элементы заменить максимальным элементом, а нечетные — минимальным.
//найти максимальный из элементов, встречающихся только один раз.
//найти минимальное из чисел, встречающихся более одного раза.
#include <iostream>
using namespace std;
void initilisation(int a[], int N){
	for (int i = 0; i < N; i++){
		a[i] = rand() % 19 - 10;

	}

}
void output(int a[], int N){
	for (int i = 0; i < N; i++){
		cout << i << ":" << a[i] << endl;
	}
}
void positivenegative(int a[], int  N){

	cout << "В массиве случайных целых чисел *первый положительный элемент и последний отрицательный элемент переставить местами. " << endl;
	int  neglast = 0, posfirst = 0, k = 0;
	for (; posfirst < N; posfirst++){
		if (a[posfirst]>0){
			break;
		}

	}

	for (neglast = N - 1; neglast< N; neglast--){
		if (a[neglast] < 0){
			break;
		}
	}
	k = a[posfirst];
	a[posfirst] = a[neglast];
	a[neglast] = k;
	output(a, N);
}
void minmax(int a[], int  N, int &min, int &max){

	min = a[0];
	max = a[0];

	for (int i = 0; i<N; i++){
		if (a[i] > max){
			max = a[i];

		}
		else
		if (a[i] < min){
			min = a[i];

		}
	}



}
void changealleventomax(int a[], int N){
	cout << "все четные элементы заменить максимальным элементом, а нечетные — минимальным" << endl;
	int min, max;
	minmax(a, N, min, max);
	for (int i = 0; i < N; i++){
		if (a[i] % 2 == 0){
			a[i] = max;

		}
		else{
			a[i] = min;
		}


	}
	output(a, N);
}
void amountmax(int a[], int N){
	output(a, N);
	int max = a[0];
	int i = 0;
	int j = 0;
	int b = 0;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N - i; j++) {
			if (a[j] > a[j + 1]) {
				b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
			}
		}
	}

	for (i = N - 1, b = 0; i >0; i--){
		for (j = N - 1; j > 0; j--){
			if (a[i] != a[j - 1]){
				max = a[i];
				b = 0;

			}
			else if (a[i] == a[j - 1]){
				b = 1;
			}

		}
		if (b == 0)
		{
			break;
		}
	}
	cout << "найти максимальный из элементов, встречающихся только один раз." << endl;
	cout << "max is " << max << endl;
}

void amountnmin(int a[], int N){
	cout << " найти минимальное из чисел, встречающихся более одного раза." << endl;
	int min = a[0];
	int i = 0;
	int j = 0;
	int b = 0;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N - i; j++) {
			if (a[j] < a[j + 1]) {
				b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
			}
		}
	}

	for (i = N - 1, b = 0; i >0; i--){
		for (j = N - 1; j > 0; j--){
			if (a[i] == a[j - 1]){
				min = a[i];
				b = 0;

				break;
			}

			else if (a[i] != a[j - 1]){
				b = 1;
			}

		}
		if (b == 0)
		{
			break;
		}

	}
	cout << "min is " << min << endl;
}
void maxlength(int a[], int N) {
	cout << "определить максимальную длину последовательности равных элементов." << endl;
	initilisation(a, N);
	output(a, N);
	int i = 0;
	int q = 0;
	int maxlength = 0;

	for (; i < N; i++) {
		for (int k = 0; k<N; k++) {
			if (a[i] == a[k] && (i != k)){
				q++;
			}

			if (q >= maxlength){
				maxlength = q;
			}
		}
	}
	cout << "максимальная длина одинаковых чисел " << q << endl;

}
int main() {
	const int  N = 20;
	int a[N];
	setlocale(LC_ALL, "Russian");

	initilisation(a, N);
	output(a, N);
	positivenegative(a, N);
	amountmax(a, N);
	amountnmin(a, N);
	maxlength(a, N);
	changealleventomax(a, N);
	cout << "go";
	system("pause ");

}