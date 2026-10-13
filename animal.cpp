#include<iostream>
using namespace std;
class Animal
{
    public:
    virtual void sound()
    {
        cout << "Animal make a sound" << endl;
    }
};
class dog : public Animal
{
    public:
    void sound() override
    {
        cout << "Dog Barks" << endl;
    }
};
class cat : public Animal 
{
    public :
    void sound() override
    {
        cout<<"cat meow"<<endl;
    }
};
int main(){

    Animal*ace;
    Animal a;
    dog d;
    cat c;
    ace=&d;
    ace -> sound();
    ace=&c;
    ace -> sound();
}