#include <iostream>//вывод массива
#include<clocale>
using namespace std;
void task1();
void task2();

const int N = 20;
int main(){
	task1( );
	task2();
	return 0;
}void task1(){//вывод слево-направо
	
	int A[N][N];
	int a=0, b=0, cell = 1;
	for (; a < 20; a++){
		for (int i = 0; b < 3, i < 3; b++, i++){
			A[a][b] = cell;
			if (cell == 60){
				cout << A[a][b]<<".";
				break;
			}
			cout << A[a][b] << ",";
			cell++;

		}
		cout << "\n";
	}
}
void task2(){// вывод справо-налево
	
	int A[N][N];
	int a=0, b=0, cell = 3;
	for (; a < 20; a++){
		for (int i = 0 ,b=0; b < 3, i < 3; b++, i++){
			A[a][b] = cell;
			
			cout << A[a][b] << ",";
			cell--;

		}
		cell+=6;
		cout << "\n";
	}
}
