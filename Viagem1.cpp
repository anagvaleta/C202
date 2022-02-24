#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float x, y, z; // x: tempo y: velocidade media z: resultado
	cout << fixed << setprecision(3);	
	cin >> x;
	cin >> y;
	z = x*y / 12; 
	cout << z << " litro(s)" << endl;
	return 0;
}

