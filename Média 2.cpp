#include <iostream>
using namespace std;

int main()
{
  double A, B, C, MEDIA;
  cin >> A;
  cin >> B;
  cin >> C;
  A = A * 0.2;
  B = B * 0.3;
  C = C * 0.5;
  MEDIA = A + B + C;
  cout.precision(1);
  std::cout << fixed;
  cout << "MEDIA = " << MEDIA << endl;
  return 0;
}
