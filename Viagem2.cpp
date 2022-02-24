#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float x, y, z, a, b; /* x: quantidade de notas, y: valor da nota, z: quantidade
	de chocolates, a: valor do chocolate, b: resultado */
	cout << fixed << setprecision(2);
	cin >> x;
	cin >> y;
	cin >> z;
	cin >> a;
	
	b = (x*y)-(z*a);
	cout << b << endl;
	return 0;
}