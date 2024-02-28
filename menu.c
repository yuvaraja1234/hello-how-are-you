#include <stdio.h>

#include <stdlib.h>


void main(){

    int a, i=1;

    printf("Menu\n");

    for (i;i<=4;i++)

    {

        printf("Option %d\n", i);

    }

    printf("Choose any one option: ");

    scanf("%d",&a);

    
void fun(){

        if (a==1){

            printf("Hello\n");

        }

        else if (a==2){

            printf("Hi\n");

        }

        else if (a==3){

           printf("Bye\n");

        }
        else if (a==4){
            exit(0);
        }
        else{
            printf("Please select option displayed above: \n");
            scanf("%d", &a);
            fun(a);
        }
    }
    fun(a);
}