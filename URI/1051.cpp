#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    float sal, aux, imposto = 0;
    scanf("%f", &sal);
    
    if( sal > 4500){
        imposto += (sal - 4500) * 0.28;
        sal = 4500;}
    if( sal > 3000 && sal <= 4500){
        imposto += (sal - 3000) * 0.18;
        sal = 3000;}
    if( sal > 2000 && sal <= 3000)
        imposto += (sal - 2000) * 0.08;
    
    if(imposto){
                printf("R$ %.2f\n", imposto);
    } else {
           printf("Isento\n");
    }
}
