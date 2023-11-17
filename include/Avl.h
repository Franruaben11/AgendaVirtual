#ifndef AVL_H_INCLUDED
#define AVL_H_INCLUDED


using namespace std;

template <typename T>
struct Nodo {
    T dato;
    Nodo<T>* max;
    Nodo<T>* min;
    int height;
};


template <typename T>
class Avl {
private:
    Nodo<T>* miRaiz;
    void mostrarEnOrden(Nodo<T>* miNodo) const;
    void agregarRecursivo(Nodo<T>*& miNodo, T val1);
    void limpiar(Nodo<T>*& miNodo);
    void eliminarNodoRecursivo(Nodo<T>*& miNodo, string name);
    T* busquedaRecursiva(Nodo<T>* miNodo, string name) const;
    int getBalance(Nodo<T>* miNodo);
    void ordenarConDif(Nodo<T>*& miNodo,int dif, T val);
    Nodo<T>* buscarMenorDeLasMayores(Nodo<T>* miNodo);

public:
    Avl();
    ~Avl();
    bool operator==(const T& miEstructura) const;
    void ActualizarAltura(Nodo<T>*& miNodo);
    int getAltura(Nodo<T>* miNodo) const;
    void agregarAVL(T val1);
    void eliminarNodoAvl(string nameBorrar);
    T* buscarNodo(string nombreBuscar);
    void mostrar() const;
};

#endif
