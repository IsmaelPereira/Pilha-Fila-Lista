#include <stdio.h>
#define MAX 10
#define VAZIO -1

int main(){
	int pilha[MAX];
	int op=0;
	int i=0,j=0,v=0;
	for(v=0;v<MAX;v++){
		pilha[v]=VAZIO;
	}
	while(op!=3){
		printf("Digite uma opcao:\n1-Inserir\n2-Retirar\n3-Sair\nDigite a opcao: ");
		scanf("%d",&op);
		if(op==1){
			if(pilha[9]!=VAZIO){
				printf("Pilha Cheia!!\n");
				break;
			}
			printf("Digite um numero: ");
			scanf("%d",&pilha[i]);
			i++;
			for(j=0;j<MAX;j++){
				if(pilha[j]!=-1){
					printf("[%d] %d\n",j,pilha[j]);
				}
				if(pilha[j]==-1){
					printf("[%d] VAZIO\n",j);
				}
			}
		}
		if(op==2){
			if(pilha[0]==VAZIO){
				printf("Pilha Vazia!!\n");
			}
			pilha[i]=VAZIO;
			i--;
			for(j=0;j<MAX;j++){
				if(pilha[j]!=-1){
					printf("[%d] %d\n",j,pilha[j]);
				}
				if(pilha[j]==-1){
					printf("[%d] VAZIO\n",j);
				}
			}
		}
	}
	return 0;
}
