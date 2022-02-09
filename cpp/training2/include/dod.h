#ifndef DOD_H
#define DOD_H

namespace training2
{
    class Base
    {
        private:
        int _value_ = 0;

        public:
        Base();
        virtual ~Base();

        //Calculate the sum from 0 to n
        virtual int calculate(int n);
    };

    class DeriveA1 : public Base
    {
        public:
        DerivedA1();
        virtual ~DerivedA1();

        //Calculates the feculty
        virtual int calculate(int n);
    };

    class DerivedA2 : public Base
    {
        public:
        DerivedA2();
        virtual ~DerivedA2();

        //Calculates the Fibonacci series
        virtual int calculate(int n);
    };

    class DerivedB : public DerivedA1, DerivedA2
    {
        public:
        DerivedB();
        virtual ~DerivedB();

        virtual void print_calculation(int n);
    };
}
#endif //DOD_H