#include<iostream>
#include<clocale>
using std::cout;
using std::cin;
int main(){
      setlocale(LC_ALL, "Russian");
		int a = 1, b = 1, c = 0, num = 0;
		long float d = 1, x = 0;
		cout <<"задайте число "<<"\n";
		cin >>num ;
		
			for (; d > 0.00001;)
			{
				d = pow(num, c) / a;
				a = a*b;
				x = x + d;
				c++;
				b++;
			}
		
		cout<< "сумма заданного числа многочленов= "<< x<< "\n";
		
	
}
