#include <iostream>
#include <clocale>
#include<ctime>
#include<conio.h>
//#include <stdafx.h>
using namespace std;
int main(){
	int num = 0, i = 0, k = 0, c = 0;
	char ch,ac;
	setlocale(LC_ALL, "Russian");
	cout << " „тобы начать игру представтесь  " << endl;
	cin >> ch;
	for (;; ){
	begin:;		cout << "сколько раз трести " << endl;
		cin >> num;
		srand(num);

		i = rand() % 7 + 1;
		k = i;
		switch (i){
		case 1:cout << "-------" << endl;
			cout << "|       |" << endl;
			cout << "|   o   |" << endl;
			cout << "|       |" << endl;
			cout << "-------" << endl;
			break;
		case 2:cout << "-------" << endl;
			cout << "|       |" << endl;
			cout << "|  о о  |" << endl;
			cout << "|       |" << endl;
			cout << "-------" << endl;
			break;
		case 3:cout << "-------" << endl;
			cout << "| о     |" << endl;
			cout << "|   о   |" << endl;
			cout << "|     о |" << endl;
			
			cout << "-------" << endl;
			break;
		case 4:cout << "-------" << endl;
			cout << "| о   о |" << endl;
			cout << "|       |" << endl;
			cout << "| о   о |" << endl;
			cout << "-------" << endl;
			break;
		case 5:cout << "-------" << endl;
			cout << "| о   о |" << endl;
			cout << "|   о   |" << endl;
			cout << "| о   о |" << endl;
			cout << "-------" << endl;
			break;
		case 6:cout << "-------" << endl;
			cout << "| о о о |" << endl;
			cout << "|       |" << endl;
			cout << "| о о о |" << endl;
			cout << "-------" << endl;
			break;
		}
		srand(time(0));
		i = rand() % 7 + 1;
		k = k + i;
		switch (i){
		case 1:cout << "-------" << endl;
			cout << "|       |" << endl;
			cout << "|   o   |" << endl;
			cout << "|       |" << endl;
			cout << "-------" << endl;
			break;
		case 2:cout << "-------" << endl;
			cout << "|       |" << endl;
			cout << "|  о о  |" << endl;
			cout << "|       |" << endl;
			cout << "-------" << endl;
			break;
		case 3:cout << "-------" << endl;
			cout << "| о     |" << endl;
			cout << "|   о   |" << endl;
			cout << "|     о |" << endl;
			cout << "-------" << endl;
			break;
		case 4:cout << "-------" << endl;
			cout << "| о   о |" << endl;
			cout << "|       |" << endl;
			cout << "| о   о |" << endl;
			cout << "-------" << endl;
			break;
		case 5:cout << "-------" << endl;
			cout << "| о   о |" << endl;
			cout << "|   о   |" << endl;
			cout << "| о   о |" << endl;
			cout << "-------" << endl;
			break;
		case 6:cout << "-------" << endl;
			cout << "| о о о |" << endl;
			cout << "|       |" << endl;
			cout << "| о о о |" << endl;
			cout << "-------" << endl;
			break;
		}

		cout << "ќчередь компьютера " << endl;
		srand(time(0));
		i = rand() % 7 + 1;
		c = i;
		switch (i){
		case 1:cout << "-------" << endl;
			cout << "|       |" << endl;
			cout << "|   o   |" << endl;
			cout << "|       |" << endl;
			cout << "-------" << endl;
			break;
		case 2:cout << "-------" << endl;
			cout << "|       |" << endl;
			cout << "|  о о  |" << endl;
			cout << "|       |" << endl;
			cout << "-------" << endl;
			break;
		case 3:cout << "-------" << endl;
			cout << "| о     |" << endl;
			cout << "|   о   |" << endl;
			cout << "|     о |" << endl;
			cout << "-------" << endl;
			break;
		case 4:cout << "-------" << endl;
			cout << "| о   о |" << endl;
			cout << "|       |" << endl;
			cout << "| о   о |" << endl;
			cout << "-------" << endl;
			break;
		case 5:cout << "-------" << endl;
			cout << "| о   о |" << endl;
			cout << "|   о   |" << endl;
			cout << "| о   о |" << endl;
			cout << "-------" << endl;
			break;
		case 6:cout << "-------" << endl;
			cout << "| о о о |" << endl;
			cout << "|       |" << endl;
			cout << "| о о о |" << endl;
			cout << "-------" << endl;
			break;
		}
		srand(time(0)); //лишнее, думаю каждый раз... Хотя. Не повредит ))))

		i = rand() % 7 + 1;
		c = c + i;
			switch (i){
			case 1:cout << "-------" << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << "-------" << endl;
				break;
			case 2:cout << "-------" << endl;
				cout << "|       |" << endl;
				cout << "|  о о  |" << endl;
				cout << "|       |" << endl;
				cout << "-------" << endl;
				break;
			case 3:cout << "-------" << endl;
				cout << "| о     |" << endl;
				cout << "|   о   |" << endl;
				cout << "|     о |" << endl;
				cout << "-------" << endl;
				break;
			case 4:cout << "-------" << endl;
				cout << "| о   о |" << endl;
				cout << "|       |" << endl;
				cout << "| о   о |" << endl;
				cout << "-------" << endl;
				break;
			case 5:cout << "-------" << endl;
				cout << "| о   о |" << endl;
				cout << "|   о   |" << endl;
				cout << "| о   о |" << endl;
				cout << "-------" << endl;
				break;
			case 6:cout << "-------" << endl;
				cout << "| о о о |" << endl;
				cout << "|       |" << endl;
				cout << "| о о о |" << endl;
				cout << "-------" << endl;
				break;
		}
		if (k > c){
			cout << "********" << "»грок" << " " << ch << " " << "выйграл" << "********";
		}
		else
			cout << " ѕобедил компьютер" << ":(";
		cout << "’отите играть заново???" << endl;
	    cout << "если да введите y, если нет введите n"<<endl;
		cin >> ac;
		switch (ac){
		case 'y':break;
		case'n':goto loop; // супер!
			break;
		}
		

}
loop:;
}


	
	

	


	

	
	

