#include <iostream>

using namespace std;

class Calculator{
    public:
        float input1;
        float input2;
        
        void setInput(float a, float b){
            input1 = a;
            input2 = b;
        }
        float add(){
            return input1+input2;
        }
        float sub(){
            return input1-input2;
        }
        float mul(){
            return input1*input2;
        }
       float division();
        
};

 float Calculator :: division(){
            return input1/input2;
}
int main()
{
    Calculator obj1;
    float num1,num2;
    char op;
    
    cout<<"Enter Num1 & Num2: \n";
    cin>>num1>>num2;
    cout<<"Enter Operation you want to perform: \n";
    cin>>op;
    obj1.setInput(num1,num2);
    switch(op){
        case '+':
        
        cout<< "The inputs: "<<obj1.input1 <<" + "<< obj1.input2;
        cout<< "\nThe sum of inputs is: "<<obj1.add();
        break;
        
        case '-':
        cout<< "The inputs: "<<obj1.input1 <<" - "<< obj1.input2;
        cout<< "\nThe sub of inputs is: "<<obj1.sub();
        break;
        
        case '*':
        cout<< "The inputs: "<<obj1.input1 <<" * "<< obj1.input2;
        cout<< "\nThe mul of inputs is: "<<obj1.mul();
        break;
        
        case '/':
        cout<< "The inputs: "<<obj1.input1 <<" / "<< obj1.input2;
        cout<< "\nThe division of inputs is: "<<obj1.division();
        break;
        
        default:
        cout<< "Wrong choice...!\n";
        break;
    }
    
    return 0;
}
