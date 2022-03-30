#ifndef DOD_H
#define DOD_H

namespace training2
{
    class Overloader
    {
        public:
        explicit Overloader();
        explicit Overloader(Overloader *obj);
        virtual ~Overloader();

        Overloader *operator=(Overloade *obj);
        bool operator==(Overloader);

        virtual double add(int x, int y);
        virtual double add(float x, float y);
        virtual double add(double x, double y);
    }
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

    class AbstractBase
    {
        protected:
        explicit AbstractBase();
        virtual ~AbstractBase();

        public:
        virtual void do_something() = 0;
        int calculate_something(int _value);
    };

    class Interface
    {
        protected:
        explicit Interface() = 0;
        virtual ~Interface() = 0;

        public:
        virtual void do_something() = 0;
        virtual int calculate_something(int _value) = 0;
    };
}
#endif //DOD_H