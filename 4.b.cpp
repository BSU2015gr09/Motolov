#include <iostream>
#include <ctime>
#include<clocale>
using namespace std;
int func(int);
int initial(int);
int XorShift(int X);
void a_inverse();
void b_odd_even();
void max_min();
void arrayB();
void rebuildA();
void allmaxmin();
int   y = 10, i = 0, q = 1,max=0,min=0;
int array[100];
int main()
{

	setlocale(LC_ALL, "Russian");

	initial(0);
	cout << "Вывод массива в обратном порядке:" << endl;
	a_inverse();
	cout << "Вывод чётных  и нечётных членов  массива" << endl;
	b_odd_even();
	cout << "Максимуму и минимум" << endl;
	max_min();
	cout << "Колличество макс и мин"<<endl;
	allmaxmin();
	cout << "Массив В" << endl;
	arrayB();
	cout << "Перестроим A" << endl;
	rebuildA();
}
int XorShift(int X){
	int a = 13, b = 15, c = 5, tmp = 0;;
	tmp ^= (X << a);
	tmp ^= (tmp >> b);
	X ^= (tmp << c);
	return X;
}
int initial(int){
	for (; i < 101; i++){
		array[i] = func(i);
		cout << i << ":" << array[i] << "\n";
	}
	return 0;
}
int func(int i){
	y = (( XorShift(i)% 101) - 50);
	return y;

}
void a_inverse(){
	i = 100;
	while (i >= 0){
		cout << q << ":" << array[i] <<",";
		i--;
		q++;
	}

}
void b_odd_even(){
	cout << "Нечётные:" << endl;
	q = 1;
	i = 0;
	while (i < 101){
		
		if (array[i] % 2 != 0){
			cout << q << ":" << array[i] <<",";
			q += 2;
		}
		i++;
	}
	cout << "Чётные" << endl;
	q = 0;
	i = 0;
	while (i < 101){
		
		if (array[i] % 2 == 0){
			cout << q << ":" << array[i] <<",";
			q += 2;
		}
		i++;
	}

}
void max_min(){
	i = 0;
	min=max=array[i] ;
	while (i < 101){
		if (array[i + 1]>max){
	    max=array[i + 1];

		}
		if (array[i + 1]<min){
			min = array[i + 1];
		}
		i++;

	}
	cout<<"max=" << max << "\n";
	cout<<"min=" << min<<endl;
}
void arrayB(){
	i = 0;
	q = 0;
	int arrayB[101];
	while (i < 101){
		if (array[i] >= 0){
			arrayB[q] = array[i];
			q++;
		}
		i++;
	}
	i = 0;
	while (i < 101){
		if (array[i] <= 0){
			arrayB[q] = array[i];
			q++;
		}
		i++;
	}
	q = 0;
	while (q < 101){
		cout << arrayB[q] << endl;
		q++;
	}

}
void rebuildA(){

	i = 0;
	q = 0;
	while (i < 101){
		if (array[i] >= 0){
			 array[q]=array[i];
			q++;
		}
		i++;
	}
	i = 0;
	while (i < 101){
		if (array[i] < 0){
			array[q] = array[i];
			q++;
		}
		i++;
	}
	i = 0;
	q = 0;
	while (i < 101){
		cout << "\n" << array[q] << ",";
		i++;
		q++;
	}

}
void allmaxmin(){
	i = 0;
	int numberofmax=0,numberofmin=0;
	while (i < 101){
		if (array[i] == max){
			numberofmax++;
		}
		if (array[i] == min){
			numberofmin++;
		}
		i++;
	}
	cout << "число максимальных элементов" << "=" << numberofmax<<endl;
	cout << "число максимальных элементов" << "=" << numberofmin << endl;
	
}





