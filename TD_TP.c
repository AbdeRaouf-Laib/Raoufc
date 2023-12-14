#include <stdio.h>

int main()
{
    float TD1, TP1;
    float TD2, TP2;
    float RTD1, RTP1;
    float TD, TP;
    float resultTD;
    float resultTP;
    float resultTotal;
    do
    {
        printf("Donner la note de test TD1 (entre 0 et 3.5): ");
        scanf("%f", &TD1);
    } while (TD1 < 0 || TD1 > 3.5);
    do
    {
        printf("Donner la note de test TP1 (entre 0 et 4): ");
        scanf("%f", &TP1);
    } while (TP1 < 0 || TP1 > 4);
    do
    {
        printf("Donner la note de test TD2 (entre 0 et 8): ");
        scanf(" %f", &TD2);
    } while (TD2 < 0 || TD2 > 8);
    do
    {
        printf("Donner la note de test TP2 (entre 0 et 10): ");
        scanf(" %f", &TP2);
    } while (TP2 < 0 || TP2 > 10);
    do
    {
        printf("Donner la note de TD (entre 0 et 5): ");
        scanf(" %f", &TD);
    } while (TD < 0 || TD > 5);
    do
    {
        printf("Donner la note de TP (entre 0 et 2): ");
        scanf(" %f", &TP);
    } while (TP < 0 || TP > 2);
    RTD1 = TD1 * 2;
    RTP1 = TP1 * 2;
    resultTD = RTD1 + TD2 + TD;
    resultTP = RTP1 + TP2 + TP;
    resultTotal = (resultTD + resultTP) / 2;
    if (resultTotal > 10)
    {
        printf("Mbrooook!!!\n\n");
        printf("la Resultat de TD est: %.2f\n", resultTD);
        printf("la Resultat de TP est: %.2f\n", resultTP);
        printf("la resultat Totale est: %.2f\n", resultTotal);
    }
    else
    {
        printf("we can do it f exam!!!\n");
        printf("la Resultat de TD est: %.2f\n", resultTD);
        printf("la Resultat de TP est: %.2f\n", resultTP);
        printf("la resultat Totale est: %.2f\n", resultTotal);
    }
}