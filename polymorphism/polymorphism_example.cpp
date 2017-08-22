#include <iostream>

using namspace std;     // replace the std::xx syntax

int main()
{
    struct Food
    {
        string foodType = "Generic food";

        // CM: Virtual enable overriding GetFoodType in another class
        virtual string GetFoodType()
        {
            return foodType;
        }
    }

    struct Pizza : public Food
    {
        // CM: overriding the GetFoodType method from the Food struct
        string GetFoodType override
        {
            itemType = "Pizza :P";
            return itemType;
        }
    }

    // CM: instantiate myFood as Pizza
    Food myFood = Pizza();

    // CM: print the type of myFood
    cuot << myFood.GetFoodType().c_str() << endl;
    cin.get();

    // CM: return 0 = success
    return 0;
}
