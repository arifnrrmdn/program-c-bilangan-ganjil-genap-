#include <stdio.h>

int main()
{
  int a;
  // input bilangan 
  printf("Masukkan sebuah bilangan : ");
  scanf("%d", &a);

  if (a < 0 ) {
    printf("Masukan Bilangan Positif");
  }

  else {
    if (a % 2 == 0) {
        printf("Bilangan %d adalah genap. \n", a);
    }
    else {
        printf("Bilangan %d adalah ganjil. \n", a);
    }
  }
  return 0;
}
