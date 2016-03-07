#include<iostream>
#include<clocale>
using std::cout;
using std::cin;
max3(int,int,int)
int main(){
	setlocale(LC_ALL, "Russian");
		int a=0,b=0,c=0,max;
		cin >> a >> b >> c;
		max = a;
		if (a < b){
			max = b;
		
		
			if (b < c){
				max = c;
			}
			else 
			if (a < c){
				c = max;
			}
			cout << max;
		
	}
