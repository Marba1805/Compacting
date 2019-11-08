#include <stdio.h>

struct comLet {
   char let;//caracter ou  combinacao de caracteres
   int qtd;// quantidade de vezes que ele repete
}


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
	return cont;
}



void compactador(v){
	
	int i = 0; // cria uma condicao para um "loop while" rodar mais para fente
	int padr = contPadr(v); //cria uma variavel com o numero de padroes no vetor
	struct comLet var; //cria uma variavel com a estrutura criada anteriormente
	struct comLet lt[padr] /*cria um vetor de tamanho exatamente nescecario ao caso*/
	int c,j;
	
	while(i <= padr){
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
	
}
