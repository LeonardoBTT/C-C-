#include <iostream>
using namespace std;

int main()
{
  float A, B, MEDIA;
  cin >> A;
  cin >> B;
  A = A * (3.5/11);
  B = B * (7.5/11);
  MEDIA = A + B;
  cout.precision(5);
  std::cout << fixed;
  cout << "MEDIA = " << MEDIA << endl;
  return 0;
}
