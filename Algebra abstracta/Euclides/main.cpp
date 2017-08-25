#include <iostream>

using namespace std;

int main()
{
	int a, b, r, q;
	cin >> a >> b;
	while (r != 0){
		q = a / b;
		if (q > 0)
			q *= -1;
		r = (b*q - a);
		cout << a << " = " << b << " . " << q << " + " << r <<endl;
		a = b;
		b = r;
	}
	return 0;
}

