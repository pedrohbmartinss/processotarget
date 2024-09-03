#include <stdio.h>
#include <stdlib.h>

double sp, rj, mg, es, outros, total;

int main(){
    sp = 67836.43;
    rj = 36678.66;
    mg = 29229.88;
    es = 27165.48;
    outros = 19849.53;
    total = sp + rj + mg+ es + outros;

    double porcsp = (sp*100)/total;
    double porcrj = (rj*100)/total;
    double porcmg= (mg*100)/total;
    double porces= (es*100)/total;
    double porcoutros= (outros*100)/total;

    printf("O valor total e de %.2f:\n", total);
    printf("A porcentagem de SP e: %.2f%% \n", porcsp);
    printf("A porcentagem de RJ e: %.2f%% \n", porcrj);
    printf("A porcentagem de MG e: %.2f%% \n", porcmg);
    printf("A porcentagem de ES e: %.2f%% \n", porces);
    printf("A porcentagem de outros e: %.2f%% \n", porcoutros);

    system("pause");
}