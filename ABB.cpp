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
 if (valor < nodo->valor)
            nodo->izquierdo = insertar(nodo->izquierdo, valor);
        else if (valor > nodo->valor)
            nodo->derecho = insertar(nodo->derecho, valor);
        else
            cout << "El valor ya existe en el árbol." << endl;
        return nodo;
    }

    void inOrden(Nodo* nodo) {
        if (nodo != nullptr) {
            inOrden(nodo->izquierdo);
            cout << nodo->valor << " ";
            inOrden(nodo->derecho);
        }
    }

    void preOrden(Nodo* nodo) {
        if (nodo != nullptr) {
            cout << nodo->valor << " ";
            preOrden(nodo->izquierdo);
            preOrden(nodo->derecho);
        }
    }

    void postOrden(Nodo* nodo) {
        if (nodo != nullptr) {
            postOrden(nodo->izquierdo);
            postOrden(nodo->derecho);
            cout << nodo->valor << " ";
        }
    }
