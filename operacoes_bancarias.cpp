#include<stdio.h>
#include<locale.h>



int main(){
	setlocale(LC_ALL,"Portuguese");
	int senha=1234;
	int saldo=190000;
	int op;
	int deposito;
	int saque;
	do{
	printf("digite um numero:  ");
	scanf("%d",&senha);
}
   while(senha!=1234);
   
   printf ("escolha uma opcao:\n");
   printf("1-ver saldo\n");
   printf("2-depositar dinheiro\n");
   printf("3-sacar dinheiro\n");
   printf("4-sair\n");
   printf("digite um valor:    ");
   scanf("%d",&op);
   
   switch(op){
   	case 1:
   		
   		printf("seu saldo �: R$190.000");
   		break;
    case 2: 
	 printf("Digite o valor do dep�sito: ");
	 scanf("%d", &deposito);
	 saldo=saldo+deposito;
	 printf("Dep�sito concluido com sucesso.");
	 break;
	case 3:
	  printf ("Digite o valor do saque: ");
	  scanf("%d", &saque); 
	  senha=senha-saque;
	   printf("Saque conclu�do com sucesso.");
	  break;
	case 4:
		printf("obrigado!");
    break;
    default:
    	printf("Op��o inv�lida");
	
	return(0);	
	 		
   }
	
}
