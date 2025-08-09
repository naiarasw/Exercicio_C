#include<stdio.h>
#include<locale.h>



int main(){
	setlocale(LC_ALL,"Portuguese");
	int senha=1234;
	int saldo=190000;
	int op, deposito, saque;
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
   		printf("seu saldo é: R$190.000");
   		break;
    case 2: 
	 	printf("Digite o valor do depósito: ");
	 	scanf("%d", &deposito);
	 	saldo=saldo+deposito;
	 	printf("Depósito concluido com sucesso.");
	 	break;
	case 3:
	  	printf ("Digite o valor do saque: ");
	  	scanf("%d", &saque); 
	  	senha=senha-saque;
	   	printf("Saque concluído com sucesso.");
	  	break;
	case 4:
		printf("obrigado!");
     	break;
    default:
    	printf("Opção inválida");
	

	 		
   }
	return(0);
	
}

