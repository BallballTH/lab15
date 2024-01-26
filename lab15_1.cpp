#include<iostream>
using namespace std;

int main(){
	int a = 5, *x = &a, **z = &x; ;
	char b = 'A', &c = b, *y = &b ,s = ' ';

	cout << a <<s<< b <<s<< c <<s<< x <<s<< (int *)y <<s<< z << endl;

	cout << &a <<s<< (int *)&b <<s<< (int *)&c <<s<< x <<s<< (int *)y <<s<< z << endl;

	c = 'F';
	cout << a <<s<< b <<s<< c <<s<< x <<s<< (int *)y <<s<< z << endl;

	*y = 'W';
	cout << a <<s<< b <<s<< c <<s<< x <<s<< (int *)y <<s<< z << endl;

	*x = 6;
	cout << a <<s<< b <<s<< c <<s<< x <<s<< (int *)y <<s<< z << endl;

	**z = 7;
	cout << a <<s<< b <<s<< c <<s<< x <<s<< (int *)y <<s<< z << endl;

	return 0;
}
