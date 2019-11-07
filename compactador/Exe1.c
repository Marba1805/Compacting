#include <stdio.h>

struct comLet {
   char let;
   int qtd;
};

int len(v){
//Retorna o tamanho do vetor
	int len = sizeof(v) / sizeof(v[0]);
	return len; 
}

int contPadr(v){
//Conta quantos padroes tem no vetor de input
	int cont = 0;
	int c,j;
		for(c = 0; c<= len(v); c = c + 1){
			for(j = 0; j<= len(v); j = j + 1)
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
	int c,j;
	
	while(i != true){
		for(c = 0; c<= len(v); c = c + 1){
			for(j = 0; j<= len(v); j = j + 1)
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

void main(){
	
	char teste[10];
	teste[0] = a;
	teste[1] = a;
	teste[2] = a;
	teste[3] = b;
	teste[4] = b;
	teste[5] = c;
	teste[6] = c;
	teste[7] = c;
	teste[8] = c;
	teste[9] = c;
	
	printf(contPadr(teste))
}
