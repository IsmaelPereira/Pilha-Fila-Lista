#include <stdio.h>  //Chamanddo bibloteca do C
#define MAX 10 //Definindo MAX = 10 (Letra maiúscula por convenção)
#define VAZIO -1 //Definindo VAZIO = -1 (Letra maiúscula por convenção)

int main(){ //começo Função Main
	int fila[10]; //Cria variável fila com tamanho MAX(10), ou seja, a variavél é um vetor
	int i=0,fim=0,inicio=0,v=0,j=0;//Cria variavel i,fim,inicio,v,j e define o valor de todas como 0
	int op=0;//Cria variavel Op e define o valor como 0
	for(v=0;v<MAX;v++){ // estrutura de repetição for -- define v=0;condição do for (v ser menor que MAX); v recebe mais um
		fila[v]=VAZIO;//pilha na posição v recebe vazio. Serve para zerar a pilha e evitar que os valores recebam lixo de memória
	} //fechamento chave for
	while(op!=3){ //estrutura de repetição while -- while(condição) -- a condição no caso é a variavél op ser diferente de 3, se a variavel tiver como valor 3, o programa não "entra" no while e vai para o restante do código
		printf("Digite uma opcao:\n1-Inserir\n2-Retirar\n3-Sair\nDigite a opcao: "); //Interage com o usuário printando "Digite uma opcao:\n1-Inserir\n2-Retirar\n3-Sair\nDigite a opcao:" na tela. o "\n" dá uma quebra de linha, passando a sentença para a linha debaixo
		scanf("%d",&op);//lê o valor inteiro e o aloca no endereço de memória da váriavel op (o valor 0 definido anteriormente será substituido pelo valor digitado")
		if(op==1){//expressão condicional -- if(condição) -- a condição nese caso é a variavél op ser igual a 1, se a variável tiver como valor diferente de 1 o programa não "entra" no if e vai para o restante do código
			if(fila[9]!=VAZIO){////expressão condicional -- if(condição) -- a condição no caso é a fila na posição 9 (pois a variavel fila é um vetor,logo ela guarda mais de um valor) ter o valor diferente do VAZIO. No código isso vai exercer a função de informar ao usuário quando a fila está cheia, se ela estiver cheia, não será possivel inserir o valor, e o usuário terá que retirar antes de inserir mais valores
				printf("Fila Cheia!!\n");//interage com o usuário printando na tela "Fila Cheia!!" e quebrando uma linha logo após a segunda exclamação.
			}//fechamento chave i
			printf("Digite um numero: ");//interage com o usuário printando na tela "Digite um numero:" esse espaço depois dos ":" é para o número ficar a frente da frase, é opcional, usei dessa forma por questão estética
			scanf("%d",&fila[i]);//lê o valor inteiro e aloca no endereço de memória da variavel fila na posição i (o valor -1 definido anteriormente será substituido pelo valor digitado"), a posição foi informada pois a variavel fila é um vetor
			i++;//acrescenta 1 ao valor de i sempre que passar nessa linha (esse comando é o mesmo que o "i=i+1")
			for(j=0;j<MAX;j++){//estrutura de repetição for -- define j=0;condição do for(j ser menor que MAX); j recebe mais um*
				if(fila[j]!=-1){// expressão condicional -- if(condição) -- a condição no caso é a pilha na posição J ser diverente de -1
					printf("[%d] %d\n",j,fila[j]);//interage com o usuario printando dois valores inteiros, depois do fechamento de aspas é atribuido a qual variavel que esses valores vão ser representados na tela, no caso, j e pilha na posição j,respectivamente
				}//fechamento chave if
				if(fila[j]==-1){// expressão condicional -- if(condição) -- a condição no caso é a pilha na posição J ser igual a -1
					printf("[%d] VAZIO\n",j);//interage com o usuario printando um valor inteiro e a palavra VAZIO, no caso o "%d" está sendo referido ao valor de j, pois o mesmo se apresenta após o fechamento das aspas*
				}//fechamento da chave do if
			}	//Esse algoritimo acima(o que está entre o sinal de *) serve para printar a posição do vetor e o valor que essa posição têm guardada (posição vetor, valor da posição), mas se o valor for igual a -1 ele printa a posição do vetor e informa que o vetor está vazio (posição vetor, palavra VAZIO) //Fechamento da chave do for
		}//fechamento if
		if(op==2){//expressão condicional -- if(condição) -- a condição nesse caso é a variavel op ser igual a 2, se a variável tiver como valor diferente de 2 o programa não "entra" no if e vai para o restante do código
			if(fila[0]==VAZIO){ //expressão condicional -- if(condição) -- a condição nesse caso é a variavel fila na posição 0 (pois a variável fila é um vetor,logo ela guarda mais de um valor) ter valor igual ao vazio. no Código isso vai ter função de informar ao usúario que a pilha está vazia e não será possivel retirar nenhum valor pois o valor não existe ainda no vetor, o usuário terá que inserir um valor para conseguir fazer a retirada
				printf("Fila Vazia!!\n");//interage com o usuário escrevendo na tela "Fila vazia!!" e quebrando uma linha logo após a exclamação
			}//fechamento if
			fila[inicio]=VAZIO;//o vetor fila na posição inicio recebe vazio
			inicio++;//acrescenta 1 ao valor de inicio sempre que passar nessa linha (esse comando é o mesmo que o "inicio=inicio+1")
			for(j=0;j<MAX;j++){ //estrutura de repetição for -- define j=0;condição do for(j ser menor que MAX); j recebe mais um*
				if(pilha[j]!=-1){ // expressão condicional -- if(condição) -- a condição no caso é a pilha na posição J ser diverente de -1
					printf("[%d] %d\n",j,pilha[j]); //interage com o usuario printando dois valores inteiros, depois do fechamento de aspas é atribuido a qual variavel que esses valores vão ser representados na tela, no caso, j e pilha na posição j,respectivamente
				} //fechamento da chave do if
				if(pilha[j]==-1){ // expressão condicional -- if(condição) -- a condição no caso é a pilha na posição J ser igual a -1
					printf("[%d] VAZIO\n",j); //interage com o usuario printando um valor inteiro e a palavra VAZIO, no caso o "%d" está sendo referido ao valor de j, pois o mesmo se apresenta após o fechamento das aspas*
				}//fechamento da chave do if
			}//fechamento da chave do for  
		}//fechamento da chave do if
	}//fechamento da chave do while
	return 0; //retorna o valor 0 para a função main, finalizando o código
} //fechamento da chave do main
