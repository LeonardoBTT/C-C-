#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double raio, area;
    cin >> raio;
    area = raio * raio * 3.14159;
    std::cout.precision(4);
    std::cout << std::fixed;
    cout << "A=" << area << endl;
}