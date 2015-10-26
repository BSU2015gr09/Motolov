#include <iostream>
#include <string> // а это зачем??????
using namespace std;
int main()
{
	int a=0, b=0, c=0, d=0,e=0,g=0,f=0,h=0, i=1,q=9,num;
	cin >> num;
	e = num;
	while (num > 0){ // тут бесконечный цикл!!!! Подумайте почему!!! Что то менется в условии цикла?

		a = e % 10;
		e = e / 10;
		b = b + a;
	}
	cout << "begin" << endl;
	
	if (num < 10){
		
		q++;
		while (q>0){
			g = q;
			f = g % 10;
			g = g / 10;
			h = h + f;
			if (h = b){ // Ура!!! Я увидел тут ошибку... А Вы????
				cout  << q;
			}
		}
	}else
	while (b != d){//Тут я вообще ничего не понял...
		
		i++;
		c = i % 10;
		d = d + c;
	}
	cout << i;

}
