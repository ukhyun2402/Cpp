#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numberCats = 5;
    int numberDogs = 7;
    int numberAnimals = numberCats + numberDogs ; 

    cout << "Number of Cats : " << numberCats <<endl;
    cout << "Number of Dogs : " << numberDogs <<endl;

    cout << "Total Number of Animals : " << numberAnimals << endl;

    cout << "New dog acquired!"<< endl;

    numberDogs = numberDogs + 1;
    cout << "New number of Dogs : " << numberDogs << endl;

    return 0;
}
