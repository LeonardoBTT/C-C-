#include <iostream>
using namespace std;

int main(){
  double R, VOLUME;
  cin >> R;
  VOLUME = (4.0/3) * 3.14159 * R * R * R;
  cout.precision(3);
  std::cout << fixed;
  cout << "VOLUME = " << VOLUME << endl;
  return 0;
}