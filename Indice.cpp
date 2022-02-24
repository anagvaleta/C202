#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	cout << fixed << setprecision(4);

	string nome;
	float idade, resultado;

	getline(cin, nome);
	//cin.ignore();

	cin >> idade;

	resultado = idade / 42 - (idade - 3);
	cout << nome << " " << resultado << endl;

}