	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	
		int main(){
			
			//utilizando a função strcmp para fazer a comparação entre as duas strings//
			
			char player[100];
			char player2[100];
			
			setlocale(LC_ALL,"");
			
			
			printf("===== Você está jogando pedra papel e tesoura =====\n\n");
			
			printf("Jogador 1 sua vez de jogar:");
			scanf("%s",&player);
			
			printf("\nJogador 2 sua vez de jogar:");
			scanf("%s",&player2);
			
			printf("\nO Jogador 1 jogou %s e o Jogador 2 jogou %s\n\n",player, player2);
			
	
			if(strcmp(player,"papel") ==0){
				
				if(strcmp(player2,"papel") ==0){
					printf("\nEmpate !\n");				
				
			    }else if(strcmp(player2,"tesoura")==0){
			    	printf("\nJogador 2 ganhou, tesoura corta papel!\n");			    
				
		    	}else if(strcmp(player2,"pedra")==0){
		    		printf("\nJogador 2 perdeu, papel embrulha pedra!\n");
		    		
		      	}else{
				    printf("\nO Jogador 2 digitou uma informação inválida!\n");
			    }
			    
				
			}else if(strcmp(player,"tesoura")==0){
				
				if(strcmp(player2,"papel") ==0){
					printf("\nJogador 2 perdeu, tesoura corta papel!\n");						
				
			    }else if(strcmp(player2,"tesoura")==0){
			    	printf("\nEmpate !\n");	
				
		    	}else if(strcmp(player2,"pedra")==0){
		    		printf("\nJogador 2 ganhou, pedra esmaga tesoura!\n");	
				
		        }else{
				printf("\nO Jogador 2 digitou uma informação inválida!\n");		
			    }
			    
				
				
			}else if(strcmp(player,"pedra")==0){
					
					if(strcmp(player2,"papel") ==0){
						printf("\nJogador 2 ganhou, papel embrulha pedra!\n");	
					
				    }else if(strcmp(player2,"tesoura")==0){
				    	printf("\nJogador 2 perdeu, pedra esmaga tesoura\n");	
					
			    	}else if(strcmp(player2,"pedra")==0){
			    		printf("\nEmpate !\n");
					
			      	}else{
					printf("\nO Jogador 2 digitou uma informação inválida!\n");		
				    }
				
			    }else{
			    	printf("\nOs dois jogadores digitaram uma informação inválida!\n");	
		        }
		    
			return 0;
		}
