#include<iostream>
#include<clocale>
using std::cout;
using std::cin;
int main(){
	setlocale(LC_ALL, "Russian");
	int a=0, b=0,c=0,n=0;
	cin >> a;
	n=a;
	for (; n > 0; n = n / 10){
		b = n % 10;
		c = c*10 + b;
		
		}
	if (a == c){
		cout << "Порядок цифр симметричен";
	}
	else{
		cout << "Порядок  цифр ne симметричен";
	}
	
}

