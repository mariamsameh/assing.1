-Main.cpp
	#include "iostream"
	#include "move.h"
	
	int main()
	{
	Move obj1(5,6);
  	Move obj2(10,11);
	Move obj3; 
 	obj1 = obj1.add(obj2);
	std::cout << "obj1: ";
	obj1.showmove();
	 
	obj2 = obj2.add(obj1);
        std::cout << "nobj2: ";
        obj2.showmove();
 
        obj3 = obj1.add(obj2);
        std::cout << "nobj3: ";
        obj3.showmove();
     
        std::cin.get();
        std::cin.get();
        return 0;
	}

