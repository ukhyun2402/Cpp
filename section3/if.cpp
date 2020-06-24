#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string password = "12344";

    cout << "Enter your password > " << flush;
    string input = "";
    cin >> input;

    cout << "You Entered : '" << input << "'" << endl;

    if(input == password){
        cout << "WELCOME!" << endl;
    }

    if(input != password){
        cout << "Try Again Guys." << endl;
    }

    return 0;
}
