#include <iostream>

    class Gimbal
    {
        public:

        Gimbal(const std::string &_name) : name(_name){}

        void moverse();

        void newFunction();

        private:
        std::string name;
    
    };