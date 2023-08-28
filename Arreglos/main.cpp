#include <iostream>

using namespace std;

// Parte II: Ejercicios utilizando arreglos:
// NOTA: En todas las funciones debe enviarse el tamaño del arreglo.
// Arreglos de Prueba:
// • int a[] = {-1, 4, -3, -8, 9, 2, -4, 7, 10};
// • char c[] = {'a', 'B', 'c', 'D', '9'};
// • int t_int = end(a)-begin(a);
// • int t_char = end(c)-begin(c);

int *DuplicarTodos(int arreglo[], int tam);
bool *EsPar(int arreglo[], int tam);
int *DuplicarSoloPares(int arreglo[], int tam);
int *TriplicarSoloParesPositivos(int arreglo[], int tam);
int *CuadradoSoloImpares(int arreglo[], int tam);
int *Cuadrados(int arreglo[], int &tam);
bool *EsLetra(char arreglo[], int tam);
char *CambiarMayuscula(char arreglo[], int tam);
int *invertir(int arreglo[], int tam);
int *PosPar(int arreglo[], int &tam);
int *PosImpar(int arreglo[], int &tam);

char *AdjuntarI(char nuevo, int pos, char arreglo[], int &tam);
char *AdjuntarD(char nuevo, int pos, char arreglo[], int &tam);

void mostrar(auto arreglo[], int tam);

int main(){
    cout << "Hello world!" << endl;
    // Arreglo para las preguntas con números: 1, 2
    int a[] = {-1, 4, -3, -8, 9, 2, -4, 7, 10};

    // Arreglo para las preguntas con caracteres: 3
    char c[] = {'a', 'B', 'c', 'D', '9'};

    // Arreglo para almacenar los resultados
    int* res_enteros;
    char* res_caracter;
    bool* res_logico;
    int t2;
    int t_int = end(a)-begin(a);
    int t_char = end(c)-begin(c);

    cout<<"Parte II: Ejercicios utilizando arreglos:"<<endl;

    cout<<"Arreglo Original de Numeros: "; mostrar(a,t_int);
    res_enteros=DuplicarTodos(a,t_int);
    cout<<"DuplicarTodos: "; mostrar(res_enteros,t_int);
    res_logico=EsPar(a,t_int);
    cout<<"EsPar: "; mostrar(res_logico,t_int);
    res_enteros=DuplicarSoloPares(a,t_int);
    cout<<"DuplicarSoloPares: "; mostrar(res_enteros,t_int);
    res_enteros=TriplicarSoloParesPositivos(a,t_int);
    cout<<"TriplicarSoloParesPositivos: "; mostrar(res_enteros,t_int);
    res_enteros=CuadradoSoloImpares(a,t_int);
    cout<<"CuadradoSoloImpares: "; mostrar(res_enteros,t_int);
    t2 = t_int;
    res_enteros=Cuadrados(a,t2);
    cout<<"Cuadrados: "; mostrar(res_enteros,t2);
    cout<<endl;

    cout<<"Arreglo Original de Caracteres: "; mostrar(c,t_char);
    res_logico=EsLetra(c,t_char);
    cout<<"EsLetra: "; mostrar(res_logico,t_char);
    res_caracter=CambiarMayuscula(c,t_char);
    cout<<"CambiarMayuscula: "; mostrar(res_caracter,t_char);
    cout<< endl;

    cout<<"Parte III: Aplicación de Funciones predefinidas sobre arreglos:"<<endl;
    res_enteros=invertir(a,t_int);
    cout<<"invertir: "; mostrar(res_enteros,t_int);
    t2 = t_int;
    res_enteros=PosPar(a,t2);
    cout<<"PosPar: "; mostrar(res_enteros,t2);
    t2 = t_int;
    res_enteros=PosImpar(a,t2);
    cout<<"PosImpar: "; mostrar(res_enteros,t2);
    cout<<endl;

    t2 = t_char;
    res_caracter=AdjuntarI('Z', 2, c ,t2);
    cout<<"AdjuntarI: "; mostrar(res_caracter,t2);
    t2 = t_char;
    res_caracter=AdjuntarD('Z', 2, c ,t2);
    cout<<"AdjuntarD: "; mostrar(res_caracter,t2);

    return 0;
}

