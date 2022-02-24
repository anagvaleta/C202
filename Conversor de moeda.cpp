#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//váriaveis
	float x, y, z;
	cout <<fixed<< setprecision(2); //fixa em duas casas decimais
	cout << "Digite o valor a ser convertido: ";
	cin >> x;
	// calculos e resultados
	y = x/5.60;
	cout << "Esse valor em dolar sera: " << y << endl;
	z = x/6.70; 
	cout << "Esse valor em Euro sera: " << z << endl;
	
}