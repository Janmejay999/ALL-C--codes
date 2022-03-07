
#include <iostream>

using namespace std;


class measure{
    public:
        int height, length, width;
        void setInput(int a, int b, int c){
            height = a;
            length = b;
            width = c; 
        }
        
        int area(){
            return width * length;
        }
        int volume(){
            return width * length  * height;
        }
};
int main()
{
    measure obj1,obj2;
    
    obj1.setInput(5,6,5);
    cout<< "Area of object 1 is: "<<obj1.area();
    cout<< "\nvolume of object 1 is : "<<obj1.volume();
    
    obj2.setInput(2,3,2);
    cout<< "\nArea of object 2 is: "<<obj2.area();
    cout<< "\nvolume of object 2 is : "<<obj2.volume();

    return 0;
}

