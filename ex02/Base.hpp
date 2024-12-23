#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>
#include <cstdlib>  // For std::rand() and std::srand()
#include <ctime> 
class Base 
{
    public:
        virtual ~Base();
    
        Base * generate(void);
        void identify(Base* p);
        void identify(Base& p);
    // private:
};

#endif