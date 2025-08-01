//
//  main.cpp
//  Rectangle class
//
//  Created by Adarsh Kathriya on 30/07/25.
//

#include <iostream>
using namespace std;

class Rectangle{
private:
    float l;
    float b;
    
public:
    //    Setter method to set the data memebers
//    Length
    void setLength(float L){
        if(L<0){
            l=0;
        }else{
            l=L;
        }
        
    }
//    Breadth
    void setBreadth(float B){
        if(B<0){
            b=0;
        }else{
            b=B;
        }
    }

//    Getter Method to access and check the data member
    float getLength() {
        return l;
    }
    
    float getBreadth() const {
        return b;
    }
    
    // Area Method
    
    float Area(){
        return l*b;
    }
    
//    Perimeter
    float Perimeter(){
        return 2*(l+b);
    }
    
    
    
    
    
    
};


int main(int argc, const char * argv[]) {
    
        
    Rectangle r1,r2;
    r1.setLength(4);
    r1.setBreadth(10);
    cout<<"the area of r1 is : "<<r1.Area()<<endl;
    cout<<"the Perimeter r2 is : "<<r1.Perimeter ()<<endl;
    cout<<endl<<endl;

    r2.setLength(5);
    r2.getLength();
    r2.setBreadth(6);
    r2.getBreadth();
    
    cout<<"the area of r2 is : "<<r2.Area()<<endl;
    cout<<"the Perimeter r2 is : "<<r2.Perimeter ()<<endl;
    cout<<endl<<endl;
    
}