void mostrar(auto arreglo[], int tam){
    cout<<'[';
    for(int i = 0; i < tam-1; i++){
        cout<<arreglo[i]<<", ";
    }
    cout<<arreglo[tam-1]<<']'<<endl;
    return;
}

int *DuplicarTodos(int arreglo[], int tam){
    int* arr = new int[tam];
    for(int i = 0; i < tam; i++){
        arr[i]=2*arreglo[i];
    }
    return arr;
}

bool *EsPar(int arreglo[], int tam){
    bool* comp = new bool[tam];
    for(int i = 0; i < tam; i++){
        comp[i]=(arreglo[i]%2==0);
    }
    return comp;
}

bool *EsLetra(char arreglo[], int tam){
    bool* comp = new bool[tam];
    for(int i = 0; i < tam; i++){
        comp[i]=((arreglo[i]>='A'&&arreglo[i]<='Z')||(arreglo[i]>='a'&&arreglo[i]<='z'));
    }
    return comp;
}

char *CambiarMayuscula(char arreglo[], int tam){
    char* mayusc = new char[tam];
    for(int i = 0; i < tam; i++){
        if((arreglo[i]>='a')&&(arreglo[i]<='z'))
            mayusc[i]=int(arreglo[i])-('a'-'A');
        else
            mayusc[i]=arreglo[i];
    }
    return mayusc;
}

int *DuplicarSoloPares(int arreglo[], int tam){
    int* arr = new int[tam];
    for(int i = 0; i < tam; i++){
        if(arreglo[i]%2==0)
            arr[i]=2*arreglo[i];
        else
            arr[i]=arreglo[i];
    }
    return arr;
}

int *TriplicarSoloParesPositivos(int arreglo[], int tam){
    int* arr = new int[tam];
    for(int i = 0; i < tam; i++){
        if(arreglo[i]%2==0 && arreglo[i]>=0)
            arr[i]=3*arreglo[i];
        else
            arr[i]=arreglo[i];
    }
    return arr;
}

int *CuadradoSoloImpares(int arreglo[], int tam){
    int* arr = new int[tam];
    for(int i = 0; i < tam; i++){
        if(arreglo[i]%2!=0)
            arr[i]=arreglo[i]*arreglo[i];
        else
            arr[i]=arreglo[i];
    }
    return arr;
}

int *Cuadrados(int arreglo[], int &tam){
    int* arr = new int[0];
    int* aux;
    int j=0;
    for(int i = 0; i < tam; i++){
        if(arreglo[i]%2==0){
            j++;
            aux = arr;
            arr = new int[j];
            arr = aux;
            arr[j-1]=arreglo[i]*arreglo[i];
            // mostrar(arr,j);
        }
    }
    tam=j;
    return arr;
}

int *invertir(int arreglo[], int tam){
    int* arr = new int[tam];
    for(int i = 0; i <= tam/2; i++){
        arr[i] = arreglo[tam-i-1];
        arr[tam-i-1] = arreglo[i];
    }
    return arr;
}

int *PosPar(int arreglo[], int &tam){
    int* arr = new int[0];
    int* aux;
    int j=0;
    for(int i = 0; i < tam; i++){
        if((i+1)%2==0){
            j++;
            aux = arr;
            arr = new int[j];
            arr = aux;
            arr[j-1]=arreglo[i];
        }
    }
    tam=j;
    return arr;
}

int *PosImpar(int arreglo[], int &tam){
    int* arr = new int[0];
    int* aux;
    int j=0;
    for(int i = 0; i < tam; i++){
        if((i+1)%2!=0){
            j++;
            aux = arr;
            arr = new int[j];
            arr = aux;
            arr[j-1]=arreglo[i];
        }
    }
    tam=j;
    return arr;
}

char *AdjuntarI(char nuevo, int pos, char arreglo[], int &tam){

    tam++;
    char* arr = new char[tam];
    int j=0;
    for(int i = 0; i < tam; i++){
        if((i+1) == pos)
            arr[i] = nuevo;
        else{
            arr[i] = arreglo[j];
            j++;
        }

    }
    return arr;
}

char *AdjuntarD(char nuevo, int pos, char arreglo[], int &tam){

    tam++;
    char* arr = new char[tam];
    int j=tam-2;
    for(int i = tam-1; i >= 0; i--){
        if(i == tam-pos-1)
            arr[i] = nuevo;
        else{
            arr[i] = arreglo[j];
            j--;
        }

    }
    return arr;
}
