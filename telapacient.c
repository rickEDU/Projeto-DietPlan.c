#include "valida.h"

//
//// Menus do Paciente
//

char paciente(void){
  char a;
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                              #############                              ///\n");
  printf("///                    = = = = = Menu Paciente = = = = =                    ///\n");
  printf("///                              #############                              ///\n");
  printf("///                                                                         ///\n");
  printf("///    *  Das opções abaixo digite o número do menu que deseja acessar  *   ///\n");
  printf("///                                                                         ///\n");
  printf("///                           1- Consultar Dieta.                           ///\n");
  printf("///                           2- Atualizar Dados.                           ///\n");
  printf("///                           3- Excluir Conta.                             ///\n");
  printf("///                           4. Voltar ao menu anterior                    ///\n");
	printf("///                       Escolha a opção desejada: ");
	scanf("%c", &a);
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
  return a;
}

//
//// Submenus Paciente
//

void pacienteConsulta(void){
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                             &&&&&&&&&&&&&&&                             ///\n");
  printf("///                   = = = = = Consultar Dieta = = = = =                   ///\n");
  printf("///                             &&&&&&&&&&&&&&&                             ///\n");
  printf("///                                                                         ///\n");
  printf("///            *  Sua Dieta para essa semana é a escrita abaixo  *          ///\n");
  printf("///   #  Caso queira voltar ao menu anterior não digite nada e dê enter  #  ///\n");
  printf("///                                                                         ///\n");
  printf("///                    Café da manhã:                                       ///\n");
  printf("///                    Lanche 1:                                            ///\n");
  printf("///                    Almoço:                                              ///\n");
  printf("///                    Lanche 2:                                            ///\n");
  printf("///                    Jantar:                                              ///\n");
  printf("///                    Lanche 3:                                            ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  getchar();
}

void pacienteAtualiza(void){
  char nome[51];
  char peso[8];
  char altura[5];
  char email[4];
  char tel[16];
  char atividade[9];
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                        &&&&&&&&&&&&&&&&&&&&&&&&                         ///\n");
  printf("///              = = = = = Atualizar Dados Paciente = = = = =               ///\n");
  printf("///                        &&&&&&&&&&&&&&&&&&&&&&&&                         ///\n");
  printf("///                                                                         ///\n");
  printf("///        *  Para atualizar seus dados preencha os campo a seguir  *       ///\n");
  printf("///   #  Caso queira voltar ao menu anterior não digite nada e dê enter  #  ///\n");
  printf("///                                                                         ///\n");
  printf("///       Nome: ");
  scanf("%[^\n]", nome);
  getchar();
  while(!validanome(nome)){
    printf("Nome inválido !!\n");
    printf("Informe o Nome novamente :");
    scanf("%[^\n]", nome);
    getchar();
  }
  printf("///       Peso Atual: ");
  scanf("%[^\n]", peso);
  getchar();
  while(!validapeso(peso)){
    printf("Peso inválido !!\n");
    printf("Informe o Peso novamente :");
    scanf("%[^\n]", peso);
    getchar();
  }
  printf("///       Altura: ");
  getchar();
  while(!validaaltura(altura)){
    printf("Altura inválida !!\n");
    printf("Informe a altura novamente :");
    scanf("%[^\n]", altura);
    getchar();
  }
  printf("///       E-mail: ");
  getchar();
  while(!validaemail(email)){
    printf("E-mail inválido !!\n");
    printf("Informe o E-mail novamente :");
    scanf("%[^\n]", email);
    getchar();
  }
  printf("///       Telefone: ");
  getchar();
  while(!validatel(tel)){
    printf("Telefone inválido !!\n");
    printf("Informe o Telefone novamente :");
    scanf("%[^\n]", tel);
    getchar();
  }
  printf("///       Nível de atividade física (Baixo, Moderado ou Alto): ");
  getchar();
  while(!validaatividade(atividade)){
    printf("Atividade informada erroneamente !!\n");
    printf("Informe o Nível de atividade física novamente :");
    scanf("%[^\n]", atividade);
    getchar();
  }
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  getchar();
}


void pacienteExclui(void){
  char paciente[51];
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                         &&&&&&&&&&&&&&&&&&&&&&&&&                       ///\n");
  printf("///               = = = = = Excluir Conta do Paciente = = = = =             ///\n");
  printf("///                         &&&&&&&&&&&&&&&&&&&&&&&&&                       ///\n");
  printf("///                                                                         ///\n");
  printf("///             *  Digite o Seu nome para cancelar sua conta  *             ///\n");
  printf("///   #  Caso queira voltar ao menu anterior não digite nada e dê enter  #  ///\n");
  printf("///                                                                         ///\n");
  printf("///   Nome do Paciente: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ0]", paciente);
  getchar();
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  getchar();
}
