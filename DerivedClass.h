#pragma once

class DerivedClass : public BaseClass {
    public:
        void print()
        {
            std::cout << "I am the derived class" << std::endl;
        }
};