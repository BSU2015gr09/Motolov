#include <iostream>
#include <iomanip>
#include <clocale>

using std::cin;
using std::cout;
using std::setw;
int main(){
	 int a = 1000,d=30, c = 500, m = 43, i = 0;
	int const n = 10;
	int array[n];
	array[0] = 2;
	cout << " 1 = " << array[0] << "\n";
	while ( i<n) {
		i++;
		array[i] = (((a*array[i - 1])/2) + c) % m;
		cout << setw(3) << i + 1 << " = " << array[i] << "\n";
	}
	system("pause");
}