#include<iostream>
#include<clocale>
using std::cout;
using std::cin;
int main(){
	setlocale(LC_ALL, "Russian");
		int n=0;
		int s = 0;
		cout << "����� �����"<<"\n";
		cin >> n;
		cout << "\n";
		cout << "����� ���� ����� ����� " << "\n";
		for (n; n>0; n = n/10)
		{
		
			s =s + n %10;
			
		
		}
		cout << s;
		cout << "\n";
		
	}
