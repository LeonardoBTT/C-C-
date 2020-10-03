#include <iostream>
using namespace std;

int main(){
  string A;
  double B, C, TOTAL;
  cin >> A;
  cin >> B;
  cin >> C;
  TOTAL = B + (0.15 * C);
  cout.precision(2);
  std::cout << fixed;
  cout << "TOTAL = R$ " << TOTAL << endl;
  return 0;
}