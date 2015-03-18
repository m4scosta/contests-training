#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char p1[13], p2[11], p3[11];
    char res[13];
    scanf("%s %s %s", &p1, &p2, &p3);
    
    if(!strcmp(p1, "vertebrado")){
                  if (!strcmp(p2, "ave")){
                            if(!strcmp(p3, "carnivoro")){
                                               strcpy(res, "aguia");
                            } else {
                                               strcpy(res, "pomba");
                            }
                  } else {
                            if(!strcmp(p3, "onivoro")){
                                               strcpy(res, "homem");
                            } else {
                                               strcpy(res, "vaca");
                            }
                  }
    } else {
                  if (!strcmp(p2, "inseto")){
                            if(!strcmp(p3, "hematofago")){
                                               strcpy(res, "pulga");
                            } else {
                                               strcpy(res, "lagarta");
                            }
                  } else {
                            if(!strcmp(p3, "hematofago")){
                                               strcpy(res, "sanguessuga");
                            } else {
                                               strcpy(res, "minhoca");
                            }
                  }
    }
    
    printf("%s\n", res);
}
