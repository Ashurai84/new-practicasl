// //Acees  modifiers

#include <iostream>
using namespace std;
class myclass{
    public:
    int x;
    private:
    int y ;

};
int main(){
    myclass myobj;
    myobj.x=60;
    cout<<"hello world:"<<myobj.x<<endl;
    // myobj.y=70;
    // cout<<"this is private number"<<obj.y<<endl;
    
}


//  privater   and  public 

#include<iostream>
using namespace std;
class Employee{
    private:
    int salary;
    public:
    void setasalary(int s ){
        salary=s;

    }
    int getsalary(){
        return salary;


    }
} ;
int main (){
    Employee myobj;
    myobj.setasalary(5000);
    cout<<myobj.getsalary();
}




/./ protected case:- we use get method to retrived ther data

#include <iostream>
using namespace std;
 class demo{
    protected:
    void display (){
        cout<<" access only in deriviued class not outside  class";

    }
 };
 class derived:public demo{
    public:
    void getdisplay(){
            display();

    }
 };
 int main (){
    derived d ;
    // d.display();
    d.getdisplay();

 }





// // operator overloading 

#include <iostream>
using namespace std;

class Count {
public:
    int value;

     
    Count() : value(5) {}

    
    void operator ++() { // if we want in minus we can replace the + into - for less one number 
       ++value;
    }

    
    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count count1;
    ++count1;       
    count1.display();  
    return 0;
}











#include <iostream>
using namespace std;

class complex {
     int a,b;
     public:
     void get_data(){
        cout<<"enter the value  of your data a, b :"; cin>>a>>b;

     }
     complex operator+(complex ob)
     {
        complex t;
        t.a=a+ ob.a;
        t.b=b+ob.b;
        return (t);


     }
        complex operator-(complex ob){
        complex t ; 
        t.a= a-ob.a;
         t.b = b-ob.b;
          return (t);}
          void display(){
            cout<<a<<b<<"+"<<b<<"i"<<"\n";
          }

};
int main()
{
    complex obj1, obj2, result, result1;
    obj1.get_data();
    obj2.get_data();

    result=obj1+obj2;
    result=obj1-obj2;

    cout<<"\n\ninput values :\n";

    obj1.display();
    obj2.display();
    cout<<"\nresult : ";
    result.display();
    return 0;
}





// factorial using  recursion method

#include <iostream>
using namespace std;

int factorial(int);
int main () {
    int n , result;
    cout<<"entr a numebr of non-negative numbers ";
    cin>>n;
    result =factorial(n);
    cout<<"factoroial of "<<n<<" = "<<result<<endl;
    return 0;


}
int factorial(int n ){
    if(n>1){
        return n*factorial(n-1);}
        else{
            return 1; 
        }
}




// wap to claculate the first sum of first of N naturlal numbers using recursion 



#include <iostream>
using namespace std;
int Natural(int n) {
    if (n == 0) {  
        return 0;}
    return n + Natural(n - 1); 
}
int main() {
    int n;
    cout << "Enter a non-negative number: ";
    cin >> n;
    int result = Natural(n);
    cout << "The sum of the first " << n << " natural numbers is: " << result << endl;
    return 0;
}



// practical list (class  and object)
// design a bank acc class with basic bsic credit and debit operation in c++ using object oriented programming 


#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;
public:
    BankAccount(string name, int accNumber, double initialBalance) {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
    }
    void displayDetails() {
        cout << accountHolderName << " (" << accountNumber << ") Balance: $" << balance << endl;
    }
    void credit(double amount) {
        if (amount > 0) balance += amount;
    }
    void debit(double amount) {
        if (amount > 0 && amount <= balance) balance -= amount;
    }
    double getBalance() {
        return balance;
    }
};
int main() {
    BankAccount account1("Alice Smith", 123456, 1000.00);
    account1.displayDetails();
    account1.credit(500);
    account1.debit(300);
    account1.displayDetails();
    return 0;
}



// #include <iostream>
// using namespace std;

// class base {
// public:
//     virtual void print() { cout << "print base class\n"; }
//     void show() { cout << "show base class\n"; }
// };

// class derived : public base {
// public:
//     void print() { cout << "print derived class\n"; }
//     void show() { cout << "show derived class\n"; }
// };

// int main() {
//     base* bptr;
//     derived d;
//     bptr = &d;  // Corrected pointer assignment

//     bptr->print();  // Calls derived class print (due to virtual function)
//     bptr->show();   // Calls base class show (because it's not virtual)

//     return 0;
// }



#include <iostream>
using namespace std;
 
inline int cube(int n) {
    return n * n * n;
}

int main() {
    int num;
 
    cout << "Enter a number: ";
    cin >> num;
 
    cout << "Cube of the number: " << cube(num) << endl;

    return 0;
}


















