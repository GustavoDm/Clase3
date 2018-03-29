#include <stdio.h>
#include <stdlib.h>

int sumaEnteros(int numUno, int numDos, float *resultadoOperacion);
int restaEnteros(int numUno, int numDos, float *resultadoOperacion);
int multiplicacionEnteros(int numUno, int numDos, float *resultadoOperacion);
float DivisionEnteros(float numUno, float numDos, float *resultadoOperacion);


int main()
{

    char operacion;
    char continuar;

    do
    {


        int numUno, numDos;
        float resultado;
        continuar= 's';

        printf("Ingrese el primer valor: ");
        scanf("%d", &numUno);
        printf("Ingrese el segundo valor: ");
        scanf("%d", &numDos);
        printf("ingrese que operacion quiere realizar:\n Para sumar: s\n Para restar: r\n Para multiplicar: m\n Para dividir: d\n");
        fflush(stdin);
        scanf("%c", &operacion);

        switch(operacion)
        {
        case 's':

          if(sumaEnteros(numUno, numDos, &resultado)==0){
            printf("El resultado es: %.0f", resultado);
          }
          else{
            printf("Error");
          }
            printf("\n\nDesea realizar otra operacion? s/n");
            fflush(stdin);
            scanf("%c", &continuar);
            system("cls");
            break;
        case 'r':

        if(restaEnteros(numUno, numDos, &resultado)==0){
            printf("El resultado es: %.0f", resultado);
        }
        else{
            printf("Error");
        }
            printf("\n\nDesea realizar otra operacion? s/n");
            fflush(stdin);
            scanf("%c", &continuar);
            system("cls");

            break;
        case 'm':
            if(multiplicacionEnteros(numUno, numDos, &resultado)==0){
            printf("El resultado es: %.0f", resultado);
            }
            else{
                printf("Error");
            }
            printf("\n\nDesea realizar otra operacion? s/n");
            fflush(stdin);
            scanf("%c", &continuar);
            system("cls");
            break;
        case 'd':
            resultado= DivisionEnteros(numUno, numDos, &resultado);
            printf("El resultado es: %.2f", resultado);
            printf("\n\nDesea realizar otra operacion? s/n");
            fflush(stdin);
            scanf("%c", &continuar);
            system("cls");
            break;

        default:
            printf("Error\n\n Desea realizar otra operacion? s/n");
            scanf("%c", &continuar);
            system("cls");
            break;
        }


    }
    while(continuar=='s');
    return 0;
}

int sumaEnteros(int numUno, int numDos, float *resultadoOperacion)
{
    int retorno=-1;
    int resultado;
    resultado= numUno+numDos;
    if(resultado<32767|| resultado>-32767)
    {
        *resultadoOperacion=resultado;
        retorno=0;
    }

    return retorno;
}

int restaEnteros(int numUno, int numDos,float *resultadoOperacion)
{
    int retorno=-1;
    int resultado;
    resultado= numUno-numDos;
    if(resultado<32767|| resultado>-32767)
    {
        *resultadoOperacion=resultado;
        retorno=0;
    }
    return retorno;
}
int multiplicacionEnteros(int numUno, int numDos, float *resultadoOperacion)
{
    int retorno=-1;
    int resultado;
    resultado= numUno*numDos;
    if(resultado<32767|| resultado>-32767)
    {
        *resultadoOperacion=resultado;
        retorno=0;
    }
    return retorno;
}

float DivisionEnteros(float numUno, float numDos, float *resultadoOperacion)
{
    int retorno=-1;
    float resultado;
    resultado= numUno/numDos;
    if(numDos!=0)
    {
        *resultadoOperacion=resultado;
        retorno=0;
    }
    return retorno;
}
