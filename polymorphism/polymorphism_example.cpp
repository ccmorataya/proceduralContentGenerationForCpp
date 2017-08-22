#include <iostream>
#include <memory>

using namespace std;     // replace the std::xx syntax

int main()
{
    struct Food
    {
        string foodType = "Generic food";

        // CM: Virtual enable overriding GetFoodType in another class
        virtual string GetFoodType()
        {
            return foodType;
        };
    };

    struct Pizza : public Food
    {
        // CM: overriding the GetFoodType method from the Food struct
        string GetFoodType() override
        {
            foodType = "Pizza :P";
            return foodType;
        };
    };

    // CM: instantiate myFood as Pizza
    // CM: using pointer to avoid the slicing objects
    //Food myFood = Pizza();
    unique_ptr<Food> myFood = make_unique<Pizza>();

    // CM: print the type of myFood
    cout << myFood->GetFoodType().c_str() << endl;
    cin.get();

    // CM: return 0 = success
    return 0;
}
