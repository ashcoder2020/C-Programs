
#include <iostream>

using namespace std;


class Area1{
    float pi =3.14;
    float r,area;
    public:
    void AreaOfCircle(){
        cout<<"Enter radius of circle : ";
        cin>>r;
        area=pi*r*r;
        cout<<"Area of circle = "<<area<<endl;
    }
};

int main()
{
    
    cout<<"--------------area of circle----------------";
    Area1 obj ;
    obj.AreaOfCircle();

    return 0;
}
