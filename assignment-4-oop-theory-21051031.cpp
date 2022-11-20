/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class Room {

   public:
    double length;
    double breadth;
    double height;

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

class Distance {
    private:
        int meter;
        friend int addFive(Distance);

    public:
        Distance() : meter(0) {}
        
};
int addFive(Distance d) {

    
    d.meter += 5;
    return d.meter;
}

class Base1 {
   public:
    void print() {
        cout << "Base1 Function" << endl;
    }
};

class Derived1 : public Base1 {
   public:
    void print() {
        cout << "Derived1 Function" << endl;
    }
};

class  Wall {
  private:
    double length;

  public:

    Wall() {
      length = 5.5;
      cout << "Creating a wall." << endl;
      cout << "Length = " << length << endl;
    }
    
};
    
class Mammal {
  public:
    Mammal() {
      cout << "Mammals can give direct birth." << endl;
    }
};

class WingedAnimal {
  public:
    WingedAnimal() {
      cout << "Winged animal can flap." << endl;
    }
};

class Bat: public Mammal, public WingedAnimal {};

class Base2 {
   public:
    virtual void print() {
        cout << "Base2 Function" << endl;
    }
};

class Derived2 : public Base2 {
   public:
    void print() {
        cout << "Derived2 Function" << endl;
    }
};

class Count {
   private:
    int value;

   public:
   
    Count() : value(5) {}
    void operator ++ () {
        ++value;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

template <class T>
class Number {
   private:
    
    T num;

   public:
    Number(T n) : num(n) {}   

    T getNum() {
        return num;
    }
};

float CheckDenominator(float den)
{
    if (den == 0)
        throw "Error";
    else
        return den;
}

int main()
{
    int c,n;
    do
    {
        
        cout<<"\n1. Class and Object"<<endl;
        cout<<"2. Friend Function"<<endl;
        cout<<"3. Function overloading"<<endl;
        cout<<"4. Constructor"<<endl;
        cout<<"5. Inheritance"<<endl;
        cout<<"6. Virtual function"<<endl;
        cout<<"7. Operator overloading"<<endl;
        cout<<"8. Template"<<endl;
        cout<<"9. Exception Handling"<<endl;
        cout<<"10. EXIT"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>c;
        
        switch(c)
        {
            case 1:{
                    Room room1;
                    room1.length = 42.5;
                    room1.breadth = 30.8;
                    room1.height = 19.2;
                    cout << "Area of Room =  " << room1.calculateArea() << endl;
                    cout << "Volume of Room =  " << room1.calculateVolume() << endl;}
            break;
            case 2:{
                    Distance D;
                    cout << "Distance: " << addFive(D);}
                    
            break;
            case 3:{
                    Derived1 derived1;
                    derived1.print();}
                    
            break;
            case 4:{
                    
                    Wall wall1;}
                    
            break;
            case 5:{
                    Bat b1;
            }
                    
            break;
            case 6:
                    {
                    Derived2 derived2;
                    Base2* base2 = &derived2;
                    base2->print();}
            break;
            case 7:
                    {
                    Count count1;
                    ++count1;
                    count1.display();}

            break;
            case 8:
                  {
                  Number<int> numberInt(7);
                  Number<double> numberDouble(7.7);
                  cout << "int Number = " << numberInt.getNum() << endl;
                  cout << "double Number = " << numberDouble.getNum() << endl;}
                  
            break;
            case 9:
            {
                float numerator, denominator, result;
                numerator = 20;
                denominator = 10;
                try 
                {
                    if (CheckDenominator(denominator))
                    {
                        result = (numerator / denominator);
                        cout << "The quotient is "<< result << endl;
                    }
                }
                
                catch (...)
                {
                    cout << "Exception occurred" << endl;
                }
            }
            break;
        }

    } while (c!=10);
    return 0;
}

