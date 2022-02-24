#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char nome[15];
	float quantidade, valor;
	
	cin >> nome;
	cin >> quantidade;
	valor = 2.908*quantidade;

	cout << nome << " " << valor << endl;	 
	return 0;
}