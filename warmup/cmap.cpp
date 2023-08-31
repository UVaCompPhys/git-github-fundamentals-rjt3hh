#include <stdio.h>
#include <math.h>

int main() {
  FILE *fp = fopen("cmap.gp","w");
  double nMax;
  nMax = 17;
  for (double n = 0; n < (nMax+1); n++){
    fprintf(fp, "set linetype %.0f lw 2 lc palette frac %.2f\n", n+1, (nMax-n)/nMax);
  }
  fclose(fp);
}
