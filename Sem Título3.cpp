#include <stdio.h> //biblioteca de comunica��o com o us�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca responsavel por cuidar das string

int registro() // A fun��o resposavel por cadastrar os usu�rios no sistemas
{
	// In�cio cria��o de vari�veis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	// fina� da cria��o de vari�veis/string
	
	printf("digite o CPF a ser cadastrado!\n"); // coletando informa��o do usu�rio
	scanf("%s", cpf); // %s refere-se a string
	
	strcpy(arquivo, cpf); // reponsavel por copiar os valores das string
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //abrir o arquivo e o "w" significa escrever 
	fprintf(file,cpf); //salva o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); // abrir o arquivo o "a" significa atualizar
	fprintf(file, ",");  //salva o valor da variavel
	fclose(file); // fecha o arquivo
	
	printf("Digite o nome a ser cadastrado: "); // coletando informa��o do usu�rio
	scanf("%s", nome); // %s refere-se a string
	
	file = fopen(arquivo, "a"); // abrir o arquivo o "a" significa atualizar
	fprintf(file,nome); //salva o valor da variavel
	fclose(file);// fecha o arquivo
	
	file = fopen(arquivo, "a");// abrir o arquivo o "a" significa atualizar
	fprintf(file, ","); //salva o valor da variavel
	fclose(file);// fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo,"a");// abrir o arquivo o "a" significa atualizar
	fprintf(file,sobrenome); //salva o valor da variavel
	fclose(file);// fecha o arquivo
	
	file = fopen(arquivo, "a");// abrir o arquivo o "a" significa atualizar
	fprintf(file, ","); //salva o valor da variavel
	fclose(file);// fecha o arquivo
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo,"a");// abrir o arquivo o "a" significa atualizar
	fprintf(file,cargo); //salva o valor da variavel
	fclose(file);// fecha o arquivo
	
	system("pause"); // pausar o tela
	
}

int consulta()
{
	setlocale(LC_ALL, "portuguese"); //Definindo a Linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o cpf a ser consultado: "); // coletando informa��o do usu�rio
	scanf("%s",cpf);
	
	FILE *file; //cria o arquivo
	file = fopen(cpf,"r"); // abrir o arquivo o "r" significa ler o arquivo
	
	if(file == NULL)
	{
		printf("N�o foi poss�vel abrir o arquivo, n�o localizado!.");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause"); // pausar o tela
	
	}
	
int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do us�rio a ser deletado: "); // coletando informa��o do usu�rio
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE *file; //cria o arquivo
	file = fopen(cpf,"r"); // abrir o arquivo o "r" significa ler o arquivo
	
	if(file == NULL)
{
	printf("Usu�rio deletado com sucesso!. \n");
	system("pause"); // pausar o tela
}
		
		
			
}


int main()
{
	int opcao=0; // Definindo vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
{


	
	system("cls"); // reponsavel por limpar a tela

	
	setlocale(LC_ALL, "portuguese"); //Definindo a Linguagem
	
	printf("### Cart�rio da EBAC ###\n\n"); //Inicio do menu
	printf("Escolha a op��o desejada do menu\n\n");
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n"); 
	printf("op��o: "); //Fim do menu
	
	
	scanf("%d", &opcao); //Armazenando a escolha do usu�rio
	
	system("cls"); // reponsavel por limpar a tela
	
	switch(opcao) // inicio da sele��o do menu
	{
		case 1:
		registro(); // chamada de fun��es
		break;
		
		case 2:
		consulta();
		break;
		
		case 3:
		deletar();
		break;
		
		default:
		printf("Essa op��o n�o est� dispon�vel\n");
		system("pause");
		break;
		
	} // fim da sele��o
		

}
	
	
	
}
