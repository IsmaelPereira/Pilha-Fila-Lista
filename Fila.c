#include <stdio.h>
#define MAX 10
#define VAZIO -1

int main(){
	int fila[10];
	int i,fim=0,inicio=0,v,j;
	int op=0;
	for(v=0;v<MAX;v++){
		fila[v]=VAZIO;
	}
	while(op!=3){
		printf("Digite uma opcao:\n1-Inserir\n2-Retirar\n3-Sair\nDigite a opcao: ");
		scanf("%d",&op);
		if(op==1){
			if(fila[9]!=VAZIO){
				printf("Fila Cheia!!\n");
				break;
			}
			printf("Digite um numero: ");
			scanf("%d",&fila[i]);
			i++;
			for(j=0;j<MAX;j++){
				if(fila[j]!=-1){
					printf("[%d] %d\n",j,fila[j]);
				}
				if(fila[j]==-1){
					printf("[%d] VAZIO\n",j);
				}
			}	
		}
		if(op==2){
			if(fila[0]==VAZIO){
				printf("Fila Vazia!!\n");
			}
			fila[inicio]=VAZIO;
			inicio++;
			for(j=0;j<MAX;j++){
				if(fila[j]!=-1){
					printf("[%d] %d\n",j,fila[j]);
				}
				if(fila[j]==-1){
					printf("[%d] VAZIO\n",j);
				}
			}	
		}	
	}
	return 0;
}
