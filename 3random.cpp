#include <iostream>
#include <iomanip>
#include <clocale>
using std::cin;
using std::cout;
int main()
{
	long int a = 4096, c = 150889, m = 714025;
	long int i = 1;
	int mas[10]; // Зачем массив?????
	mas[0] = 1;
	cout << " 1 : " << mas[0] << "\n";
	while (i<11)
	{
		mas[i] = (a*mas[i - 1] + c) % m;
		cout << std::setw(2) << i + 1 << " : " << mas[i] << "\n";
		i++;
	}
	system("pause");
}
