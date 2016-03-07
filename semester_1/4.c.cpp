#include <iostream>
#include<clocale>
using namespace std;
int XorShift(int x);
int array[100];
void actionarray();
int initialisation(int);
void after0();
void aftermin(); 
void beforemax();
int minfunc(int i);
int maxfunc(int i);
int i = 0,max=0,min=0;
int main(){
	setlocale(LC_ALL, "Russian");
	cout << "Инициализируем массив"<<endl;
	actionarray();
	cout << "Вставим после 0, 999"<<endl;
	after0();
	cout << "Вставим 111 посл min"<<endl;
	aftermin();
	cout << "Вставим 222 перед max"<<endl;
	beforemax();
	return 0;
}
void aftermin(){
	i = 0;
	while (i < 100){
		if (array[i] == minfunc(0)) {
			array[i + 1] = 111;
		}
		i++;
	}
}
int XorShift(int x){
	int a = 13, b = 15, c = 5, tmp = 0;;
	tmp ^= (x << a);
	tmp ^= (tmp >> b);
	x ^= (tmp << c);
	return x;
}
void actionarray(){
	for (; i < 100; i++){
		array[i] = XorShift(i);
		cout << i+1 << ":" << array[i] << "\n";
	}
}
void after0(){
	i = 0;
	while (i < 100){
		if (array[i] = 0){
			array[i + 1] = 999;
		}
		i++;
	}
}
int  maxfunc(int i){
	max=array[i];
	for (; i < 100; i++){
		if (array[i + 1]>max){
			max = array[i + 1];
		}
		return max;
	}
	}
	int minfunc(int i){
	
		min = array[i];
        for (; i < 100; i++)
			 {
             if(array[i+1]<min){
			      min = array[i + 1];
		}
	}
		return min;
}
	void beforemax(){
		i = 0;
		while (i < 100){
			if (array[i] == maxfunc(0)) {
				array[i - 1] = 111;
			}
			i++;
		}

	}