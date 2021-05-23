#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h> //Nova biblioteca: strcpy(vairavel,"string");



int main()
{
	setlocale (LC_ALL,"Portuguese");
	int valor1,opcao,adicional,valorfinal=0,fimp,refri,refriescolha,refriescolha2;
	char nome [30],end[50], adicionals[40],brasa[40],refriloop[50],refriescolhaloop[50]; 
	
	printf("\n\t/////////////////////////////////////////////////////////\n\t");
	printf("############Seja Bem vindo ao Brasa Burguer.#############");
	printf("\n\t/////////////////////////////////////////////////////////\n\t");
	printf("\n\t\tDigite seu nome: ");
		gets(nome);
		
	do{
 	
		fflush(stdin);
	printf("\n\t\t\t--------->CARDAPIO BRASA BURGUER<-----------\n\t ");
	printf("\n\t\t\t------OPÇÃO-1-----\n\tBRASA CLASSIC :                              R$18,00\n\n\t-Pão Francês Amantegado\n\t-Hamburguer Blend Bovino(180g)\n\t-Queijo Prato\n\t-Queijo Mussarela\n\t-Bacon Crocante\n\t-Cebola Roxa\n\t-Tomate;\n\t-Alface Americana\n\t-Maionese da Casa\n\n\t");
	printf("\n\t\t\t------OPÇÃO-2-----\n\tBRASINHA :                                   R$18,00\n\n\t-Pão Brioche com Raspas de Queijo Selado na Manteiga\n\t-Hamburguer Blend Bovino(180g) ou Hamburguer de Peito de Frango com Bacon(180g)\n\t-Queijo Prato\n\t-Queijo Mussarela\n\t-Molho Barbecue\n\t-Creme Cheddar\n\n\t");
	printf("\n\t\t\t------OPÇÃO-3-----\n\tBRASA FRANGO  :                              R$18,00\n\n\t-Pão Francês Amantegado\n\t-Hamburguer Blend de Peito de Frango com Bacon(180g)\n\t-Queijo Prato\n\t-Queijo Mussarela\n\t-Creme Cheddar\n\t-Bacon Crocante\n\t-Cebola Roxa\n\t-Tomate\n\t-Alface Americana\n\t-Maionese da Casa\n\t-Molho Barbecue\n\n\t");
	printf("\n\t\t\t------OPÇÃO-4-----\n\tBRASA COSTELA :                              R$22,00\n\n\t-Pão Brioche com Raspas de Queijo Selado na Manteiga\n\t-Hamburguer de Costela Bovina(180g)\n\t-Queijo Prato\n\t-Queijo Mussarela\n\t-Bacon Crocante\n\t-Cebola Caramelizada\n\t-Tomate\n\t-Alface Americana\n\t-Maionese da Casa\n\t-Molho Barbecue\n\n\t");
	printf("\n\t\t\t------OPÇÃO-5-----\n\tBRASA PICANTE :                              R$22,00\n\n\t-Pão Australiano Selado na Manteiga\n\t-Hamburguer Blend Bovino(180g)\n\t-Queijo Prato\n\t-Double Mussarela\n\t-Creme Cheddar\n\t-Bacon Crocante\n\t-Cebola Roxa\n\t-Molho Picante\n\t-Tomate\n\t-Alface Americana\n\t-Maionese da Casa\n\n\n\n\t");
	printf("\n\t\t\t------OPÇÃO-6-----\n\tBRASA PERNIL  :                              R$22,00\n\n\t-Pão Australiano Selado na Manteiga\n\t-Hamburguer de Pernil(180g)\n\t-Queijo Prato\n\t-Queijo Mussarela\n\t-Geleia de Abacaxi com Pimenta\n\t-Bacon Crocante\n\t-Cebola Roxa\n\t-Repolho Roxo\n\t-Tomate\n\t-Molho Barbecue\n\t-Maionese da Casa Sabor Bacon\n\n\t");
    printf("\n\t\t\t------OPÇÃO-7-----\n\tBRASA Kids  :                                R$10,00\n\n\t-Pão Brioche com Raspas de Queijo Selado na Manteiga\n\t-Hamburguer Blend Bovino(100g) ou Hamburguer de Peito de Frango com Bacon(100g)\n\t-Queijo Prato\n\t-Queijo Mussarela\n\t-Ketchup\n\t-Maionese da Casa\n\n\t");
    printf("\n\t--------->SELECIONE A OPÇÃO DO SEU BRASA BURGUER-->  ");
	scanf("%d",&opcao);
	fflush(stdin); //tivemos problemas de memoria do teclado cheia 
	system("cls");
	
	switch (opcao){  //multipla escolha
			case 1:
			strcpy (brasa,"BrasaClassic RS18,00");
			break;
			
			case 2:
				strcpy (brasa,"Brasinha R$18,00");
			break;
			
			case 3:
				strcpy (brasa,"BrasaFrango R$18,00");
			break;
			
			case 4: 
				strcpy (brasa,"BrasaCostela R$22,00");
			break;
			
			case 5:
				strcpy (brasa,"BrasaPicante R$22,00");
			break;
			
			case 6:
				strcpy (brasa,"BrasaPernil R$22,00");
			break;
			
			case 7:
				strcpy (brasa,"BrasaKids R$10,00");
			break;
			
			default:
			printf("\t\t\t####OPÇÃO INVALIDA####");			
			}			
		fflush(stdin);
		
 		printf("\n\n\t\t\t---------> ESCOLHA UM ADICIONAL <-----------\n\t");
 		printf("\n\t\t\t0-Continuar com o pedido");
		printf("\n\t\t\t1-Ovo Caipira- R$ 2,00");
		printf("\n\t\t\t2-Creme Cheddar- R$2,00");
		printf("\n\t\t\t3-Cebola Caramelizada- R$2,00");
		printf("\n\t\t\t4-Geleia de Abacaxi com Pimenta- R$2,00");
		printf("\n\t\t\t5-Molho Picante- R$1,00");
		printf("\n\t\t\t6-Molho Barbecue- R$1,00");
		printf("\n\t\t\t7-Molho Ketchup- R$1,00");
		printf("\n\t\t\t8-Hamburguer- R$ 7,00");
		printf("\n\n\t\tEscolha seu adicional: ");
		
 		scanf("%d",&adicional); 		 
 	 		system("cls");
 	 	fflush(stdin);
		  switch (adicional){
			case 0:
			strcpy (adicionals,"Sem adicional ");
			break;
				
			case 1:
			strcpy (adicionals,"Ovo Caipira- R$ 2,00");
			break;
			
			case 2:
				strcpy (adicionals,"Creme Cheddar- R$2,00");
			break;
			
			case 3:
				strcpy (adicionals,"Cebola Caramelizada- R$2,00");
			break;
			
			case 4: 
				strcpy (adicionals,"Geleia de Abacaxi com Pimenta- R$2,00");
			break;
			
			case 5:
				strcpy (adicionals,"Geleia de Abacaxi com Pimenta- R$2,00");
			break;
			
			case 6:
				strcpy (adicionals,"Molho Barbecue- R$1,00");
			break;
			
			case 7:
				strcpy (adicionals,"Molho Ketchup- R$1,00");
			break;
			
					
				
			case 8:
				strcpy (adicionals,"Hamburguer- R$ 7,00");
			break;
			
			default:
			printf("\n\n");		
			}				
 	fflush(stdin);		     
    if (opcao <= 3 && adicional >0 &&adicional <=4 ){   //Estrutura de controle de seleção Encadeada
		valor1 = 20; //ok
//	printf("\n\n\tSeu pedido deu %d..",valor1);USADO PARA TESTAR A CONDIÇÃO 
	}
	else if   (opcao <=3 && adicional >=5 && adicional <=7 ){ //condicional composta
		valor1 = 19; //ok
	}
	else if (opcao <=3 && adicional ==8){
		valor1 = 25; //ok
    }
	else if (opcao >=4 && opcao <=6 && adicional >=5 && adicional <=7){
		valor1= 23; //ok
	//printf("\n\n\tSeu pedido deu %d..",valor1);  USADO PARA VERIFICAR AS CONDIÇÕES
}	else if (opcao >=4 && opcao <=6 && adicional>0 && adicional <=4){
	 	valor1 = 24; //ok
 	}
	else if ( opcao >=4 && opcao <=6 && adicional == 8){
		valor1= 29; //ok
	}
    else if (opcao ==7 && adicional >0 &&adicional <=4 ){
	    valor1= 12; //ok
    }
    else if (opcao ==7 && adicional >=5 && adicional <=7){
	    valor1= 11; 
    }
    else if (opcao ==7 && adicional ==8){
	    valor1= 17;
    }
    else if (opcao <= 3 && adicional ==0 ){
    	valor1=18;
	}
	else if (opcao >=4 && opcao <=6 && adicional ==0){
		valor1 = 22;
	}
	else if (opcao ==7 && adicional ==0 ){
		valor1 = 10;
	}
	
    else {
	    printf("\n\t=====Opção Invalida======\n\t");
	    return 0;
    } 
	  
fflush(stdin);
    printf("\n\n\t\t\t---------> BEBIDAS <-----------\n\t");
	printf("\n\t\t\t0-Continuar com o pedido; ");  
    printf("\n\t\t\t1-Refrigerante Lata R$ 4,00");
    printf("\n\t\t\t2-Refrigerante Coca-Cola 1,5LTS- R$ 8,00");
    printf("\n\t\t\t3-Suco-Lata R$ 4,00----> ");
   
    scanf("%d",&refri);
    system("cls");
  switch (refri){
    		case 0:
    		valorfinal += valor1;
			break;
				
    		case 1:
    			printf("1-Coca-cola\n2-Guarana\n3-Fanta\n");
    		scanf("%d",&refriescolha);
    		 if (refriescolha == 1){
			 	strcpy (refriescolhaloop," Coca-Cola lata R$4,00"); 
				valorfinal += valor1+4; 
				  		 
    		} else if (refriescolha ==2){
				strcpy (refriescolhaloop," Guaraná Antartica lata R$4,00");
				valorfinal += valor1+4;
         	}
    		 else if (refriescolha ==3){
			
    		 	strcpy (refriescolhaloop," Fanta lata R$4,00");
    		 	valorfinal += valor1+4;
    		 	
    		} else 
    		 printf("\n");
    	
    		//valorfinal += valor1+4;
    		//printf("\n\n\t\tO preço do seu pedido foi de R$%d,00 reais.\n\n",valorfinal);
						break;
			
			case 2:
				strcpy (refriescolhaloop,"Coca-cola 1,5 LTS R$8,00");
			valorfinal += valor1+8;
						break;
			
			case 3:
			printf("1-Suco de Uva\n2-Suco de Caju\n3-Suco de Maracujá\n\n");
    		scanf("%d",&refriescolha2);
    		 if (refriescolha2 == 1){
						 	
    			strcpy (refriescolhaloop,"Suco de Uva Lata R$4,00"); 
				valorfinal += valor1+4;
	     	}
    		 else if (refriescolha2 ==2){
			 
    		 	strcpy (refriescolhaloop,"Suco de Caju Lata R$4,00");
    		 	valorfinal += valor1+4;
            }
    		 else if (refriescolha2 ==3){
			 
    		 	strcpy (refriescolhaloop,"Suco de Maracujá Lata R$4,00");
    		 	valorfinal += valor1+4;
    	    }
    		 else
			 printf("\n"); 
    		 		
			//printf("\n\n\t\tO preço do seu pedido foi de R$%d,00 reais.\n\n",valorfinal);
			break;
								
			default :
	  		printf("\n\t\t\t=====Opção Invalida======\n\n");
		  }        
    
	printf("Digite 1 para realizar outro pedido ou 2 para finalizar:  ");
	scanf("%d",&fimp);
	
	system("cls");
	   
	if (fimp == 2)
	fflush(stdin);
	printf("Digite seu endereço: ");
	gets (end);
	system("cls");		
		printf("\n\t\t\tRESUMO DO PEDIDO:\n\n ");
		printf("\n\t\tNOME:%s\n",nome);
		printf("\n\t\tBURGUER:%s\n",brasa);
		printf("\n\t\tADICIONAL:%s\n",adicionals);
		printf("\n\t\tREFRIGERANTE/SUCO:%s\n",refriescolhaloop);
		printf("\n\t\tVALOR TOTAL:R$%d,00\n ",valorfinal);		
		printf("\n\t\tENDEREÇO PARA ENTREGA:%s\n",end);
		printf("\t\tSeu pedido será entregue por volta de 45 minutos.\n\n ");
		
		}while (fimp == 1);
		printf("\t\t\t\t\t#OBRIGADO PELA PREFERÊNCIA#\n\t\t\t");

return 0;
}



	

