// Двочиная система счисления.cpp 
//


#include <iostream>
#include <cmath>
using namespace std;
void bin(int b) {
    int n = 0;
    int k, s = 0;
    while (b) {
        k = b % 2;
        b /= 2;
        n += k * pow(10, s);
        s++;
    }
    cout << n<<endl;

}

int main()
{
    int c, z = 0;

    cin >> c;
    bin(c);
}





// Перевод двочиной системы счисления без функции
//
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n = 0;
    int k, s = 0;
    while (b) {
        k = b % 2;
        b /= 2;
        n += k * pow(10, s);
        s++;
    }
    cout << n << endl;

 
}


