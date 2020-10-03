#include <iostream>
using namespace std;

int main()
{
  int CODIGO, NUMERO;
  float VALOR, TOTAL;
  scanf("%d %d %f", &CODIGO, &NUMERO, &VALOR);
  TOTAL = NUMERO * VALOR;
  scanf("%d %d %f", &CODIGO, &NUMERO, &VALOR);
  TOTAL = TOTAL + NUMERO * VALOR;
  cout.precision(2);
  std::cout << fixed;
  cout << "VALOR A PAGAR: R$ " << TOTAL << endl;
  return 0;
}