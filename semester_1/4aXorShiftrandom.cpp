#include <iostream>//xorshift рандом
using std::cout;
int xorshift(int x){
	int tmp = 0, c = 4, b = 35, a = 21;;
	tmp ^= x << a;
	tmp ^= tmp >> b;
	x ^= tmp << c;
	return x;
}
int main(){
	cout << xorshift(4);
	return 0;
}
