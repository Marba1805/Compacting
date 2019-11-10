#include <stdio.h>

struct comLet {
   char let;//caracter ou  combinacao de caracteres
   int qtd;// quantidade de vezes que ele repete
}


int len(v){
/*Retorna o tamanho do vetor
essencailmente a funcao len presente em outras linguagens*/
	int len = sizeof(v) / sizeof(v[0]);
	return len; 
}

int contPadr(v){
//Conta quantos padroes tem no vetor de input
	char aux[(len(v)/2)];
	int cont = 0;
	int count = 0;
	int c,j,k;
		for(c = 0; c<= len(v); c = c + 1){
			for(j = c+1; j<= len(v); j = j + 1)
			aux[a] = v[c];
			if (v[j] == aux[a]){
				for(k =0; k  <= c+1; k=k+1){
					if (aux[k] == v[k]){ // esse loop tem como objetivo verificar 
					 cont = cont+1 //o trecho do vetor ao vetor auxiliar para conferir o padrao
					}
					if (cont !== k){
						count = count +1;
						break;
					}
				}
			}

		}
	return cont;
}



void compactador(v){
	
	int i = 0; // cria uma condicao para um "loop while" rodar mais para fente
	int padr = contPadr(v); //cria uma variavel com o numero de padroes no vetor
	struct comLet var; //cria uma variavel com a estrutura criada anteriormente
	struct comLet lt[padr] /*cria um vetor de tamanho exatamente nescecario ao caso*/
	char aux[(len(v)/2)]; //cira um vetor de auxilio de tamanho maximo de metade do vetor inicial
	int c,j,k,l,cont;
	
	
	
	while(i <= padr){
		for(c = 0; c<= len(v); c = c + 1){
			for(j = c+1; j<= len(v); j = j + 1)
				if (v[c] !== v[j]){
					aux[c] = v[c];
				}

				else{
				
				break;
				}
				for(k =j; k  <= c+1; k=k+1){
					if (aux[k] == v[k]){ // esse loop tem como objetivo verificar 
					 cont = cont+1 //o trecho do vetor ao vetor auxiliar para conferir o padrao
					}
					if (cont !== k){
						var.qtd = var.qtd + 1;	
						break;
					}
					for(l = j; l<=k;l=l+1){
						var.let = "" + v[l];
					}
				}
		lt[c]=var;
		}		
	}
	return lt;
}

void main(){
	
}
