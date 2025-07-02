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
            cout << "El valor ya existe en el arbol." << endl;
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
 }

    void mostrarDecision(int valor) {
        if (valor == 20) cout << "\tTe interesa el deporte\n";
        else if (valor == 12) cout << "\tPractica DEPORTES DE EQUIPO\n";
        else if (valor == 8) cout << "\tPractica FÚTBOL\n";
        else if (valor == 15) cout << "\tPractica VOLEIBOL\n";
        else if (valor == 30) cout << "\tPractica DEPORTES INDIVIDUALES\n";
        else if (valor == 25) cout << "\tPractica NATACION\n";
        else if (valor == 35) cout << "\tPractica TENIS\n";
    }

    bool buscar(Nodo* nodo, int valor) {
        if (nodo == nullptr)
            return false;
        if (nodo->valor == valor) {
            mostrarDecision(20); // Siempre mostrar primero el mensaje raiz
            mostrarDecision(valor);
            return true;
        }
        if (valor < nodo->valor)
            return buscar(nodo->izquierdo, valor);
        else
            return buscar(nodo->derecho, valor);
    }

public:
    ArbolBinario() {
        raiz = nullptr;
    }

    void insertar(int valor) {
        raiz = insertar(raiz, valor);
    }

    void mostrarInOrden() {
        cout << "Recorrido inorden: ";
        inOrden(raiz);
        cout << endl;
    }

    void mostrarPreOrden() {
        cout << "Recorrido preorden: ";
        preOrden(raiz);
        cout << endl;
    }
