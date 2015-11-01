#include <iostream>

#include <clocale>

#include <iomanip>

using namespace std;


int main(){

	setlocale(LC_ALL, "Russian");

	double a=0,b=0,c=0,d=0,i=0;
	char ch,pr;
	
	cout << "вводите"<<endl;
	
	while (d != 2){
		switch (pr){
		case '=':
			cout << "=" << c << endl;
			cout << "результат" << "\n";
			break;
		default:;
		}
		
		cin >> a;
		//cout << "введите действие" << endl;
		cin >> ch;
		switch (ch){
		case '=':
			cout << "=" << c << endl;
			cout << "результат" << "\n";
			break;
		default:;
		}
		if (i < 1){
			cin >> b;
			//cout << "ВВедите второе число" << endl;
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
				while (b = 0){
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
			i++;

			cin >> ch;
			switch (ch){
			case '=':
				cout << "=" << c << endl;
				cout << "результат" << "\n";
				break;
				continue;
			default:;
			}
		}
		cin >> ch;
		switch (ch){
		case '=':
			cout << "=" << c << endl;
			cout << "результат" << "\n";
			break;
		default:;
		}
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
		case '/':while (a = 0){
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

		}
		pr = ch;
	}
loop:;
	
}

