#include <stdio.h>
#include <math.h>

// function declarations
double volume(double rad, double n);

int main() {
  double V;
  FILE *fp = fopen("volume.dat","w");
  for (double rad = 1; rad < 2.02; rad = rad + 0.02) {
    for (double n = 0; n < 51; n++) {

      V = volume(rad,n);
      V = log(V)/log(10);
      fprintf(fp, "%1f %1f %1f\n", rad, n, V);
    }
    fprintf(fp, "\n");
  }
  fclose(fp);
}

double volume(double rad, double n) {
  double V;
  V = (pow(M_PI,n/2)/tgamma((n/2)+1))*pow(rad,n);
  return V;
}
