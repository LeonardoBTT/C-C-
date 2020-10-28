#include <iostream>
using namespace std;

int main()
{
  double A, B, C, D;
  scanf("%f %f %f", &A, &B, &C);
  D=B*B-4*A*C;
  if(D<0 || A==0){
   cout << "Impossivel calcular" << edl;
  } else {
    double X = ((-B+(D)**(1/2))/(2*A));
    double XX=((-B-(D)**(1/2))/(2*A));
    cout << "R0 = " << X;
    cout << "R1 = " << XX;
  }

  return 0;
}
