#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "1. \tAdd new Recoord" << endl;
    cout << "2. \tDelete record" << endl;
    cout << "3. \tView record" << endl;
    cout << "4. \tSearch record" << endl;
    cout << "5. \tQuit" << endl;

    int userSelect;
    cout << "Enter your selection : " << flush;
    cin >> userSelect;

    //  Check Privileges
    if(userSelect == 1 ){
        cout << "Adding New record" <<endl;
    }
    else if(userSelect == 2){
        cout << "Deleting record"  << endl;
    }
    else if(userSelect == 3){
        cout << "View record" << endl;
    }
    else if(userSelect == 4){
        cout << "Searching record" << endl;
    }
    else if(userSelect == 5){
        cout <<"Quitting ..." << endl;
        return 0;
    }
    else{
        cout << "Invalid Options"<<endl;
        return 0;
    }
    return 0;
}
