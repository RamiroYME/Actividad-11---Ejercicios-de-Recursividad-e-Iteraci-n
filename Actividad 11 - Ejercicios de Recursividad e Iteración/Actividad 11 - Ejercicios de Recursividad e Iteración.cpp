#include <iostream>
#include <string>
using namespace std;

void generarVariasTablas() {
    int cantidadTablas, resultado;
    int tablaActual = 1;
    int multiplicador;
    string input;

    cout << "\n\n¿Cuántas tablas de multiplicar deseas generar?: ";
    cin >> input;

    cantidadTablas = stoi(input);
    cin.ignore();

    while (tablaActual <= cantidadTablas) {
        multiplicador = 10;
        while (multiplicador >= 1) {
            resultado = tablaActual * multiplicador;
            cout << tablaActual << " * " << multiplicador << " = " << resultado << endl;
            multiplicador--;
        }
        tablaActual++;
        cout << endl;
    }
}

void generarTablaEspecifica() {
    int numero, resultado;
    int multiplicador = 1;
    string input;

    cout << "\n\nIngresa un número para generar su tabla de multiplicar: ";
    cin >> input;

    numero = stoi(input);
    cin.ignore();

    while (multiplicador <= 12) {
        resultado = numero * multiplicador;
        cout << numero << " * " << multiplicador << " = " << resultado << endl;
        multiplicador++;
    }
}

int main() {
    // Llama directamente a las funciones
    generarVariasTablas();
    generarTablaEspecifica();

    return 0;
}