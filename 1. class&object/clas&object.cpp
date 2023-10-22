#include <iostream>

using namespace std;


class animal
{
    public:

    string species;
    string name;
    int age;

    void add_animal()
    {
        cout << "Adding new animal to the base: " << endl;
        cout << "Enter species: ";
        cin >> species;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void reaction()
    {
        if(species == "cat")
        {
            cout << name << "age: " << age << ": miau!";
        }
        else if(species == "goat")
        {
            cout << name << "age: " << age << ": bee!";
        }
        else if(species == "cow")
        {
            cout << name << " age: " <<  age << ": muuu!";
        }
        else
        {
            cout << "Non rezognized species!";
        }
    }
};

int main()
{
    animal a1;

    a1.add_animal();
    a1.reaction();

    cout << endl;
    animal a2;
    
    a2.add_animal();
    a2.reaction();

    return 0;
}