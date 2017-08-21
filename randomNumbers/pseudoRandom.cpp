// @ccmorataya random number generator with the std::rand()
// change the code to complete the exercise of Chapter 1

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(nullptr));         // Setting the seed for rand
    while (true)
    {
        cout << "Press a key to generate a random number: ";
        cin.get();

        // CM: generate the random integer
        //int randomInteger = rand();     // can be std::rand()
        // CM: range 150 to 600
        int randomInteger = rand() % 451 + 150;     // can be std::rand()

        cout << randomInteger << endl << endl;
    }
    return 0;
}
