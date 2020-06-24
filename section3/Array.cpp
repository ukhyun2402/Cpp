#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int animals[10][10];

    for (int i = 0; i < sizeof(animals) / sizeof(animals[i]); i ++){
        for (int j = 0; j < sizeof(animals[i]) / sizeof(int); j ++ ){
            animals[i][j] = i * j ;
        }
    }
    for (int i = 0; i < sizeof(animals) / sizeof(animals[i]); i ++){
        for (int j = 0; j < sizeof(animals[i]) / sizeof(int); j ++ ){
            cout << animals[i][j] << "\t" << flush;
        }

        cout <<endl;
    }

    cout<< sizeof(animals) / sizeof(int) <<endl;
    return 0;
}
