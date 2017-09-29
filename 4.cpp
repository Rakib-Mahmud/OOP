#include <iostream>
using namespace std;
class Box
{
 private:
    int height;
    int width;
    int depth;

 public:
  Box()  /// default constructor
    {
        height=5;
        width=6;
        depth=7;

    }
    Box(int x,int y,int z)  /// user defined constructor
    {
        height = x;
        width = y;
        depth = z;

    }
    Box(Box &a)  /// copy constructor
    {
       height = a.height;
       width = a.width;
       depth = a.depth;

    }
    void show()
    {
        cout <<"value : "<<height*width*depth<<endl;

    }
};
int main()
{
    Box b1;  /// call default constructor
    Box b2(20,25,27);  /// call user defined constructor
    Box b3(b1);  /// call copy constructor
    cout <<"Display value of b1"<<endl;
    b1.show();
    cout <<"Display value of b2"<<endl;
    b2.show();
   cout <<"Display value of b3"<<endl;
    b3.show();
    Box b4=b2;  /// call copy constructor
    cout <<"Display value of b4"<<endl;
    b4.show();

    return 0;
}
