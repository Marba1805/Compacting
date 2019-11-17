#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Guarda a sequencia de letras a serem repetidas
int vezes(char itemC[],int posicao){
  int cont = 0; //indica localizacao no vetor
  int cont2 = 0;
  int qtdVezes = 0;
  for (int i=0;i<=posicao;i++){
    if (posicao==0){
      while(itemC[cont] != '-'){
        cont++;
        if(itemC[cont+1]<= '9' && itemC[cont]<= '9'){ //para caso a qtidade de repeticoes seja maior que 9
          qtdVezes = 10*(itemC[cont]-0);
        }
        else qtdVezes = (itemC[cont]-0);
      }
    }
    else{
      while(cont2<posicao){
        if(itemC[cont]>'9' && itemC[cont]!='-')
          qtdVezes = 0;
        if(itemC[cont]=='-')
          cont2++;
        if(itemC[cont+1]=='-')
          qtdVezes = qtdVezes + (itemC[cont]-0);
        if(itemC[cont]<='9' && itemC[cont+1]<='9'){
          qtdVezes = qtdVezes + 10*(itemC[cont]-0);
        }
      }
    }
  }
  return qtdVezes;
}

int main() {
  char itemC[10] = "a7-b5-a10";
  
  int len = sizeof(itemC)/sizeof(itemC[0]); //mostra o tamanho do vetor
  int dec = 1; //posicao decimal do numero lido
  int Nlen=0;
  int combinacoes = 0; //quantas combinacoes serao impressas

//Para verificar o tamanho do novo vetor
  for(int i=0;i<len;i++){
    if(itemC[i] == '-' || itemC[i] > '9'){
        dec = 1;
    }
    else if(itemC[i]<='9'){ //se for um numero, ver qual eh sua posicao
      int cont=i+1;
      if(cont<len){
        while (cont<len && itemC[cont]<= '9'){
          cont++;
          dec++;
        }
      }
      Nlen = Nlen + (pow(10,dec)*(itemC[i]-0));
    }
    if(i>0){ //Se for a sequencia de uma letra e um numero, significa ter mais uma combinacao
      if(itemC[i-1]>'9' && itemC[i]<='9'){
        combinacoes++;
      }
    }
  }

  char itemN[Nlen]; //Vetor p descompactar
  int numero = 0; //Numero do vetor a ser analisado
  int somador = 0; //determina qtidade de itens no vetor novo
  int checaComb = 0; //checa qtas combinacoes ja foram

  //Descompacta no itemN
  while (somador<=Nlen){
    if (checaComb==0){
      for(int j=0; j<(vezes(itemC,0));j++){
        numero = 0;
        while(itemC[numero]>'9'){
          itemN[somador] = itemC[numero];
          somador++;
          numero++;
        }
      }
      checaComb++;
    }
    if (checaComb>0){
      numero = 0;
      int cont3 = 0;
      while(cont3<checaComb){
        if(itemC[numero]=='-')
          cont3++;
        numero++;
      }
      int A = numero + 1;
      for(int j=0; j<(vezes(itemC,checaComb));j++){
        numero = A;
        while(itemC[numero]>'9'){
          itemN[somador] = itemC[numero];
          somador++;
          numero++;
        }
      }
      checaComb++;
    }
  }
  for(int i=0;i<Nlen;i++){
    printf("%s",itemN[i]);
  }
}
