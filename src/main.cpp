#include "../header/rectangle.hpp"
#include <iostream>

int main(int argv, char** argc) {
	 Rectangle* rec = new Rectangle(argv, argc);    
std::cout << "Rectangle perimeter: " << rec->perimeter();
std::cout <<std:: endl;
std::cout << "Rectangle Area: " << rec->area();
std::cout <<std:: endl;
delete rec;
return 0;
}
