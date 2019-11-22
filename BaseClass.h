#pragma once

class BaseClass {
    public:
        // Print is a virtual function so that it can be accessed preload.
        virtual void print()
        {
            std::cout << "I am the base class" << std::endl;
        }
};