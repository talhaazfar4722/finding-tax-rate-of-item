#include<iostream>
using namespace std;

class sale {
private:
    double itemCost; // Cost of the item
    double taxRate; // Sales tax rate

public:
    sale() // Parameterless constructor
    {
        itemCost = 0;
        taxRate = 0;
    }

    sale(double cost, double rate) // Parameterized constructor
    {
        itemCost = cost;
        taxRate = rate;
    }

    double getItemCost()
    {
        return itemCost;
    }

    double getTaxRate()
    {
        return taxRate;
    }

    double getTax()
    {
        return itemCost * taxRate;
    }

    double getTotal()
    {
        return itemCost + getTax();
    }
   void initialize(double cost,double rate) {
		itemCost=cost;
		taxRate=rate;
		}
};

int main()
{
    sale item1;
    sale item2;
    item2.initialize(1000,0.1);

    cout << "Item 1 - Cost: " << item1.getItemCost() << ", Tax Rate: " << item1.getTaxRate() << endl;
    cout << "Item 2 - Cost: " << item2.getItemCost() << ", Tax Rate: " << item2.getTaxRate() << endl;

    // Calculating and displaying tax and total for both items
    cout << "Item 1 - Tax: " << item1.getTax() << ", Total: $" << item1.getTotal() << endl;
    cout << "Item 2 - Tax: " << item2.getTax() << ", Total: $" << item2.getTotal() << endl;

    return 0;
}


