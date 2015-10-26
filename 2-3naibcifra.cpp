#include<iostream>//Ввести целое число,вывести наибольшую цифру и на какой оно позиции
#include<clocale>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	int num = 0, s = 0, i = 1, max = 0,q=0,num1=0;
	cin >> num;
	num1 = num;
	while (num > 0){
		
		s = num % 10;
		if (max < s){
			max = s;
			
        }
		
		num = num / 10;
	}
	cout << "Наибольшей цифрой данного числа является:" << max << "\n" << "данная цифра находится на " << " позиции слева: ";
	while (num1 > 0){
		q = num1 % 10;
		if (q == max){
			cout << i << ",";
		}
		i++;
		num1 = num1 / 10;
	}
	
	
}
