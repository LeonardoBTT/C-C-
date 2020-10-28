#include <iostream>
using namespace std;

int main()
{
  int X;
  float Y, CONSUMO;
  cin >> X;
  cin >> Y;
  CONSUMO = X / Y;
  cout.precision(3);
  cout << fixed;
  cout << CONSUMO << " km/l" << endl;
  return 0;
}