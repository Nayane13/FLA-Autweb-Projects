#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int opcao, codigo, quant = 0, comida, escolha;
	float conta = 0;
	
	system("color 0b");
	do{
	
		printf("########################################################################################################################\n");
		printf("#########################                            PIZZA PLANET                             ##########################\n");
		printf("########################################################################################################################\n\n");
	
		printf("O que deseja, caro cliente?\n");
		printf("1 - Comprar\n");
		printf("2 - Ver os produtos\n");
		printf("3 - Ir embora\n");
		scanf("%d",&opcao);
	
		system("cls");
	
		switch (opcao){
			case 1:
				do{
					printf("Digite o c�digo do seu pedido\n");
					scanf("%d",&codigo);
					
					if( (codigo!=10) && (codigo!=20) && (codigo!=30) && (codigo!=40) && (codigo!=50) && (codigo!=60) && (codigo!=70) ){
						printf("Pedido inv�lido!\n");
						printf("\n\n\tAperte [Enter] e tente novamente");
						getchar();
						getchar();
						system("cls");
						continue;
					} 
					
					printf("Digite a quantidade\n");
					scanf("%d",&quant);
					
					switch (codigo){
						case 10:
							comida = 35*quant;
							break;
						
						case 20:
							comida = 35*quant;
							break;
						case 30:
							comida = 35*quant;
							break;
						case 40:
							comida = 50*quant;
							break;
						case 50:
							comida = 7*quant;
							break;
						case 60:
							comida = 7*quant;
							break;
						case 70:
							comida = 5*quant;
							break;
					}
					
		
					printf("Vai querer sua conta ou vai continuar comprando?\n");
					printf("Digite [1] para receber sua conta\n");
					printf("Digite [2] para continuar comprando\n");
					scanf("%d",&escolha);
					system("cls");
					if( (escolha!=1) && (escolha!=2)){
						printf("N�o existe essa op��o\n");
						printf ("Aperte [Enter] para continuar o programa\n");
						getchar () ;
						getchar () ;
						system ("cls");
						continue;
					}
					conta=comida+conta;
				}
				while(escolha!=1);
				printf("Sua conta deu R$%0.2f\n",conta);
				printf("\n\n\tDigite [Enter] para fechar o programa");
				getchar();
				getchar();
				system("cls");
				printf("Tchau, volte sempre!");
				escolha = 3;
				break;
	
			case 2:
				printf ("\t\t\t --CARD�PIO--\n\n");
				printf ("--Pizza de Calabresa ................. R$ 35,00 ... c�digo 10--\n");
				printf ("--Pizza de Mussarela ................. R$ 35,00 ... c�digo 20--\n");
				printf ("--pizza de frango com catupiry ....... R$ 35,00 ... c�digo 30--\n");
				printf ("--pizza do viajante .................. R$ 50,00 ... c�digo 40--\n");
				printf ("--refrigerante de guaran� ........... R$ 07,00 ... c�digo 50--\n");
				printf ("--coca cola .......................... R$ 07,00 ... c�digo 60--\n");
				printf ("--sucos .............................. R$ 05,00 ... c�digo 70--\n");
	
				printf("\n\n\tAperte [Enter] para voltar ao menu principal\n");
				getchar();
				getchar();
				
				system("cls");
				break;
	
			case 3:
				printf ("volte sempre! \n");
	
				break;
			default:
				printf("Op��o inv�lida!\n");
				printf("\n\n\taperte [Enter] e tente novamente");
				getchar();
				getchar();
				system("cls");
		}
	}
	while( (opcao!=3) || (escolha!=1) );
	return 0;
}

