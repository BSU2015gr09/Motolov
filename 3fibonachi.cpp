
#include <iostream>
#include <clocale>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int i, q = 0;
	double array[40], pr = 0, ne = 0;
	array[0] = 0;
	array[1] = 1;
	cout << "   |                           ќтношение членов ‘ибоначчи                |" << endl;
	cout << "     |последующее к предыдущему| предыдущее к последующему|" << endl;
	//cout << "|" << i << ":" << q << "___________________________________|" << q << ":" << i << "___________________________________|" << endl;
	for (i = 2; i<40; i++)
	{
		q++;
		array[i] = array[i - 1] + array[i - 2];
		pr = array[i] / array[i - 1];
		ne = array[i - 1] / array[i];
		cout  << i << ":" << q ;
		cout << setw(6) << "|";
		cout << setw(20) << setprecision(4) << pr;
		cout << setw(5) << "|";
		cout << setw(4) << fixed << setprecision(4) << " " << ne << "|" << q << ":" << i << endl;
	}
	cout << "   |__________________________|_____________________________|" << endl;
	system("pause");
}
