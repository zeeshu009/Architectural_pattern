#include <iostream>
using namespace std;

class Singleton 
{
    static Singleton* instance;
    int data;

    // Private constructor so that no objects can be created.
    Singleton() 
    {
        data = 0;
    }


    Singleton(const Singleton&);
    Singleton& operator=(const Singleton&) {};


public:
    static Singleton& getInstance()
    {
        if (instance == nullptr)
        {
            instance = new Singleton;
        }
        return *instance;
        
    }

    int getData() 
    {
        return this->data;
    }

    void setData(int data) 
    {
        this->data = data;
    }
};

//Initialize pointer to zero so that it can be initialized in first call to getInstance
Singleton* Singleton::instance = 0;



int main()
{
    Singleton& s = s.getInstance();
    // we can make new reference but not pointer or object
    // as we cannot make any pointer to that object so client cannot delete this ref object
    Singleton& p = p.getInstance(); // this p is a reference of same object like s.


    s.setData(140);
    cout << s.getData() << endl;
    return 0;
}
