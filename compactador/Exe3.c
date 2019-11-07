#include <stdio.h>

struct comLet {
   char let;
   int qtd;
};

int contPadr(v){
	//Essa funcao serve para contar quantos padroes tem no vetor de input
	int cont = 0;
		for(int c = 0; c<= len(v); c = c + 1){
			for(int j = 0; j<= len(v); j = j + 1)
			char a = v[c];
			if (v[j] == a){
			}
			else{	
				cont = cont +1;
			}
		}
}



void compactador(v){
	
	bool i = false; // cria uma condicao para um "loop while" rodar mais para fente
	struct comLet var; //cria uma variavel com a estrutura criada anteriormente
	struct comLet lt[contPadr(v)] /*cria um vetor de tamanho exatamente nescecario ao caso*/
	while(i != true){
		for(int c = 0; c<= len(v); c = c + 1){
			for(int j = 0; j<= len(v); j = j + 1)
			var.let = v[c];
			if (v[j] == var.let){
				var.qtd = var.qtd + 1;
			}
			else{
				
				break;
			}
		}
	}
}
