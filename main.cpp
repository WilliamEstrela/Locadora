#include <iostream>
using namespace std;

struct no{
    int info;
    struct no *prox;
    struct no *inicio;
};
typedef no Fila;

Fila* inicializa(){
    return NULL;
}

Fila* insere(Fila *fila, int info ){
    Fila * aux;



    aux = (Fila*) malloc(sizeof(Fila));

    if(fila == NULL){
        fila->prox->inicio = aux;
    }

    aux->info = info;
    aux->prox = fila;

    return  aux;
}

void imprime(Fila *fila){
    Fila *i = fila;

    do{
        cout << i->info;
        i = i->prox;
    }while(i!=fila);



}
int main() {
    Fila *f1 = inicializa();

    f1 = insere(f1, 1);
    f1 = insere(f1, 2);
    f1 = insere(f1, 3);

    imprime(f1);

    return 0;
}