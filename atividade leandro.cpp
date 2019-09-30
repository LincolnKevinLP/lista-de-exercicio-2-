#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
	
				setlocale(LC_ALL,"Portuguese");
				int menu;
				int num;
				int rest;
				int nota1;
				int nota2;
				int nota3;
				int media;
				char nome [15];
				int matricula;
				int b;
			    float a, c;
	
				printf("Digite de 1 a 9 para navegar e 0 para sair!\n");
				scanf("%d", &menu);
	
	while(menu<0);
	
		switch(menu){
				
			case 1:
				
				printf("DESCUBRA SE O NUMERO E PAR OU IMPAR\n\n");
				
				printf("digite um número !!! \n");
				scanf("%d", &num);
				rest = num % 2;
				
				if (rest == 0){
				
				printf("esse número %d é par\n", num);
			
				}
				else{
					
				printf("esse número %d é ímpar\n", num);
				
				}
				
			break;
			
			case 2:
				
				printf("CALCULADORA DE POTÊNCIA \n");
				
				printf("digite seu primeiro número\n");
				scanf("%f", &a);
				
				printf("digite seu segundo número\n");
				scanf("%d", &b);
				
				c = pow(a, b);
				printf("a potência do número é: %e\n", c);
				
			break;
			
			case 3:
			
				printf("DESCUBRA A RAIZ DO NÚMERO.\n");
				
				printf("Digite seu primeiro número\n");
				scanf("%f", &a);
				
				printf("Digite seu segundo número\n");
				scanf("%d", &b);
				
				c = sqrt(a);
				c = c / b;
				
				printf("%f",c);
				printf("%e\n",c);
				
			break;
			
			case 4:
				
				printf("CÁLCULO DO ANO BISSEXTO. \n");
	
				printf("digite um ano\n");
				scanf("%d", &num);
	
				if(num % 4 == 0 && num % 100 != 0 || num % 400 == 0)
				{
					
				printf("o ano é bissexto");
				
				}else{
					
				printf("o ano não é bissexto");
				
				}
				
			break;
			
			case 5:
				
				printf("CÁLCULO DA MÉDIA PONDERADA.\n");
				
				printf("digite sua primeira nota\n");
				scanf("%d", &nota1);
	
				printf("digite sua segunda nota\n");
				scanf("%d", &nota2);
	
				printf("digite sua terceira nota\n");
				scanf("%d", &nota3);
	
				media = (nota1*1 + nota2*1 + nota3*2)/3;
				printf("sua nota foi : %d \n", media);
	
				if(media <=60 ){
		
				printf("você foi aprovado");
		 
				}else {
		
				printf("você não foi aprovado/n");
		
				}
				
			break;
			
			case 6:
				
				printf("CÁLCULO DA MÉDIA \n");
				
				printf("digite sua primeira nota\n");
				scanf("%d", &nota1);
				
				printf("digite sua segunda nota\n");
				scanf("%d", &nota2);
				
				media = (nota1 + nota2)/2;
				
				printf("sua média foi %d", media);
		
			break;
			
			case 7:
				
				int fatorial;
			int resposta = 1;
			
			printf("fatore um numero\n");
			printf("digite um numero para fatoriar\n");
			scanf("%d", &fatorial);
			
			for( ; fatorial >=1 ; --fatorial ){
				
				resposta *= fatorial;
				
			}
			
			printf("o numero fatorial é %i\n", resposta);
			
			return 0;
	
				
			break;
			
			case 8:
				
			printf("PRIMO OU NAO PRIMO!!!\n\n");
			
			int x,y, result=0;
			
			printf("digite um numero\n");
			scanf("%d", x);
			
			for(y=2; y<=x/2; y++){
				
			if(x % y ==0){
				
				result++;
				break;
			}	
			}
			if(result = 0 ){
			
				printf("o numero e primo!!!");
			
			}else{
				printf("o numero nao e primo!!!");
			}
				
			break;
			
			case 9:
				
				int num, f1=0; f2=1, f3;
			printf("digite um numero");
			scanf("%d", &num);
			
			if(num < 0){
				
				printf("numero invalido");
			}
			else{
				printf("0 - 1");
			}while(f2 < num){
				f3 = f2 + f1;
				printf(" -%d", f3);
				f1=f2;
				f2=f3;
			}
			
			
			return 0;
		
			break;
			
			default: 
			
				printf("opção inexistente.");
			
		}
	
}
