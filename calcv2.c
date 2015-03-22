//CALCULADORA_BASICA_VERSION_2.0
//@author: Vinicius Junior

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Variaveis
int tecla; 
char ch = 's';
float n1, n2, r;
int oper;

void main()
{
                  
   do
   {
        setlocale(LC_ALL, "PORTUGUESE");
        puts("*********************************************************************"); 
        puts("*                                                                   *");
        puts("*                   Essa eh uma calculadora basica.                 *");
        puts("*                                                                   *");
        puts("*                   1 - soma                                        *");
        puts("*                   2 - subtracao                                   *");
        puts("*                   3 - multiplicacao                               *");
        puts("*                   4 - divisao                                     *");
        puts("*                                                                   *");
        puts("*                   Tecle ENTER para comecar!                       *");
        puts("*********************************************************************"); 

        tecla = getch();

if (tecla != 13)
{
        printf("\ndigite o primeiro número: ");
        scanf("%f", & n1);
        printf("Digite o operador: ");
        scanf("%d", & oper);
        printf("digite o segundo número: ");
        scanf("%f", & n2);
     
       if (oper == 1)
      { r = n1 + n2;
printf("O reusltado é = " "%0.2f\n", r);
        
        }
else
       if (oper == 2)
     { r = n1 - n2;
printf("O reusltado é = " "%0.2f\n", r);
         
       }      

else        
       if (oper == 3)
     { r = n1 * n2;
printf("O reusltado é = " "%0.2f\n", r);
         
       }

else       
       if (oper == 4) 
     { r = n1 / n2;
printf("O reusltado é = " "%0.2f\n", r);
        
       }

}
        printf("Se deseja calcular novamente digite (s/n): \n");
        scanf("%c", &ch);
     } while (getch() == 's');


getch();

} 
