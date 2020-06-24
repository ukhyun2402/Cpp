#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    float value = 36.5 ;
    cout << setprecision(20) << fixed << value << endl;

    double dValue = 76.4;

    cout << dValue << endl;
    
    long double lValue = 123.5678954321;

    cout << lValue << endl;
    return 0;
}
