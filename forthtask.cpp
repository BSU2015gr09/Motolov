#include<iostream>
#include<clocale>
using std::cout;
using std::cin;
int main(){
	setlocale(LC_ALL, "Russian");
	int s=0,n=0,i=1,k=0;
	cout << "����� �����" << "\n";
	cin >> n;
	

	for (n; n>0; n = n / 10)
	{ 
		if (i%2==0 ){
			s = s + n % 10;
			
		}
		else{
			k= k + n % 10;
		}
		i++;
	}

	cout << "����� ���� �� �������� ������:" << k << "\n";
	cout << "����� ���� �� ������ ������:" << s << "\n";
	if (k==s||k+11==s||k==s+11){
		cout << "����� ������� �� 11";
	}

}
	


