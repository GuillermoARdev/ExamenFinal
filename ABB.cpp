#include <iostream>
using namespace std;

// ESTRUCTURA DEL NODO.
struct Nodo {
    int valor;
    Nodo* izquierdo;
    Nodo* derecho;

    Nodo(int val) {
        valor = val;
        izquierdo = nullptr;
        derecho = nullptr;
    }
};
// Arbol binario, creacion.
class ArbolBinario {
private:
    Nodo* raiz;

    Nodo* insertar(Nodo* nodo, int valor) {
        if (nodo == nullptr) {
            cout << "Elemento no existe, se acaba de ingresar." << endl;
            return new Nodo(valor);
