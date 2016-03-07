#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
int initialisation(int &n, int x){
	cout << "Введите размер строки:" << endl;
	cin >> n;
	char *array = new char(n);
	srand(time(NULL));
	for (int i = 0; i < n; i++){

		*(array + i) = rand() % 127;
		cout << array[i];

	}
	return array[n];
}
int output(int *a, int n){
	cout << "a=" << *a;

	return 0;
}
int main(){
	setlocale(LC_ALL, "Russian");
	int n = 0, *a = 0, b = 0, x = 0;

	*a = initialisation(n, x);
	//char* ch[] = {"one","two","three","four"};
	//cout <<ch[3];
	output(a, n);
	system("pause");
}