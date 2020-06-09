#include <iostream>
using namespace std;

double soma (double n1, double n2) {
	return n1 + n2;
}

double subtracao (double n1, double n2) {
	return n1 - n2;
}

double multiplicacao (double n1, double n2) {
	return n1 * n2;
}

double divisao (double n1, double n2) {
	return n1 / n2;
}

double potencia (double n1, double n2)
	(double n3, resultado;)
    
    n1 = 3
    n3 = 1
	if (n2 == 2)
	return n2 = 2;
}
	else {
	while (n3^n1) {
    resultado = (n3^n1)* n3;
}
	return resultado;}
}

int main() {
	double n1, n2;
	char operacao;
	cout << "Digite o 1º número: "; cin >> n1;
	cout << "Adição" << endl;
	cout << "Subtração" << endl;
	cout << "Multiplicação" << endl;
	cout << "Divisão" << endl;
	cout << "Potência" << endl;
	cout << "Digite a operação matemática que deseja fazer: ";
	cin >> operacao;
	cout << "Digite o 2º número: ";
	cin >> num2;
}
	switch (operacao) {
    case "+": {cout << n1;
    cout << " + "; 
    cout << n2;
    cout << " = ";  
    cout << soma(n1, n2);}
	    break;
    case "-": {cout << n1; 
    cout << " - "; 
    cout << n2; 
    cout << " = ";  
    cout << subtracao (n1, n2);}
	    break;
    case "*": {cout << n1; 
    cout << " * "; 
    cout << n2; 
    cout << " = ";  
    cout << multiplicacao (n1, n2);}
		break;
	case "/":

	if (n2 != 0) {
    cout << n1; 
    cout << " / "; 
    cout << n2; 
    cout << " = ";  
    cout << divisao (n1, n2);}

	else cout << "Operação Inválida";
		break;
	case "^": {cout << n1; 
    cout << " ^ "; 
    cout << n2; 
    cout << " = ";  
    cout << exponenciacao (n1, n2);}
		break;

	default: cout << "Operaçao inválida!!";}
	return 0;
}