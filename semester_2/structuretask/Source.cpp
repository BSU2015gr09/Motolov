#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
#include <clocale>
#include <fstream>
#include <Windows.h>
using namespace std;
const int N = 10;
struct data{
	char *number;
	char *name;
	char *surname;
}telephonebook[N];


void displaydefault(){
	char buff[50];
	ifstream fin("default.txt");
	if (!fin.is_open()) // если файл не открыт
	{
		cout << "Файл не может быть открыт!\n";
	}// сообщить об этом
	else
	{
		for (int i = 0; i < N; i++){
			if (i == 0){

				cout << "Номер"  << "           Имя"  << "     Фамилия" << endl;

				i = 0;
			}
			fin >> buff;
			cout << buff << "\t";
			fin >> buff;
			cout << buff << "\t";
			fin >> buff;
			cout << buff << endl;
		}
		fin.close(); // закрываем файл
	}
}
void displayset(){
	char buff[50];
	ifstream fin("set.txt");
	if (!fin.is_open())
	{
		cout << "Файл не может быть открыт!\n";
	}// сообщить об этом
	else
	{
		for (int i = 0; i < N; i++){
			if (i == 0){

				cout << "Номер       "<< "Имя       " << "Фамилия" << endl;

				i = 0;
			}
			fin >> buff;
			cout << buff << "\t\t";
			fin >> buff;
			cout << buff << "\t\t";
			fin >> buff;
			cout << buff << endl;
		}

		fin.close();

	}
}

void createbook(){
	/*char name[20];
	cin >> name;
	opportynity named file*/
	ofstream fout("set.txt", ios_base::app); // открываем файл для добавления информации к концу файла
	int num = 0;

	for (int i = 0; i < 1; i++){
		cout << "ВВедите телефонный номер/n";

		char tmp[255];
		cin >> tmp;

		for (int i = 0; strlen(tmp)>i; i++){
			if (((int)tmp[i] >= 48) && (((int)tmp[i] <= 57)) || ((int)tmp[i] == 43)){

			}
			else{
				cout << "ВВодите только цифры" << endl;
				createbook();
			}
		}
		telephonebook[i].number = new char[100];
		strcpy(telephonebook[i].number, tmp);
		strcat(telephonebook[i].number, " ");
		fout << telephonebook[i].number;
		cout << "ВВедите имя /n";
		cin >> tmp;
		telephonebook[i].name = new char[100];
		strcpy(telephonebook[i].name, tmp);
		strcat(telephonebook[i].name, " ");
		fout << telephonebook[i].name;
		cout << "ВВедите фамилию /n";
		cin >> tmp;
		telephonebook[i].surname = new char[100];
		strcpy(telephonebook[i].surname, tmp);
		strcat(telephonebook[i].surname, " ");
		fout << telephonebook[i].surname;
	}
	//fout.close();
	delete telephonebook[0].surname;
	delete telephonebook[0].name;
	delete telephonebook[0].number;
	
}
void addinfo(){

	ofstream fout("default.txt", ios_base::app); // открываем файл для добавления информации к концу файла

	int num = 0;

	for (int i = 0; i < 1; i++){
		cout << "ВВедите телефонный номер/n";
		char tmp[255];
		cin >> tmp;

		for (int i = 0; strlen(tmp)>i; i++){
			if (((((int)tmp[i]) >= 48) && (((int)tmp[i] <= 57))) || ((int)tmp[i] == 43)){

			}
			else{
				cout << "ВВодите только цифры" << endl;
				createbook();
			}
		}
		telephonebook[i].number = new char[100];
		strcpy(telephonebook[i].number, tmp);
		strcat(telephonebook[i].number, " ");
		fout << telephonebook[i].number;
		cout << "ВВедите имя /n";
		cin >> tmp;
		telephonebook[i].name = new char[100];
		strcpy(telephonebook[i].name, tmp);
		strcat(telephonebook[i].name, " ");
		fout << telephonebook[i].name;
		cout << "ВВедите фамилию /n";
		cin >> tmp;
		telephonebook[i].surname = new char[100];
		strcpy(telephonebook[i].surname, tmp);
		strcat(telephonebook[i].surname, " ");
		fout << telephonebook[i].surname;
	}
	
		delete telephonebook[0].surname;
		delete telephonebook[0].name;
		delete telephonebook[0].number;
	
	//fout.close();

}
void firstformatting(){
	ofstream fout("default.txt", ios_base::trunc);
	if (!fout.is_open())
	{
		cout << "Файл не может быть открыт!\n";
		//menu();
	}
}
void secondformatting(){
	ofstream fout("set.txt", ios_base::trunc);
	if (!fout.is_open())
	{
		cout << "Файл не может быть открыт!\n";
		//menu();
	}
}
void formatting(){
	cout << "Для очистки изначальной книги нажмите 1 " << endl;
	cout << "Для очистки новой  книги нажмите 2 " << endl;
	//cout << "Для возврата в меню нажмите 3 " << endl;
	int num = 0;
	cin >> num;
	switch (num)
	{
	case 1: firstformatting();
		break;
	case 2:secondformatting();
		break;
	//case 3:menu();
	//	break;
	default:cout << "Таой команды нет поробуйте ещё" << endl;
		formatting();
		break;
	}

}
void readmemd(){
	char buff[200];
	ifstream fin("Readme.txt");
	fin.getline(buff, 200);
	fin.close();
	cout << buff << endl;

}
int menu()
{
	while (2){
		int num;
		
	
		cout << "____________________________________________________________________________" << endl;
		cout << "|                  Выберете манипуляцию с телефонной книгой                |" << endl;
		cout << "|   1) Нажмите 1 для отоброжения  Readme.md                                |" << endl;
		cout << "|   2) Нажмите 2 для вывода имеющейся информации  телефонной книги         |" << endl;
		cout << "|   3) Нажмите 3 для созданния пустой книги (нужна начальная инициализация)|" << endl;
		cout << "|   4) Нажмите 4 для добавления информации в имеющиюся книгу               |" << endl;
		cout << "|   5) Нажмите 5 для форматирования выбранной книги                        |" << endl;
		cout << "|   6) Нажмите 6 для вывода информации в созданной вами функции            |" << endl;
		cout << "|   7) Нажмите 7 для выхода                                                |" << endl;
		cout << "|__________________________________________________________________________|" << endl;
		cin >> num;

		switch (num)
		{

		case 1: readmemd();
			break;
		case 2:displaydefault();
			break;
		case 3:createbook();
			break;
		case 4:addinfo();
			break;
		case 5:formatting();
			break;
		case 6:displayset();
			break;
		case 7:return 0;
			
		default:cout << "Таой команды нет поробуйте ещё" << endl;
			menu();
			break;
		}
	}
}
int main(){
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);        
	SetConsoleOutputCP(1251);
	menu();
	system("pause");
}
