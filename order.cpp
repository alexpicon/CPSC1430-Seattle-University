// order.cpp
// Purpose: Explore Classes and Objects

#include <iostream>
#include <string>
using namespace std;

class Order
{
// variables
private:
    string name;
    int itemID;
    double total;
    bool isActive;

// getter/setter functions
// getter functions print a message and return a class variable
// setter functions give a value to each class variable 
public:
    string getName()
    {
        if (name == "Alex"){
            cout << "Customer name: " << name;
        }else{
            cout << "No order, no name!";
        }
        return name;
    }

    void setName(string Name)
    {
        name = Name;
        cout << "Name has been updated.";
    }

    int getItemID()
    {
        if (itemID == 61722){
            cout << "itemID: #" << itemID;
        }else{
            cout << "No order, item(s)!";
        }
        return itemID;
    }

    void setItemID(int ItemID)
    {
        itemID = ItemID;
        cout << "ItemID has been updated.";
    }

    double getTotal()
    {
        if (total == 49.99){
            cout << "Amount owed: $" << total;
        }else{
            cout << "No order, no total!";
        }
        return total;
    }

    void setTotal(double Total)
    {
        total = Total;
        cout << "Amount owed has been updated.";
    }

    bool getIsActive()
    {
        if (isActive == true){
            cout << "Order in progress.";
        }else{
            cout << "No order has been placed.";
        }
        return isActive;
    }

    void setIsActive(bool IsActive)
    {
        isActive = IsActive;
        cout << "Order status has been updated.";
    }
};

int main()
{
    Order acc1;

    cout << endl << endl;
    cout << "***********************************" << endl;

    // if bool then use functions
    if (acc1.getIsActive()){
        cout << endl;
        acc1.getName();
        cout << endl;
        acc1.getItemID();
        cout << endl;
        acc1.getTotal();
        cout << endl << endl;
    }

    cout << "-----------------------------------"
         << endl << endl
         << "NEW ORDER!" << endl
         << "-----------------------------------" 
         << endl << endl;

    // changes/updates values
    acc1.setIsActive(true);
    cout << endl;
    acc1.setName("Alex");
    cout << endl;
    acc1.setItemID(61722);
    cout << endl;
    acc1.setTotal(49.99);
    cout << endl << endl;

    cout << "-----------------------------------" << endl
         << "Here are the order details:" << endl
         << "-----------------------------------" << endl << endl;

    // if bool then use functions
    if (acc1.getIsActive()){
        cout << endl;
        acc1.getName();
        cout << endl;
        acc1.getItemID();
        cout << endl;
        acc1.getTotal();
        cout << endl << endl;
    }

    cout << "***********************************" << endl << endl;
    return 0;
}
