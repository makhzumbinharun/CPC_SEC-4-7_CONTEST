#include<stdio.h>
#include<math.h>

int main(){
  int A,B;
  scanf("%d %d", &A, &B);
  double C=(double) A/B;
  printf("floor %d / %d = %.0f\n", A,B, floor(C));
  printf("ceil %d / %d = %.0f\n", A,B, ceil(C));
  float rou = round(C);
  printf("round %d / %d = %.0f\n", A,B, rou);
  
  return 0;
} 
