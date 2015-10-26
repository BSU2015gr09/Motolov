#include <iostream>

#include <clocale>

#include <iomanip>

using namespace std;

// я не понял кода... Как работатет калькулятор так и не разобрался ((((
int main(){

	setlocale(LC_ALL, "Russian");

	double a=0,b=0,c=0,d=0;
	char ch;
	
	cout << "вводите"<<endl;
	
	while (d != 2){


		cin >> a;
		//cout << "введите действие" << endl;
		cin >> ch;
		//cout << "ВВедите второе число" << endl;
		cin >> b;
		switch (ch){

		case '+':c = a + b;
			//cout << a << ch << b;
			break;
		case '-':c = a - b;
			//cout << a << ch << b;
			break;
		case '*':c = a * b;
			//cout << a << ch << b;
			break;
		case '/':
			while (b = 0){//Опять ОШИБКА тут!!!! Внимание!!!!!!
				cout << "На ноль делить нельзя введите друное значение числа чтобы продолжить" << endl;
				cin >> b;
			}
			c = a / b;
			//cout << a << ch << b;

			break;
		case 'c':

			break;
		case 'e': d = 2;
			goto loop;
			break;
		case '=':cout << "=" << c << endl;
			cout << "результат";
			continue;
			d = 2;
			break;
		}
		//cout << "Введи операцию(для выхода введите е,для обнуления введите с)" << endl;
		d = 2;
	}
		cin >> ch;
		cin >> a;
		
	
		switch (ch){

		case '+':c = c + a;
			cout << ch << a;
			break;
		case '-':c = c - a;
			cout << ch << a;
			break;
		case '*':c = c*a;
			cout << ch << a;
			
			break;
		case '/':while (a = 0){{//Опять ОШИБКА тут!!!! Внимание!!!!!!
					 cout << "На ноль делить нельзя введите друное значение числа чтобы продолжить" << endl;
					 cin >> b;
		}
			c = c / a;
			cout << ch << a;
			break;
		case 'c':d = 1;

			
			break;
		case 'e': d = 2;
			goto loop;
			break;
		case '=':
			cout << "=" << c<<endl;
			cout << "результат";
			d = 2;
			break;
		}
		
	
loop:;
	return 0;
}

