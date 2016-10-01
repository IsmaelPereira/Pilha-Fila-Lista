#include <stdio.h>  //Chamanddo bibloteca do C
#define MAX 10 //Definindo MAX = 10 (Letra maiúscula por convenção)
#define VAZIO -1 //Definindo VAZIO = -1 (Letra maiúscula por convenção)

int main(){ //começo função main
	int lista[10];//cria variavel lista com tamanho 10, ou seja, é um vetor
	int i=0,j=0,v=0,op=0,indice=0;//cria variaveis i,j,v,op e indice e define elas como 0
	for(v=0;v<MAX;v++){// estrutura de repetição for -- define v=0;condição do for (v ser menor que MAX)-- v recebe mais um
		lista[v]=VAZIO; //vetor lista na posição v recebe vazio
	}//fechamento chave for
	while(op!=3){//estrutura de repetição while -- while(condição) -- a condição no caso é a variavél op ser diferente de 3, se a variavel tiver como valor 3, o programa não "entra" no while e vai para o restante do código
		printf("Digite uma opcao:\n1-Inserir\n2-Retirar\n3-Sair\nDigite a opcao: ");//Interage com o usuário printando "Digite uma opcao:\n1-Inserir\n2-Retirar\n3-Sair\nDigite a opcao:" na tela. o "\n" dá uma quebra de linha, passando a sentença para a linha debaixo
		scanf("%d",&op);//lê o valor inteiro e o aloca no endereço de memória da váriavel op (o valor 0 definido anteriormente será substituido pelo valor digitado")
		if(op==1){//expressão condicional -- if(condição) -- a condição nese caso é a variavél op ser igual a 1, se a variável tiver como valor diferente de 1 o programa não "entra" no if e vai para o restante do código
			for(i=0;i<MAX;i++){//estrutura de repetição for -- i recebe 0, condição do for (i ser menor que MAX) -- i recebe mais um
				if(lista[i]==VAZIO){ //expressão condicional, se lista na posição i estiver vazio, ele entra nessa condição, caso contrário esse condicional é ignorado
					printf("Digite um numero: ");//interage com o usuário printando na tela "Digite um numero:" esse espaço depois dos ":" é para o número ficar a frente da frase, é opcional, usei dessa forma por questão estética
					scanf("%d",&lista[i]);// le um numero inteiro e o aloca no endereço de memória da variavel lista na posição i, ou seja, onde o i estiver, lá será a posição da lista
					break;//para o bloco, para continuar com o resto do código, evitando do usuário ter que digitar as 10 posiçoes de uma vez só
			}//fechamento if
				}//fechamento for
				for(j=0;j<MAX;j++){//estrutura de repetição for -- define j=0;condição do for(j ser menor que MAX); j recebe mais um
					if(lista[j]==VAZIO){// expressão condicional -- if(condição) -- a condição no caso é a pilha na posição J ser diverente de -1
						printf("[%d] VAZIO\n",j);//interage com o usuario printando um valor inteiro e a palavra VAZIO, no caso o "%d" está sendo referido ao valor de j, pois o mesmo se apresenta após o fechamento das aspas
					}//fechamento if
					else{//expressão condicional , significa "se não", se o if acima não for verdadeiro ele executa esse bloco abaixo
						printf("[%d] %d\n",j,lista[j]);	//interage com o usuario printando dois valores inteiros, depois do fechamento de aspas é atribuido a qual variavel que esses valores vão ser representados na tela, no caso, j e pilha na posição j,respectivamente
					}//fechamento else
				}//fechamento for
		}//fechamento if
		if(op==2){//expressão condicional -- if(condição) -- a condição nesse caso é a variavel op ser igual a 2, se a variável tiver como valor diferente de 2 o programa não "entra" no if e vai para o restante do código
			printf("Digite a posicao desejada: ");//interaje com o usuário escrevendo na tela "Digite a piscao desejada" , posicao está sem cedilha pois o programa não aceita acentos. Esse espaço depois dos ":" é para o número ficar a frente da frase, é opcional, usei dessa forma por questão estética
			scanf("%d",&indice);// le um numero inteiro e o aloca no endereço de memória da variavel indice
			lista[indice]=VAZIO;//variavel lista na posição indice recebe VAZIO, o usuário escolheu uma posição que ele desejava tirar o valor e essa posição ficou vazia
			for(j=0;j<MAX;j++){//estrutura de repetição for -- define j=0;condição do for(j ser menor que MAX); j recebe mais um
				if(lista[j]==VAZIO){// expressão condicional -- if(condição) -- a condição no caso é a pilha na posição J ser diverente de -1
					printf("[%d] VAZIO\n",j);//interage com o usuario printando um valor inteiro e a palavra VAZIO, no caso o "%d" está sendo referido ao valor de j, pois o mesmo se apresenta após o fechamento das aspas
				}//fechamento if
				else{//expressão condicional , significa "se não", se o if acima não for verdadeiro ele executa esse bloco abaixo
					printf("[%d] %d\n",j,lista[j]);//interage com o usuario printando dois valores inteiros, depois do fechamento de aspas é atribuido a qual variavel que esses valores vão ser representados na tela, no caso, j e pilha na posição j,respectivamente
				}//fechamento else
			}//fechamento for
		}//fechamento if
	}//fechamento while
		return 0;//retorna o valor 0 para a função main, finalizando o código
	}//fechamento da chave do main
