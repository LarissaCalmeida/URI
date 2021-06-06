#include <stdio.h>
 
int main() {
  double area;
  double n = 3.14159;
  double raio;

  scanf("%lf", &raio);

	area = n * (raio * raio);

	printf("A=%.4f\n", area);

  return 0;
}
