// @ccmorataya random number generator with the std::rand()

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    while (true)
    {
        cout << "Press a key to generate a random number: ";
        cin.get();

        // CM: generate the random integer
        int randomInteger = rand();     // can be std::rand()

        cout << randomInteger << endl << endl;
    }
    return 0;
}
