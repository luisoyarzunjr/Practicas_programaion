#include <iostream>
#include <list>

using namespace std;

int suma(list<int> arreglo);
int producto(list<int> arreglo);
bool and2(list<bool> arreglo);
bool or2(list<bool> arreglo);

list<int> doblar_todos(list<int> arreglo);
//  5. Definir y desarrollar una función llamada doblar_todos, que retorne
//     y muestre los datos
//     del arreglo ingresado y calcule el doble de cada uno de sus elementos.
//  6. Definir y desarrollar una función llamada esElemento, que retorne y muestre si un valor
//     dado se encuentra en el arreglo de los n elementos.
//  7. Definir y desarrollar una función llamada elemNum que Compruebe y retorna el número de veces
//     que se repite un valor entero dentro de un arreglo de n elementos.
//  8. Definir y desarrollar una función llamada unica, de manera que unica aplicada a un arreglo
//     de n elementos devuelve en un nuevo arreglo los elementos que solo aparecen una sola vez.
//  9. Definir y desarrollar una función llamada take, de manera que take aplicada a un arreglo de
//     n elementos devuelve en un nuevo arreglo únicamente los primeros x elementos de este.
// 10. Definir y desarrollar una función llamada drop, de manera que drop aplicada a un arreglo
//     de n elementos devuelve en un nuevo arreglo únicamente los últimos x elementos de este.
// 11. Definir y desarrollar una función llamada splitAt, que permita la división de un arreglo
//     en 2 subarreglos de tamaños m y n elementos.
// 12. Definir y desarrollar una función llamada join, que permita la unión de 2 subarreglos de
//     tamaños m y n elementos en uno solo.
// 13. Implemente la función hayAlgunNegativo, que busque si existe un número negativo en el arreglo
//     de n elementos ingresado (puede implementarse una función booleana).
// 14.	Implemente la función aEntero que transforme los n valores enteros ingresados en el arreglo
//     y los retorne como un sólo valor.
// 15. Implemente la función aLista, que transforme un valor entero en sus respectivos dígitos y los
//     almacene en un arreglo de n valores enteros

string mostrarTF(bool x){
    if(x==1)
        return "True";
    else
        return "False";
}

void mostrar(list<auto> l){
    list<int>::iterator it;
    cout<<"[";
    for (it = l.begin(); it != l.end(); ++it){
        cout<<(*it);
        if(++it != l.end())
            cout<<' ';
        --it;
    }
    cout<<']'<<endl;
    return;
}

void mostrarB(list<bool> l){
    cout<<"[";
    while(!l.empty()){
        cout<<mostrarTF(l.front());
        l.pop_front();
        if(l.size()==0)
            cout<<']'<<endl;
        else
            cout<<' ';
    }
    return;
}

int main()
{
    cout << "Hello world!" << endl;
    list<int> listaI;
    list<bool> listaB;
    list<int>::iterator it = listaI.begin();
    int datoI, tam, i, j;
    bool datoB;

    cout << "Cuántos elementos enteros va a tener su arreglo: ";
    cin >> tam;

    for (i=0; i<tam; i++){
        cout << "Ingrese dato ["<<i+1<<"]: ";
        cin >> datoI;
        listaI.push_back(datoI);
    }
    mostrar(listaI);

//    cout<<"Valor a Insertar: ";
//    cin>>datoI;
//    cout<<"Inserte en: ";
//    cin>>j;
//    for(i=0; i<j;i++){
//        ++it;
//    }
//    listaI.insert(it,datoI);
//    mostrar(listaI);

    cout<<"Valor de suma: "<<suma(listaI)<<endl;
    cout<<"Valor de producto: "<<producto(listaI)<<endl;
    mostrar(doblar_todos(listaI));

    cout << "Cuántos elementos booleanos va a tener su arreglo: ";
    cin >> tam;

    for (i=0; i<tam; i++){
        cout << "Ingrese dato ["<<i+1<<"]: ";
        cin >> datoB;
        listaB.push_back(datoB);
    }
    mostrarB(listaB);
    cout<<"Valor de AND2: "<<mostrarTF(and2(listaB))<<endl;
    cout<<"Valor de OR2: " <<mostrarTF(or2(listaB))<<endl;

//    for (list<int>::iterator it = lista1.begin(); it != lista1.end(); ++it){
//        cout<<(*it)<<' ';
//    }

    return 0;
}

int suma(list<int> arreglo){
    int data;
    if(!arreglo.empty()){
        data = arreglo.front();
        arreglo.pop_front();
        return data + suma(arreglo);
    }
    else
        return 0;
}

int producto(list<int> arreglo){
    int data;
    if(!arreglo.empty()){
        data = arreglo.front();
        arreglo.pop_front();
        return data * producto(arreglo);
    }
    else
        return 1;
}

bool and2(list<bool> arreglo){
    bool data;
    if(!arreglo.empty()){
        data = arreglo.front();
        arreglo.pop_front();
        return data && and2(arreglo);
    }
    else
        return true;
}

bool or2(list<bool> arreglo){
    bool data;
    if(!arreglo.empty()){
        data = arreglo.front();
        arreglo.pop_front();
        return data || or2(arreglo);
    }
    else
        return false;
}

list<int> doblar_todos(list<int> arreglo){
    list<int> dato;

    mostrar(arreglo);
    mostrar(dato);

    if(!arreglo.empty()){
        dato.push_back(2*arreglo.front());
        arreglo.pop_front();
        cout<<dato.back()<<' ';
        doblar_todos(arreglo);
    }

    return dato;
}
