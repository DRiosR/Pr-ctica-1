#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float calculadora(float a1,float a2,int numC); //Es la funcion de la calculadora

int main ()
{
int act;
printf ("seleccione la actividad 1 a la 3\n");
scanf("%d",&act);
    switch (act) //Este switch selecciona la actividad del 1 al 3
    {
        case 1:  //En el caso 1 esta la calculadora 
        float a1,a2;
        int numC;
        printf("Ponga los dos datos\n");
        scanf("%f",&a1);
        scanf("%f",&a2);
        printf ("elije una operacion\n");
        printf("suma=1 \n");
        printf("resta=2 \n");
        printf("multiplicacion=3 \n");
        printf("division=4 \n");
        scanf("%d",&numC);
        calculadora(a1,a2,numC);
        break;
        case 2: //En el caso 2 esta el adivinar el numero
         int ale,num;
            ale=rand() %101;  //genera un numero aleatorio del 0 al 100
            printf("Ingrese el numeor que cree que sea\n");
                 while (num!=ale)
                {
                scanf("%d",&num);
                 if(num<ale)  //El if te ira diciendo si el numero es ams bajo o alto que el aleaotrio
                {
                printf("OTRO NUMERO MAS ALTO\n");
                }
                else
                {
                printf("UN NUMERO MAS BAJITO\n");
                }
                }
                printf("CORRECTO EL NUMERO ERA %d",ale);
                return 0;
        break;
        case 3:  //En el caso 3 esta el calcular las areas
        int figura;
        float area;
        float base,altura,radio;
        printf("Cual area quiere obtener\n");
        printf("Triangulo=1\n");
        printf("circulo=2\n");
        printf("rectangulo=3\n");
        printf("cubo=4\n");
        printf("cilindro=5\n");
        scanf("%d",&figura);
        switch (figura) // Este swicth selecciona la figura con la formula del area
        {
        case 1:
            printf("Ingrese la base y altura\n");
            scanf("%f",&base);
            scanf("%f",&altura);
            area=(base*altura)/2;
            printf("El area es=%f",area);
            break;\
        case 2:
           printf("Ingrese el radio\n");
            scanf("%f",&radio);
            area=M_PI*pow(radio,2);  //El numero PI es (M_PI) 
            printf("El area es=%f",area);
            break;
        case 3:
         printf("Ingrese la base y altura\n");
            scanf("%f",&base);
            scanf("%f",&altura);
            area=base*altura;
            printf("El area es=%f",area);
            break;
        case 4:
        printf("Ingrese la base\n");
            scanf("%f",&base);
            area=6*(pow(base,2));
            printf("El area es=%f",area);
            break;
        case 5:
         printf("Ingrese el rradio y la altura\n");
            scanf("%f",&radio);
            scanf("%f",&altura);
            area=2*M_PI*radio*(radio+altura);
            printf("El area es=%f",area);
            break;
            default:
            printf("NO SELECCIONASTE UNA OPCION VALIDA");

        }
        break;
        default: 
            printf("No selecciono ninguna actividad");
        }
    }

float calculadora(float a1, float a2,int numC)
{
    float res;
    switch (numC)
    {
        case 1:
            res=a1+a2;
            printf ("La suma es=%f",res);
        break;
        case 2:
            res=a1-a2;
            printf ("La resta es=%f",res);
        break;
        case 3:
            res=a1*a2;
            printf ("La multiplicacion es=%f",res);
        break;
        case 4:
            res=a1/a2;
            printf("La division es=%f",res);
        break;
        default:
            printf("No elegiste ninguna opcion valida");
    }   
  return 0;
}