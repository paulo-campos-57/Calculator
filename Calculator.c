#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

void limpatela(){
	system("CLS");
}

float soma(float a, float b){
	float r;
	r=a+b;
	return r;
}

float subtrai(float a, float b){
	float r;
	r=a-b;
	return r;
}

float multiplica(float a, float b){
	float r;
	r=a*b;
	return r;
}

float divide(float a, float b){
	float r;
	r=a/b;
	return r;
}

int potencia(int a, int b){
	int c;
	c=pow(a,b);
	return c;
}

float raiz(float a){
	float c;
	c=sqrt(a);
	return c;
}

int fatorial(int a){
	int c;
	for(c=1;a>1;a--){
		c=c*a;
	}
	return c;
}

float logaritmonatural(float a){
	float c;
	c=log(a);
	return c;
}

float logaritmobasedez(float a){
	float c;
	c=log10(a);
	return c;
}

void menu(){
	int op;
	int x;
	float num1, num2;
	int y,z;
	printf("-----------Calculadora Acachapante-----------\n");
	printf("Selecione a op��o:\n");
	printf("1-Adi��o\n");
	printf("2-Subtra��o\n");
	printf("3-Multiplica��o\n");
	printf("4-Divis�o\n");
	printf("5-Potencia��o\n");
	printf("6-Raiz quadrada\n");
	printf("7-Fatorial\n");
	printf("8-Logaritmo natural\n");
	printf("9-Logaritmo base 10\n");
	scanf("%d",&op);
	limpatela();
	switch(op){
		//soma
		case 1:
			printf("Digite o primeiro valor: ");
			scanf("%f",&num1);
			fflush(stdin);
			printf("Digite o segundo valor: ");
			scanf("%f",&num2);
			fflush(stdin);
			printf("O resultado da soma entre %.2f e %.2f �: %.2f",num1,num2,soma(num1, num2));
			printf("\n\nDigite 1 para realizar uma nova opera��o: ");
			scanf("%d",&x);
			fflush(stdin);
			if(x==1){
				limpatela();
				menu();
			}else{
				limpatela();
				printf("Arrivedercci.\n\n");
				system("pause");
			}
			break;
		//subtra��o
		case 2:
			printf("Digite o primeiro valor: ");
			scanf("%f",&num1);
			fflush(stdin);
			printf("Digite o segundo valor: ");
			scanf("%f",&num2);
			fflush(stdin);
			printf("O resultado da subtra��o entre %.2f e %.2f �: %.2f",num1,num2,subtrai(num1, num2));
			printf("\n\nDigite 1 para realizar uma nova opera��o: ");
			scanf("%d",&x);
			fflush(stdin);
			if(x==1){
				limpatela();
				menu();
			}else{
				limpatela();
				printf("Arrivedercci.\n\n");
				system("pause");
			}
			break;
		//multiplica��o
		case 3:
			printf("Digite o primeiro valor: ");
			scanf("%f",&num1);
			fflush(stdin);
			printf("Digite o segundo valor: ");
			scanf("%f",&num2);
			fflush(stdin);
			printf("O resultado da multiplica��o entre %.2f e %.2f �: %.2f",num1,num2,multiplica(num1, num2));
			printf("\n\nDigite 1 para realizar uma nova opera��o: ");
			scanf("%d",&x);
			fflush(stdin);
			if(x==1){
				limpatela();
				menu();
			}else{
				limpatela();
				printf("Arrivedercci.\n\n");
				system("pause");
			}
			break;
		//divis�o
		case 4:
			printf("Digite o primeiro valor: ");
			scanf("%f",&num1);
			fflush(stdin);
			printf("Digite o segundo valor: ");
			scanf("%f",&num2);
			fflush(stdin);
			if(num2==0){
				printf("N�o � poss�vel realizar divis�o por 0.");
			}else{
				printf("O resultado da divis�o entre %.2f e %.2f �: %.2f",num1,num2,divide(num1, num2));
			}
			printf("\n\nDigite 1 para realizar uma nova opera��o: ");
			scanf("%d",&x);
			fflush(stdin);
			if(x==1){
				limpatela();
				menu();
			}else{
				limpatela();
				printf("Arrivedercci.\n\n");
				system("pause");
			}
			break;
		//potencia��o
		case 5:
			printf("Digite um valor inteiro para a base: ");
			scanf("%d",&y);
			fflush(stdin);
			printf("Digite um valor inteiro para o expoente: ");
			scanf("%d",&z);
			fflush(stdin);
			printf("O resultado de %d elevado a %d �: %d",y,z,potencia(y,z));
			printf("\n\nDigite 1 para realizar uma nova opera��o: ");
			scanf("%d",&x);
			fflush(stdin);
			if(x==1){
				limpatela();
				menu();
			}else{
				limpatela();
				printf("Arrivedercci.\n\n");
				system("pause");
			}
			break;
		//raiz quadrada
		case 6:
			printf("Digite um valor para descobrir sua raiz quadrada: ");
			scanf("%f",&num1);
			fflush(stdin);
			printf("A raiz quadrade de %.2f �: %.2f",num1,raiz(num1));
			printf("\n\nDigite 1 para realizar uma nova opera��o: ");
			scanf("%d",&x);
			fflush(stdin);
			if(x==1){
				limpatela();
				menu();
			}else{
				limpatela();
				printf("Arrivedercci.\n\n");
				system("pause");
			}
			break;
		//fatorial
		case 7:
			printf("Digite um valor inteiro para descobrir seu fatorial: ");
			scanf("%d",&y);
			fflush(stdin);
			printf("O fatorial de %d �: %d",y,fatorial(y));
			printf("\n\nDigite 1 para realizar uma nova opera��o: ");
			scanf("%d",&x);
			fflush(stdin);
			if(x==1){
				limpatela();
				menu();
			}else{
				limpatela();
				printf("Arrivedercci.\n\n");
				system("pause");
			}
			break;
		case 8:
			printf("Digite um valor para descobrir seu logaritmo natural: ");
			scanf("%f",&num1);
			fflush(stdin);
			printf("O logaritmo natural de %.2f �: %.6f",num1,logaritmonatural(num1));
			printf("\n\nDigite 1 para realizar uma nova opera��o: ");
			scanf("%d",&x);
			fflush(stdin);
			if(x==1){
				limpatela();
				menu();
			}else{
				limpatela();
				printf("Arrivedercci.\n\n");
				system("pause");
			}
			break;
		case 9:
			printf("Digite um valor para descobrir seu logaritmo na base 10: ");
			scanf("%f",&num1);
			fflush(stdin);
			printf("O logaritmo na base 10 de %.2f �: %.6f",num1,logaritmobasedez(num1));
			printf("\n\nDigite 1 para realizar uma nova opera��o: ");
			scanf("%d",&x);
			fflush(stdin);
			if(x==1){
				limpatela();
				menu();
			}else{
				limpatela();
				printf("Arrivedercci.\n\n");
				system("pause");
			}
			break;
		default:
			menu();
			break;	
	}
}

int main(){
	setlocale(LC_ALL, "");
	menu();
}
