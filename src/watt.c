
#include <stdio.h>
double calculatePrice(int watt, int timer, double pris) {
  double total;
  total = (watt / 1000.0) * (timer * pris);
  return total;
}
int main() {
  int watt;
  int timer;
  double pris;
  printf("Hvor mye watt bruker enheten? ");
  if (scanf("%d", &watt) != 1) {
    printf("Du må skrive inn et tall\n");
    return 1;
  };
  printf("Hva er KWh prisen(NOK)? ");
  if (scanf("%lf", &pris) != 1) {
    printf("Du må skrive inn et tall\n");
    return 1;
  };
  printf("Hvor mange timer i døgnet brukes enheten? ");
  if (scanf("%d", &timer) != 1) {
    printf("Du må skrive inn et tall\n");
    return 1;
  }

  double total = calculatePrice(watt, timer, pris);
  printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
  printf("Daglig kostnad for enheten er: %.2lf kr\n", total);
  printf("30 dagers kostnad for enheten er: %.2lf kr \n", total * 30);
  printf("365 dagers kostnad for enheten er: %.2lf kr \n", total * 365);

  return 0;
}
