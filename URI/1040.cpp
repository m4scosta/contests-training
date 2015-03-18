#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1, n2, n3, n4, media;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3,&n4);
    n1 *= 2.0; n2*=3.0;n3*=4.0;
    media = (n1+n2+n3+n4)/10.0;  
    printf("Media: %.1lf\n", media);  
    if(media >= 7.0)    
             printf("Aluno aprovado.\n");
             
    else if (media < 5.0)
         printf("Aluno reprovado.\n");
         
    else{
        printf("Aluno em exame.\n");
        
        double nex;
        scanf("%lf", &nex);
        
        printf("Nota do exame: %.1lf\n", nex);
        media = (media + nex) /2;
        if(media >= 5.0)
                 printf("Aluno aprovado.\n");
        else
                 printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n", media);
    }
}
