
#include<iostream>
using namespace std;


int main(){
	int N = 8, i = 0, c = 0;
	int A[8];

	for (; N < 8; i++){

		cin >> A[i];
		if (A[i]>0)c = c + A[i];

	}
	cout << "\n" << c;
}

