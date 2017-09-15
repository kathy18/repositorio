#include <iostream>

using namespace std;

int modulo (int a, int b){
	int c,r;
	c=a/b;
	r=a-(b*c);
	return r;
}

int main(){
	cout<<modulo(25,19);
	return 0;
}
