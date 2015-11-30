#include <iostream>
#include <iomanip>
#include <clocale>
using std::cin;
using std::cout;
int main()
{
	int i = 2 int n;
	cin >> n;
	while (n != 1)
	{
		if (i*i > n)
			i = n;
		while (n % i != 0)
			i++;
		while (n % i == 0)
			n /= i;
		std::cout << i << "\n";
	}
	return 0;
}
	
	}
	system("pause");
}
