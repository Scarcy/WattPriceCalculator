
#include <stdio.h>
double calculatePrice(int watt, int timer, double pris) {
  double total;
  total = ((float)watt / 1000) * (timer * pris);
  return total;
}
int main() {
  int watt;
  int timer;
  double pris;
  printf("Hvor mye watt bruker enheten? ");
  scanf("%d", &watt);
  printf("Hva er KWh prisen(NOK)? ");
  scanf("%lf", &pris);
  printf("Hvor mange timer i døgnet brukes enheten? ");
  scanf("%d", &timer);

  double total = calculatePrice(watt, timer, pris);
  printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
  printf("Daglig kostnad for enheten er: %.2lf kr\n", total);
  printf("30 dagers kostnad for enheten er: %.2lf kr \n", total * 30);
  printf("365 dagers kostnad for enheten er: %.2lf kr \n", total * 365);

  return 0;
}
