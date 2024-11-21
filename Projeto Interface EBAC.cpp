#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> // biblioteca de alocação de espaço em memória
#include <locale.h> // biblioteca de alocação de texto por região
#include <string.h> //biblioteca que cuida de string

int registro() // Responsavel por cadastrar os usuários no sistema
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	
	// inicio da Criação de variáveis/ string
	char arquivo[40]; //40 é o numero de caracteres
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	// Final da Criação de variáveis/ string
	
	printf("digite o seu cpf: "); //coletando informação do usuário
	scanf("%s", cpf);// refere-se a string (Armazenando as strings)
	
	strcpy(arquivo, cpf); //responsavel por copiar os valores da string
	
	FILE *file; // Acesse o file e crie um file /cria o arquivo
	
	file = fopen(arquivo,"w");// w de escrever/cria o arquivo 
	fprintf(file,cpf); // salva o valor da variavel no arquivo
	fclose(file); // fecho o arquivo
	
	file = fopen(arquivo,"a"); // a de atualizar o arquivo
	fprintf(file,",");
	fclose(file);
	///////////////////////////////////////////////////////////
	printf("digite o seu nome: ");
	scanf("%s", nome);
	
	file = fopen(arquivo,"a"); //atualiza o arquivo com o nome
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo,"a"); 
	fprintf(file,",");
	fclose(file);
	//////////////////////////////////////////////////////////
	printf("digite o seu sobrenome: ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo,"a"); // atualiza o arquivo com o sobrenome
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo,"a"); 
	fprintf(file,",");
	fclose(file);
	///////////////////////////////////////////////////////////
	printf("digite o seu cargo: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo,"a"); // atualiza o arquivo com o cargo
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
}
	

int consulta()
{
setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem

 char cpf[40];
 char conteudo[200];
 
 
 printf("Digite o cpf para consulta: ");
 scanf("%s",cpf);
 
 FILE *file; //consulta aquele arquivo la
 file = fopen(cpf,"r");// r de read, pra ele ler apenas
 
  if(file == NULL)
  {
  	printf("Não foi possível achar o arquivo.\n");
  }
  
  while(fgets(conteudo, 200, file) !=NULL)
  {
  	printf("\nEssas são as informações do usuário: ");
  	printf("%s", conteudo);
  	printf("\n\n");
  }
  
  system("pause");
}

int deletar()
{
 char cpf[40];
 printf("Digite o cpf do usuário a ser deletado: ");
 scanf("%s", cpf);
 
 remove(cpf);
 
 FILE *file;
 file = fopen(cpf, "r"); // r de ler (reading
 
 if(file == NULL) //Null= se ele não achar o arquivo
 {
 printf("Usuário não encontrado!\n");
 system("pause");
 }
}
int main()
{
	int opcao=0; //Definindo a variavel
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	 system("cls");
	 
	 setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	 printf("### Cartório da EBAC ###\n\n"); //Inicio do menu
	 printf("Escolha a opção desejada no menu:\n\n");
 	 printf("\t1 Registrar nomes\n");
	 printf("\t2 Consultar nomes\n");
	 printf("\t3 Deletar nomes\n\n");
	 printf("\t4 Sair do sistema\n\n");
	 printf("Opção: "); //Fim do menu
	
	 scanf("%d", &opcao); // Armazenado a escolha do usuário
	
	 system("cls"); //Responsável por limpar a tela
	 
	 switch(opcao) //Inicio da seleção
	 {
	case 1:
	   registro(); //chamada de funções
	   break;
	   
	case 2:
		consulta();
		break;
		
	case 3:
	    deletar();
		break;
		 
    case 4:
    printf("Obrigado por usar o sistema");
    return 0;
    break;
		
	default:
	   printf("Opção indisponivel\n");
   	   system("pause");
   	   break;
		
	 }//Fim da seleção
		
}
			
	}

