#include <iostream>
using namespace std;

int main()
{
  float A, B, C;
  scanf("%f %f %f", &A, &B, &C);
  cout.precision(3);
  std::cout << fixed;
  cout << "TRIANGULO: " << (A * C)/2 << endl;
  cout << "CIRCULO: " << 3.14159 * C * C << endl;
  cout << "TRAPEZIO: " << (A + B)*C/2 << endl;
  cout << "QUADRADO: " << B * B << endl;
  cout << "RETANGULO: " << A * B << endl;
  return 0;
}
