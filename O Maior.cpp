#include <iostream>
using namespace std;

int main()
{
  int A, B, C, MAIORAB;
  scanf("%d %d %d", &A, &B, &C);
  MAIORAB = (A + B + abs(A-B))/2;
  if (MAIORAB<C)
  {
    cout << C << " eh o maior" << endl;
  } else
  {
    cout << MAIORAB << " eh o maior" << endl;
  }
  return 0;
}
