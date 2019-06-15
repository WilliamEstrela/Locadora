#include <iostream>
using namespace std;

struct no{
	string cliente;
	struct no *prox;
};
typedef no Fila;

struct posicao{
	Fila *inicio;
	Fila *fim;
};
typedef posicao Posicao;

Posicao matriz[5][7];

Fila* criarNo(){
	Fila * aux;
	aux = (Fila*) malloc(sizeof(Fila));
	aux->prox = NULL;
	return aux;
}

void insere(Posicao *posicao, string cliente ){

	Fila * aux = criarNo();

	if(posicao->inicio == NULL){
		aux->cliente = cliente;
		posicao->inicio = aux;
		posicao->fim = aux;
	}else{
		posicao->fim->prox = aux;
		posicao->fim  = aux;
		aux->cliente = cliente;
	}

}

void desenfileira(Posicao *posicao){
	Fila *aux;

	aux = posicao->inicio;
	posicao->inicio = posicao->inicio->prox;
	free(aux);
}

void imprime(Posicao *posicao){
	Fila *i;
	int count = 0;
	cout << "Elemento(s): ";
	for(i=posicao->inicio; i!= NULL; i = i->prox){
		cout << i->cliente << " ";
		count++;
	}

	cout << "Qtd:(" << count << ") "<<endl;
	cout <<endl;
}

void nomesDiaSemana(){
	cout << "\nNome do dia da semana" << endl;
	cout << "0 - Segunda" << endl;
	cout << "1 - Terca" << endl;
	cout << "2 - Quarta" << endl;
	cout << "3 - Quinta" << endl;
	cout << "4 - Sexta" << endl;
	cout << "5 - Sabado" << endl;
	cout << "6 - Domingo" << endl;
}

void nomesFilmes(){

	cout << "\n0 - A Volta de quem nao foi" << endl;
	cout << "\n1 - As trancas da vovo careca" << endl;
	cout << "\n2 - Poeira em auto mar" << endl;
	cout << "\n3 - Os reprovados em estrutura de dados" << endl;
	cout << "\n4 - A terra plana" << endl;
}
void menu(){
	int a, diaSemana, filme;
	string cliente, escolha, confirmacao;

	cout << "================Locadora================"<<endl;
	cout << "1 Inserir um cliente na fila" <<endl;
	cout << "2 Ligar para proximo " <<endl;
	cin >> a;

	switch (a){
		case 1: {

			cout << "\nNome do cliente na fila" << endl;
			cin >> cliente;

			nomesDiaSemana();
			cin >> diaSemana;

			nomesFilmes();
			cin >> filme;

			Posicao &poss = matriz[filme][diaSemana];
			insere(&poss, cliente);

			imprime(&poss);

			menu();

			break;
		}
		case 2: {

			nomesDiaSemana();
			cin >> diaSemana;

			nomesFilmes();
			cin >> filme;

			Posicao &poss = matriz[filme][diaSemana];
			cout << "Status da fila: "; imprime(&poss);
			cout << "Deseja ligar para " << poss.inicio->cliente << "?  (s/n)"<<endl;
			cin >> escolha;
			if(escolha == "s"){
				cout << "Ele confirmou a locacao ? (s/n)"<<endl;
				cin >> confirmacao;
				if(confirmacao == "s")
					desenfileira(&poss);
				else
					menu();
			}else{
				if(escolha == "n"){
					menu();
				}else{
					cout << "Voce so pode escolher entre (s/n)";
					break;
				}
			}
			menu();

			break;
		}

	}
}

int main() {

	for(int i =0; i<5; i++){
		for(int j = 0; j<5; j++){
			matriz[i][j].inicio=NULL;
			matriz[i][j].fim=NULL;
		}
	}
	menu();

	return 0;
}
