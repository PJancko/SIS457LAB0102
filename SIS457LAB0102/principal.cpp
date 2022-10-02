#include <iostream>
using namespace std;
int main() {
	bool exit = true;
	int opc;
	do
	{
		opc = 0;
		cout << "Pablo Alejandro Jancko Gallardo, 27 de abril de 2001 nacido en Potosi" << endl;
		while (opc != 1 && opc != 2)
		{
			cout << "Quiere vover a imprimir biografia? 1.Y/2.N" << endl;
			cin >> opc;
		}
		if (opc == 2)
			exit = false;
	} while (exit);
	
	
	return 0;
}