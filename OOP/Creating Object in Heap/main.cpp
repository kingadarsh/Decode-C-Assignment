//
//  main.cpp
//  Creating Object in Heap
//
//  Created by Adarsh Kathriya on 31/07/25.
//

#include <iostream>
using namespace std;

class Pen{
public:
    int cost;
    string color;
    string type;
    
    void desc(){
        cout<<"The cost is :"<<cost<<endl<<"The color of pen is: "<<color<<endl<<"The type of pen is : "<<type<<endl;
    }
    
    
    
};

int main(int argc, const char * argv[]) {
    Pen *q=new Pen();
    Pen p;
    p.cost=10;
    p.color="blue";
    p.type="fountain pen";
    p.desc();
    cout<<endl<<endl;
    q->cost=50;
    q->color="Red";
    q->type="Normal pen";
    q->desc();
    
    delete q;
    
}
