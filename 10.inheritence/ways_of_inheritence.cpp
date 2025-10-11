// Ways of Inheritence
#include <iostream>
using namespace std;

class Parent
{

private:
    int a;

protected:
    int b;

public:
    int c;

    void funParent()
    {

        a = 7; // Private variable can be access inside class
        b = 3; // Protected variable can be access inside class
        c = 2; // Public variable can be access inside class
    }
};

class Child : public Parent
{

    void funChild()
    {

        b = 9; // Protected variable can be access inside child class from public parent class and it's becomes protected
        c = 4; // Public variable can be access inside child class from public parent class and it's becomes public
    }
};

class GrandChild : public Child
{

    void funGrandChild()
    {

        b = 2; // Protected variable can be access inside grandchild class from public child class and it's becomes protected
        c = 1; // Public variable can be access inside grandchild class from public child class and it's becomes public
    }
};

class Child2 : protected Parent
{

    void funChild2()
    {

        b = 7; // Protected variable can be access inside child2 class from protected parent class and it's becomes protected
        c = 6; // Public variable can be access inside child2 class from protected parent class and it's becomes protected
    }
};

class GrandChild2 : public Child2
{

    void funGrandChild2()
    {

        b = 3; // Protected variable can be access inside grandchild2 class from public child2 class and it's becomes protected
        c = 5; // Protected variable can be access inside grandchild2 class from public child2 class and it's becomes protected
    }
};

class Child3 : private Parent
{

    void funChild3()
    {

        b = 8; // Protected variable can be access inside child3 class from private parent class and it's becomes private
        c = 9; // Public variable can be access inside child3 class from private parent class and it's becomes private
    }
};

class GrandChild3 : public Child3
{

    void funGrandChild3()
    {

        //  b = 3; // Private variable cannot be access
        //  c = 5; // Private variable cannot be access
    }
};

int main()
{
}