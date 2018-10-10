#include <iostream>
#include <math.h>
#include<fstream>
int main()


{
 int x,y;

    std::cout<<" Width of triangle    =  ";
    std::cin>> x;
    std::cout<<" Height of triangle   =  ";
    std::cin>> y;
    std::cout<<"               "<<std::endl; 
  auto  z = sqrt(pow(x,2) + pow(y,2));

 std::cout<<"The Width   of  triangle = "<<x<<std::endl;
 std::cout<<"The Height  of  triangle = "<<y<<std::endl;
 std::cout<<"The Breadth of  triangle = "<<z<< std::endl;
 std::ofstream myfile;
 myfile.open(" example.txt ");
 if (myfile<<" your triangle has three sides width "<<x<<" , height "<<y<<", breadth are "<<z);

 myfile.close();
 return 0;

    
}