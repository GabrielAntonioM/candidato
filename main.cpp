#include <bits/stdc++.h>

using namespace std;
int main() {
	int escolaridade, experiencia;
	string viaja, habilitacao;
	
	cout << "Qual sua escolaridade?" << endl;
	cout << "1) Ensino Fundamental" << endl;
	cout << "2) Ensino Medio" << endl;
	cout << "3) Ensino Superior" << endl;
	cout << "4) Pos-graduacao" << endl;
	cout << "Digite uma opcao: ";
	cin >> escolaridade;
	cout << endl << "Voce tem quantos anos de experiencia profissional? ";
	cin >> experiencia;
	cout << "Voce tem disponibilidade para viajar (S/N)?";
	cin >> viaja;
	cout << "Voce tem habilitacao de motorista (S/N)?";
	cin >> habilitacao;
	
	return 0;
}
