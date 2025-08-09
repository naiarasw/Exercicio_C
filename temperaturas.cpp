#include<stdio.h>
#include<locale.h>
void mostrartemperaturas (float temperaturas[7]);
float media (float temperaturas []);
void clima (float temperaturas[]);


int main(){
	setlocale(LC_ALL, "Portuguese");
	float temperaturas[7];
	int i, op, rm;
	
	for( i=0; i<7; i++){
		printf("Informe a temperatura de hoje:  ");
		scanf("%f", &temperaturas[i]);
	}
	printf("Escolha uma opção a seguir:\n");
   	printf("1-Mostrar todas as temperaturas\n");
    printf("2-Mostrar a média semanal\n");
   	printf("3-Mostrar o dia mais quante e o mais frio\n");
    printf("4-Sair\n");
    printf("Digite uma opção:   ");
    scanf("%d", &op);
    
    switch(op){
    	case 1: 
    	mostrartemperaturas (temperaturas);
    	break;
    	case 2:
    	 rm=media(temperaturas);
    	 printf("a media é:%.2d", rm);
    	 break;
    	 case 3:
    	 	clima(temperaturas);
    	 	break;
    	case 4:
    		printf("Obrigado!");
    		break;
    	default:
    		printf("opção inválida");	
	}
	return(0);
}
void mostrartemperaturas (float temperaturas[]){
	for(int i=0; i<7; i++){
		printf ("%.1f\t", temperaturas[i]);
}
}
float media (float temperaturas []){
	int soma=0;
	int media;
	for(int i=0; i<7; i++){
	  soma=soma+temperaturas[i];  	
}
media=soma/7;
    return (media);
   
}

void clima (float temperaturas[]){
   int maior=temperaturas[0];
   int menor=temperaturas[1];
	for(int i=0; i<7; i++){
		if (temperaturas[i]>maior){
			maior=temperaturas[i];
		}
	    if(temperaturas[i]<menor){
	    	menor=temperaturas[i];
		}
}
    printf("maior=%d  menor=%d", maior, menor);
}









