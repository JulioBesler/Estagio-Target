#include <stdio.h>
#include <math.h>

int main() {

    double SP = 67836.43, RJ = 36678.66, MG = 29229.88, ES = 27165.48, outros = 19849.53;
    double total, pct;

    total = SP+RJ+MG+ES+outros;
    printf("\nFaturamento Total: R$%f\n", total);

    pct=(SP*100)/total;
    printf("\n\nPercentual de representacao do estado de SP: %f %%", pct);
    pct=(RJ*100)/total;
    printf("\n\nPercentual de representacao do estado de RJ: %f %%", pct);
    pct=(MG*100)/total;
    printf("\n\nPercentual de representacao do estado de MG: %f %%", pct);
    pct=(ES*100)/total;
    printf("\n\nPercentual de representacao do estado de ES: %f %%", pct);
    pct=(outros*100)/total;
    printf("\n\nPercentual de representacao dos outros estados: %f %%", pct);

}