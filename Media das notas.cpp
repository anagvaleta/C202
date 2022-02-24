#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//variaveis
	float x, y, z, a;
	cout <<fixed<< setprecision(2); // fixar em duas casas decimais
	// textos
	cout << "Digite a nota da prova 1: ";
	cin >> x;
	cout << "Digite a nota da prova 2: ";
	cin >> y;
	cout << "Digite a nota do exercicio proposto: ";
	cin >> z;
	// formula da média
	a = (x+y)/2*0.9 + z*0.1;
	// resultado final
	cout << "Sua nota final e: " << a << endl;
	return 0;
}