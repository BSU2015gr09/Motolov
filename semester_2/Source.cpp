//63.(8-9)Даны массивы А(N) и В(M).Удалить из массива А(N) элементы, которые являются повторяющимися в массиве В(M).Вывести сообщение “Нет”,
//если требуемых элементов нет.
#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
int initialisation(char array[], int n, char array1[], int n1){
	srand(time(NULL));
	for (int i = 0; i < (n - 1);){
		char ch = rand() % 127;
		if ((ch<=(char)90)&&(ch>=(char)65))
		{
			*(array + i) = ch;
			cout << array[i];
			i++;
		}
		
		if (i == (n - 2)){
			*(array + (n - 1)) = '\0';
			
		}
	}
	cout << endl;
	for (int i = 0; i < (n1 - 1);){
		char ch = rand() % 90;
		if (((int)ch <= 90) && ((int)ch >= 65))
		{
			*(array1 + i) = ch;
			cout << array1[i];
			i++;
		}
		if (i == (n1 - 2)){
			*(array1 + (n1 - 1)) = '\0';
		}
	}
	return 0;
}
int output(char array[], int n, char array1[], int n1){
	cout << endl << "ïåðâàÿ ñòðîêà" << endl;
	while (*array){

		cout << *(array);
		array++;

	}
	cout << endl << "âòîðàÿ ñòðîêà" << endl;
	while (*array1){

		cout << *(array1);
		array1++;

	}
	return 0;
}
int change(char array[], int n, char array1[], int n1)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = (n-1); ((j >i)); j--)
		{
	
			if ((*(array + i) == *(array + j)) && (i != j))
			{
				cout <<endl<< "i=" << i << endl;
				cout << "j=" << j << endl;
				int flag = 1;
				for (int k = 0; k < n1; k++)
				{
					if (*(array1 + k) == *(array + i))
					{
					    flag = 1;
						cout << "Ýòîò ñèìâîë åñòü â âòîðîé ñòðîêå" << endl;
						for (int d = k; d < n1; d++)
						{
						*(array1 + d) = *(array1 + (d + 1));
						}
						break;
					}
					else
					{
						 flag = 0;						
					}
				}
			if (flag == 0)
			{
					cout<< "Ýòîãî ñèìâîëà íåò âî âòîðîé ñòðîêå" << endl;
			}
				break;
			}
		}

	}
	output(array, n, array1, n1);
	return 0;
}
int main(){
	setlocale(LC_ALL, "Russian");
	int n = 0, n1 = 0;
	cout << "Ââåäèòå ðàçìåð ïåðâîé ñòðîêè:" << endl;
	cin >> n;
	n += 1;
	char *array = new char[n];//ïåðâûé ìàññèâ
	cout << "Ââåäèòå ðàçìåð âòîðîé ñòðîêè:" << endl;
	cin >> n1;
	n1 += 1;
	char *array1 = new char[n];//âòîðîé ìàññèâ
	initialisation(array, n, array1, n1);
	output(array, n, array1, n1);
	change(array, n, array1, n1);
	delete []array;
	delete []array1;
	system("pause");
}
