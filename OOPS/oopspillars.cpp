#include<iostream>
using namespace std;

class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight = w;
    }
};

class Male: public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
};

int main()
{
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;
    object1.color = "Black";
    cout<<object1.color<<endl;
    object1.setWeight(72);
    cout<<object1.weight<<endl;
    object1.sleep();


    return 0;
}