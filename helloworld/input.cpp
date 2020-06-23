#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    cout << "Enter your name : " << flush;

    string input;

    cin >> input;

    cout << "Your name is " + input << endl;

    cout << "Enter the number : " << endl;

    int value;
    cin >> value;

    cout << "You entered : " << value << endl;

    return 0;
}
