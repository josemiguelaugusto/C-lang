#include <stdio.h>

int main()
{
    unsigned short user_id;
    unsigned short user_password;
    printf("Introduza o  seu numero de utilizador:");
    scanf("%hu", &user_id);
    printf("Introduza a sua senha de utilizador: ");
    scanf("%hu", &user_password);
    printf("User-ID: %hu\nUser-Password: %hu\n", user_id, user_password);

    if(user_id == 1005 && user_password == 5432){
        printf("Acesso Concedido ao Cofre Principal");

    }
    else{
       printf("Erro de Autenticação. Sistema Bloqueado");
    }
    return 0;
}
