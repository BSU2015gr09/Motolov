#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a=0, b=0, c=0, d=0,e=0,g=0,f=0,h=0, i=1,q=9,num;
	cin >> num;
	e = num;
	while (num > 0){

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
			if (h = b){
				cout  << q;
			}
		}
	}else
	while (b != d){
		
		i++;
		c = i % 10;
		d = d + c;
	}
	cout << i;

}