#include <iostream>
void Circle(double radious){
    double pi = 3.14;
    float ghotr = 2*radious;
    float area = pi*radious*radious;
    float volume = (4/3)*pi*radious*radious*radious;
    float sphere_area = 4*pi*radious*radious;
    std::cout << "Ghotr="<< ghotr <<std::endl;
    std::cout << "Area="<< area <<std::endl;
    std::cout << "Volume="<< volume <<std::endl;
    std::cout << "Sphere Area="<< sphere_area <<std::endl;

}
void square(double side) {
    double area = side*side;
    double mohit = 4*side;
    double volume = side*side*side;
    std::cout << "Side="<< side <<std::endl;
    std::cout << "Area="<< area <<std::endl;
    std::cout << "Mohit="<< mohit <<std::endl;
    std::cout << "Volume="<< volume <<std::endl;

}
 void Cylinder(double radious, double height) {
    double pi = 3.14;
    double area = 2*pi*radious*height + 2*pi*radious*radious;
    double volume = pi*radious*radious*height;
    double mohit = 2*pi*radious + 2*height;
    std::cout << "Radious=" << radious <<std::endl;
    std::cout << "Height=" << height <<std::endl;
    std::cout << "Area="<< area <<std::endl;
    std::cout << "Volume="<< volume <<std::endl;

 } 
 


int main() {
    // Circle(5);
    // std::cout << "-----------------------------"<<std::endl;
    // Circle(3);
    // std::cout << "-----------------------------"<<std::endl;
    // Circle(10);
//     square(5);
//  std::cout << "-----------------------------"<<std::endl;
//     square(3);
//  std::cout << "-----------------------------"<<std::endl;
//     square(10);
    return 0;
}