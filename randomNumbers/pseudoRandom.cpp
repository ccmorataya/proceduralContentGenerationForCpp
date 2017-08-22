// @ccmorataya random number generator with the std::rand()
// change the code to complete the exercise of Chapter 1

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(nullptr) * time(nullptr));         // Setting the seed for rand
    while (true)
    {
        cout << "Press a key to generate a random number: ";
        cin.get();

        // CM: generate the random integer
        //int randomInteger = rand();     // can be std::rand()
        // CM: range 198 to 246
        int randomInteger = rand() % 49 + 198;     // can be std::rand()

        cout << randomInteger << endl << endl;
    }
    return 0;
}
