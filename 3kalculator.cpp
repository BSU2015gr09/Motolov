#include <iostream>//вывод массива

#include <iostream>//вывод массива

#include<clocale>
#include<iomanip>
using namespace std;
void task1();
void task2();
void task3();
const int N = 20;
int main(){
	cout << "first" << endl;
	task1();
	cout << "second" << endl;
	task2();
	cout << "third" << endl;
	task3();

	return 0;
}void task1(){//вывод слево-направо

	int A[N][N];
	int a = 0, b = 0, cell = 1;
	for (; a < 20; a++){
		for (int i = 0; i < 3; b++, i++){
			A[a][b] = cell;
			if (cell == 60){
				cout << A[a][b] << ".";
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
	int a = 0, b = 0, cell = 3;
	for (; a < 20; a++){
		for (int i = 0, b = 0; b < 3, i < 3; b++, i++){
			A[a][b] = cell;

			cout << A[a][b] << ",";
			cell--;

		}
		cell += 6;
		cout << "\n";
	}
}


void task3()//выывод по —ѕирали
{
	int A[N][N];
	int a = 0, b, i = 0, p = 1;

	while (a < N*N)
	{
		i++;
		for (b = i - 1; b<N - i + 1; b++)
		{
			A[i - 1][b] = p++;
			a++;
		}

		for (b = i; b<N - i + 1; b++)
		{
			A[b][N - i] = p++;
			a++;
		}

		for (b = N - i - 1; b >= i - 1; b--)
		{
			A[N - i][b] = p++;
			a++;
		}

		for (b = N - i - 1; b >= i; b--)
		{
			A[b][i - 1] = p++;
			a++;
		}

	}

	for (int a = 0; a<N; a++)
	{
		for (int b = 0; b<N; b++)
		{
			cout << setw(4) << A[a][b];
		}
		cout << endl;
	}


}