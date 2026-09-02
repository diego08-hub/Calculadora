#include <iostream>
#include <cmath>
using namespace std;

double sumar(double a, double b) {
    return a + b;
}

double restar(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

double dividir(double a, double b) {
    if (b == 0) {
        cout << "Error: division entre cero" << endl;
        return 0;
    }
    return a / b;
}
double raiz_cuadrada(double a) {
    if (a < 0) {
        cout << "Error: no se puede sacar raiz de un numero negativo" << endl;
        return 0;
    }
    return sqrt(a);
}

int main() {
    double a, b;
    char operacion;

    
	
    cout << "Ingrese el primer numero (a): ";
    cin >> a;
    cout << "Ingrese el segundo numero (b): ";
    cin >> b;
    cout << "Ingrese la operacion (+, -, *, /, r=raiz de a): ";
    cin >> operacion;

    double resultado;

    switch (operacion) {
        case '+':
            resultado = sumar(a, b);
            break;
        case '-':
            resultado = restar(a, b);
            break;
        case '*':
            resultado = multiplicar(a, b);
            break;
        case '/':
            resultado = dividir(a, b);
            break;
	case 'r':
	    resultado = raiz_cuadrada(a);
	    break;
        default:
            cout << "Operacion no valida" << endl;
            return 1;
    }

    cout << "Resultado: " << resultado << endl;
    return 0;
}
