#include<stdio.h>

/** Caixa Eletrônico**/

int saque(float saldo, float n1){
	return saldo-n1;
}
int deposito(float saldo, float n1){
	return saldo+n1;
}
int investimento( float n1){
	return n1*1.25;
	
}
int poupanca( float saldo,float n1){
	return saldo-n1;
}

	


int menu(){
	
	printf("Seja bem-vindo ao F.A BANK:\n\n");
	printf("Escolha  Operacão que deseja realizar:\n");
	printf("1- Saque \n");
	printf("2- deposito \n");
	printf("3- investimentos \n");
	printf("4- poupanca\n");
	printf("5- Terminar sessao \n");
	
	int operacao;
	scanf("%d",&operacao);
	return operacao;
}
int main(){
	int operacao;
	float n1,resultado,saldo=500;
	
	operacao = menu();
	
	if(operacao==1){
		printf("qual valor deseja sacar: \n");
		scanf("%f",&n1);
		resultado = saque(saldo,n1);
		
		printf("%.2f",resultado);
	}
	else if(operacao==2){
		printf("qual valor deseja depositar: \n");
		scanf("%f",&n1);
		resultado = deposito(saldo,n1);
		
		printf("%.2f",resultado);
	}
	else if(operacao==3){
		printf("qual valor deseja investir: \n");
		scanf("%f",&n1);
		resultado = investimento(n1);
		
		printf("o retorno do seu investimento e %.2f\n",resultado);
	}
	else if(operacao==4){
		printf("qual valor deseja poupar: \n");
		scanf("%f",&n1);
		resultado = poupanca(saldo,n1);
		
		printf("foi poupado %.2f\n e seu saldo e %.2f\n",n1,resultado);
		
	}
	else if(operacao==5){
		printf("sua sessao esta encerrada\n agradecemos a sua visita\n \n");
		
	}
	while(operacao!=5){
		
		printf("\ndeseja executar outra tarefa:");
		
		
	
	
	printf("\n\nSeja bem-vindo ao F.A BANK:");
	printf("\nEscolha  Operacão que deseja realizar:");
	printf("\n1- Saque ");
	printf("\n2- deposito ");
	printf("\n3- investimentos ");
	printf("\n4- poupanca");
	printf("\n5- Terminar sessao ");
	
	int operacao;
	scanf("%d",&operacao);
	return operacao;
	
	

		
	}


	
}
