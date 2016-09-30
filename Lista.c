#include <stdio.h>
#define MAX 10
#define VAZIO -1

int main(){
	int lista[10];
	int i=0,j=0,v=0,op=0,indice=0;
	for(v=0;v<MAX;v++){
		lista[v]=VAZIO;
	}
	while(op!=3){
		printf("Digite uma opcao:\n1-Inserir\n2-Retirar\n3-Sair\nDigite a opcao: ");
		scanf("%d",&op);
		if(op==1){
			for(i=0;i<MAX;i++){
				if(lista[i]==VAZIO){
					printf("Digite um numero: ");
					scanf("%d",&lista[i]);
					break;
			}
				}
				for(j=0;j<MAX;j++){
					if(lista[j]==VAZIO){
						printf("[%d] VAZIO\n",j);
					}
					else{
						printf("[%d] %d\n",j,lista[j]);	
					}
				}
		}
		if(op==2){
			printf("Digite a posicao desejada: ");
			scanf("%d",&indice);
			lista[indice]=VAZIO;
			for(j=0;j<MAX;j++){
				if(lista[j]==VAZIO){
					printf("[%d] VAZIO\n",j);
				}
				else{
					printf("[%d] %d\n",j,lista[j]);
				}
			}
		}
	}
		return 0;
	}
