#include <stdio.h>

int main() {
  float celcius, farenheit;

  printf("Enter temperature in Celcius: ");
  scanf("%f", &celcius);

  farenheit = (celcius * 9/5) + 32;

  printf("%.2f Celcius is equal to %.2f Farenheit\n", celcius, farenheit);

  return 0;
}
