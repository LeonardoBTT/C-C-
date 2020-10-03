#include <iostream>
using namespace std;

int main()
{
  int A, B;
  double C, SALARY;
  cin >> A;
  cin >> B;
  cin >> C;
  SALARY = B * C;
  cout.precision(2);
  std::cout << fixed;
  cout << "NUMBER = " << A << endl;
  cout << "SALARY = U$ " << SALARY << endl;
  return 0;
}
