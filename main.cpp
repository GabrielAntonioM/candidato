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
	cout << "Voce tem disponibilidade para viajar (S/N)? ";
	cin >> viaja;
	cout << "Voce tem habilitacao de motorista (S/N)? ";
	cin >> habilitacao;
	int somaexp, somaesc;
	if(escolaridade == 1){
		somaesc = 10;
	}else if(escolaridade == 2){
		somaesc = 20;
	}else if(escolaridade == 3){
		somaesc = 30;
	}else{
		somaesc = 40;
	}
	cout << endl << "Pontos por escolaridade: " << somaesc << endl;
	if(experiencia <= 0){
		somaexp = 0;
	}else if(experiencia <= 2){
		somaexp = 10;
	}else if(experiencia <= 5){
		somaexp = 20;
	}else{
		somaexp = 40;
	}
	cout << "Pontos por experiencia: " << somaexp << endl;
	
	return 0;
}
