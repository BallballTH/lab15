#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *x,int *y,int *z,int *k){
	int a[4] = {*x,*y,*z,*k};
	for(int i=0; i<4; i++){
		int shu = rand()%4;
		int temp = a[i];
		a[i] = a[shu];
		a[shu] = temp;
	}

	*x = a[0];
	*y = a[1];
	*z = a[2];
	*k = a[3];
}