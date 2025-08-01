//
//  main.cpp
//  Using Pointers pointing Objects
//
//  Created by Adarsh Kathriya on 30/07/25.
//

#include <iostream>
using namespace std;

class Car{
public:
    int TopSpeed;
    string color;
    string Model;
    
    void desc(){
        cout<<"the top speed : "<<TopSpeed<<endl<<"the color is : "<<color<<endl<<"The Model is :"<<Model<<endl;
    }
    
    
    
};

int main(int argc, const char * argv[]) {
    Car c1;
    Car *p=&c1;
    
    p->TopSpeed=100;
    p->color="Grey";
    p->Model="Merc GT 100";
    
    p->desc();
    cout<<&p<<" "<<" "<<" "<<sizeof(p);
    
}
