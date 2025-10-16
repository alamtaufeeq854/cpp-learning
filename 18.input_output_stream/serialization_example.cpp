// Serialization Example
#include <iostream>
#include <fstream>
using namespace std;

class Item
{
private:
    string name;
    float price;
    int qty;

public:
    Item() {} // Default constructor
    Item(string n, float p, int q);

    // Friend functions for operator overloading
    friend ifstream &operator>>(ifstream &fis, Item &i);
    friend ofstream &operator<<(ofstream &fos, Item &i);
    friend ostream &operator<<(ostream &os, Item &i);
};

int main()
{
    int n;
    cout << "Enter number of Items: ";
    cin >> n;

    string name;
    float price;
    int qty;

    Item *list[n];

    cout << "\nEnter all items:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " Item (Name Price Quantity): ";
        cin >> name >> price >> qty;
        list[i] = new Item(name, price, qty);
    }

    ofstream fos("Items.txt");
    for (int i = 0; i < n; i++)
    {
        fos << *list[i];
    }
    fos.close();

    ifstream fis("Items.txt");
    if (!fis)
    {
        cout << "File not found!\n";
        return 0;
    }

    cout << "\nReading from file...\n";

    Item item;
    int i = 0;
    while (fis >> item)
    {
        cout << "Item " << ++i << ":\n"
             << item << endl;
    }

    for (int i = 0; i < n; i++)
        delete list[i];

    return 0;
}

Item::Item(string n, float p, int q)
{
    name = n;
    price = p;
    qty = q;
}

ofstream &operator<<(ofstream &fos, Item &i)
{
    fos << i.name << endl
        << i.price << endl
        << i.qty << endl;
    return fos;
}

ifstream &operator>>(ifstream &fis, Item &i)
{
    fis >> i.name >> i.price >> i.qty;
    return fis;
}

ostream &operator<<(ostream &os, Item &i)
{
    os << "Name: " << i.name << endl
       << "Price: " << i.price << endl
       << "Quantity: " << i.qty << endl;
    return os;
}
