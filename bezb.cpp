#include <iostream>
using std::cout;
using std::endl;
void intitialisation(char B[]){
	char B[4] = { 'Т', 'К', 'Д', 'В' };
}
void translition(char B[] ){
	
	char A[4];
	int i = 0,q=4;
	i = rand() % 3;
	for (; q > 0; i = rand() % 4,q--){
		 A[q] = B[i];
		 cout << A[q] << endl;
	}
}
int main(){
	setlocale(LC_ALL, "Russian");
	const int N=4;
	char B[N];
	intitialisation(B);
	translition(B);



}