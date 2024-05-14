#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados{
     char nome;
     int cpf;
     char email;
   };

int main()
{  /*
   Para esta atribuição será necessario criar uma aplicação em C que
   abra/crie um arquivo de texto (TXT),escreva no arquivo nome, cpf e email de acordo com o
   que o usuario digitar e por fim feche o arquivo.
   */
   int dados_carregados;
   struct dados pessoal;

                //escrever nome,cpf e email
                printf("Informe o nome: ");
                scanf("%s", &pessoal.nome);
                printf("Informe o CPF: ");
                scanf("%d", &pessoal.cpf);
                printf("Informe o email: ");
                scanf("%s", &pessoal.email);

                // Abrir o arquivo para escrita
                FILE *arquivo = fopen("informacoes.txt", "wb");
                // Verificar se o arquivo foi aberto com sucesso
                if (arquivo == NULL) {
                    printf("Erro ao abrir o arquivo.\n");
                    return 1;
                }
                // Escrever os dados no arquivo
                fwrite(&pessoal, sizeof(struct dados), 1, arquivo);
                // Fechar o arquivo
                fclose(arquivo);
                dados_carregados = 1;
                printf("Dados pessoais armazenados\n");

}

