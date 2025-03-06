                                                
                                                     C++






***********************************Simple Speed Program *************************************************************



#include <iostream>

int main() {
    int s,t,d;
    std::cout<<"Enter the time: ";
    std::cin>>t,d;
    std::cout<<"Enter the Distance: ";
    std::cin>>d;
    s=d/t;
    
    std::cout << s;

    return 0;
}


***********************************************Simple Caluculater using Switch Cases*****************************************




#include <iostream>
using namespace std;

int main() {
    int a,b;
    char c;
    cout << "Enter a (operator) b :";
    cin>>a>>c>>b;
    switch(c)
    {
        case '-' : cout<<(a-b); break;
        case '+' : cout<<(a+b); break;
        case '*' : cout<<(a*b); break;
        case '/' : cout<<(a/b); break;
        default : cout<<"None";
    }

    return 0;
}




*********************************************Create Class and Object and Namespace************************************************



#include <iostream>
using namespace std;
class Test
{
    int a;
    public : void display()
    {
        cout<<"Enter a value:";
        cin>>a;
        cout<<"a = "<<a<<endl;
    }
};
int main() {
    Test obj;
    obj.display();
    Test obj1;
    obj1.display();

    return 0;
}




*************************************************Default namespace and PreDefined Namespace *******************************************



#include <iostream>
using namespace std;
namespace first
{
    int a;
    void fun()
    {
        int a=90;
        cout<<"first "<<"a= "<<a<<endl;
    }
};
namespace sec
{
    double a;
    void fun()
    {
        double a=8.96;
        cout<<"sec "<<"a= "<<a<<endl;
    }
};

int main() {
    first::fun();
    cout<<" "<<first::a<<endl;
    sec::fun();
    cout<<" "<<sec::a<<endl;

    return 0;
}



************************************************************************Default Arguments(args)*****************************************



#include <iostream>
using namespace std;
int sum(int a=0,int b=0,int c=0)//RHS to LHS we can give diffault args "only in declaration we can give the values"
{
    return a+b+c;
}
int main() {
    cout<<sum()<<endl;
    cout<<sum(2)<<endl;
    cout<<sum(2,4)<<endl;
    cout<<sum(2,3,5)<<endl;
    

    return 0;
}



**************************************************************************Default Arguments and Different Functions *********************************



#include <iostream>
using namespace std;


int sum(int a=0,int b=0,int c=0)
{
    return a+b+c;
}
int sub(int d=0,int e=0,int f=0)
{
    return d-e-f;
}
int mul(int g=0,int h=0,int i=0)
{
    return (g*h*i);
}
int main() {
    cout<<sum(1,2,3)<<endl;
    cout<<sub(6,2)<<endl;
    cout<<mul(1,2,4)<<endl;

    return 0;
}




**********************************************************Reverse A Number***************************************


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int temp=n,c=0;
    while(n!=0)
    {
        n/=10;
        c++;
    }
    int rem,rev=0;
    for(int i=0;i<c;i++)
    {
        rem=(temp%10);
        rev=rev*10+rem;
        temp/=10;
    }
    cout<<"Reversed Number: "<<rev;
    

    return 0;
}



**********************************Armstrong or not *********************************************



#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int temp=n,a=n;
    int rem,de=0,i=0,c=0;
    
    while(n!=0)
    {
        n/=10;
        c++;
    }
    while(temp!=0)
    {
        rem=temp%10;
        de=de+pow(rem,c);
        temp/=10;
    }
    if(a==de)
    {
        cout<<"Armstrong Number"<<endl;
    }
    else
    {
        cout<<"Not Armstrong Number"<<endl;
    }
    return 0;
}

******************************************Decimal to Binary **********************************************************************


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int a=n;
    int b[10],i;
    for(i=0;n>0;i++)
    {
        b[i]=n%2;
        n/=2;
    }
    for(i=i-1;i>=0;i--)
    {
        cout<<b[i];
    }

    return 0;
}




********************************************Reference Operators*****************************************************



// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int a=90;
    int &b=a;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    int &c=b;
    c=56;
    cout<<"a="<<a<<" "<<"b="<<b<<" "<<"c="<<c<<endl;

    return 0;
}



********************************************Swapping Variables*****************************************************


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
inline void swap(int &a,int &b);
int main() {
    int a,b;
    cout<<"Enter the values for a and b: ";
    cin>>a>>b;
    swap(a,b);
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    

    return 0;
}
inline void swap(int &a,int &b)
{
    a=a^b;
    b=a^b;
    a=a^b;
}


******************************************Inline Operator *********************************************************************************



// Online C++ compiler to run C++ program online
#include <iostream>
//#define sqr(x) x*x//-----17 answer x+2 * x+2 --->precedence(BODMAS)
using namespace std;
inline int sqr(int x)
{
    return x*x;
}

int main() {
    int x=5;
    cout<<sqr(x+2)<<endl;
    return 0;
}



**************************************************************Input String Read*****************************************************************

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    string name;
    cin>>name;
    cout<<name<<endl;

    return 0;
}


**********************************************************************Class students*****************************************************


#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int marks[5];

public:
    void inputMarks() 
    {
        cout << "Enter the name of the student: ";
        cin >> name;
        cout << "Enter marks for 5 subjects: ";
        for(int i = 0; i < 5; i++) 
        {
            cin >> marks[i];
        }
    }

    float calculateAverage() 
    {
        int sum = 0;
        for(int i = 0; i < 5; i++) 
        {
            sum += marks[i];
        }
        return sum / 5.0;
    }

    void displayAverage() 
    {
        cout << "Average marks for " << name << " is: " << calculateAverage() << endl;
    }
};

int main() 
{
    Student student1, student2;

    cout << "Enter details for Student 1:\n";
    student1.inputMarks();

    cout << "Enter details for Student 2:\n";
    student2.inputMarks();

    student1.displayAverage();
    student2.displayAverage();

    return 0;
}


*******************************************************************Polyformism (Function Overloading)************************************************


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int sum(int a,int b)
{
    return a+b;
}
int sum(int a,int b,int c)
{
    return a+b+c;
}
int sum(int a,int b,int c,int d)
{
    return a+b+c+d;
}
int main() {
    
    cout<<sum(10,20)<<endl;
    cout<<sum(10,20,30)<<endl;
    cout<<sum(10,20,30,40)<<endl;
    

    return 0;
}




***************************************************Lift Problem *****************************************************************



#include <iostream>
using namespace std;
#define max 1000

int main() {
    
    int arr[100];
    int arr1;
    for(int i=1;i<100;i++)
    {
        cin>>arr[i];
        arr1+=arr[i];
        if(arr1>=max)
        {
            cout<<"Total Persons ="<<i<<endl;
            cout<<"Over Weight"<<endl;
            cout<<"Alaram"<<endl;
        }
        
    }

    return 0;
}



******************************************************Lab 1-2 bank account**************************************************************


#include <iostream>
using namespace std;

class bank {
    private:
        string b_Name = "SBI";
        string Branch = "Bang";
        string IFSC = "SBI0001125";
        string name;
        long long int No;
        double initial_deposit;
        string account_type;

    public:
        void open_account(string account_name, long long int account_no, double deposit = 0.0, string type = "Savings") {
            name = account_name;
            No = account_no;
            initial_deposit = deposit;
            account_type = type;

            cout << "Account opened successfully!" << endl;
        }

        void display() {
            cout << "Bank Name: " << b_Name << endl;
            cout << "Branch: " << Branch << endl;
            cout << "IFSC: " << IFSC << endl;
            cout << "Account Holder Name: " << name << endl;
            cout << "Account Number: " << No << endl;
            cout << "Initial Deposit: " << initial_deposit << endl;
            cout << "Account Type: " << account_type << endl;
        }
};

int main() {

    bank obj;

    obj.open_account("Shaik Shaiksha Vali", 35243268791, 1000.0, "Minimum Balance");
    obj.display();

    cout << "\n------------------------\n" << endl;

    obj.open_account("Jhone", 812507887281);
    obj.display();

    return 0;
}



******************************************************************************object creation*****************************************************************************



#include <iostream>
using namespace std;
class test
{
    int a;
    public:
        void insert(int x)
        {
            a=x;
        }
        void display()
        {
            cout<<a<<endl;
        }
};
int main() {
  test obj;
  obj.insert(10);
  obj.display();

    return 0;
}



**********************************************************************Default Constractor**********************************************************************************



// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class test
{
    int a,b;
    public:
         test()
        {
            a=10;
            b=20;
        }
        void display()
        {
            cout<<"a="<<a<<" "<<"b="<<b<<endl;
        }
};
int main() {
  test obj;
  obj.display();

    return 0;
}




***********************************************************************Constructor All*******************************************************************



// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class test
{
    int a,b;
    public:
         test()
        {
            cout<<"Default Constructor"<<endl;
            a=10;
            b=20;
        }
        test (int x)
        {
            a=x;
            cout<<"Paramiterized Constructor"<<endl;
            
        }
         test (int x,int y)
        {
            a=x;
            b=y;
            cout<<"Two Paramiterized Constructor"<<endl;
            
        }
        void display()
        {
            cout<<"a="<<a<<" "<<"b="<<b<<endl;
        }
};
int main() {
  test obj;
  obj.display();
  test obj1(30);
  obj1.display();
  test obj3(50,60);
  obj3.display();

    return 0;
}



***********************************************************************Constructor With display namespace*******************************************************



// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class test
{
    int a,b;
    public:
         test (int x,int y)
        {
            a=x;
            b=y;
            cout<<"Two Paramiterized Constructor"<<endl;
            
        }
        void display();
};
void test::display()
        {
            cout<<"a="<<a<<" "<<"b="<<b<<endl;
        }
int main() {
  test obj3(50,60);
  obj3.display();

    return 0;
}



****************************************************************Constructor With namespace constructor *******************************************************************



// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class test
{
    int a,b;
    public:
         test (int x,int y);  
        void display();
};
test::test (int x,int y)
        {
            a=x;
            b=y;
            cout<<"Two Paramiterized Constructor"<<endl;
            
        }
void test::display()
        {
            cout<<"a="<<a<<" "<<"b="<<b<<endl;
        }
int main() {
  test obj3(50,60);
  obj3.display();

    return 0;
}



**************************************************************************************Destroctor************************************************************************



// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class test
{
    int a,b;
    public:
         test (int x,int y);  
        void display();
        ~test()
        {
            cout<<"Destroctor";
        }
};
test::test (int x,int y)
        {
            a=x;
            b=y;
            cout<<"Two Paramiterized Constructor"<<endl;
            
        }
void test::display()
        {
            cout<<"a="<<a<<" "<<"b="<<b<<endl;
        }
int main() {
  test obj3(50,60);
  obj3.display();

    return 0;
}




************************************************************************************************Number Array user input with DAM**************************************************




#include <iostream>
using namespace std;
int main() {
   
  //cout<<"Enter the size "<<endl;
  //cin>>a;
  int a=5;
  //int arr[a];
  int *ptr=new int(a);
  for(int i=0;i<a;i++)
  {
      cin>>*(ptr+i);
  }
  for(int i=0;i<a;i++)
  {
      cout<<*(ptr+i)<<endl;
  }
  delete []ptr;

    return 0;
}




*****************************************************************************************DAM Constructor and Destroctor*********************************************************




// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class test
{
    public:
            test()
            {
                cout<<"Constructor"<<endl;
            }
            ~test()
            {
                cout<<"Destructor"<<endl;
            }
};
int main() {
    test *t=new test;
    delete t;

    return 0;
}





*******************************************************size 5 DAM Constroctor and Destroctor****************************************************************************


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class test
{
    public:
            test()
            {
                cout<<"Constructor"<<endl;
            }
            ~test()
            {
                cout<<"Destructor"<<endl;
            }
};
int main() {
    
    test *t=new test[5];
    delete []t;
    
    return 0;
}



***************************************************************************************String user input**********************************************************************




// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    string str;
    getline(cin,str);
    cout<<str<<endl;

    return 0;
}



***************************************************************************String length ********************************************


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    string str;
    getline(cin,str);
    cout<<str.size()<<endl;

    return 0;
}



**************************************************************************String Copy*************************************************************




// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    string str;
    getline(cin,str);
    string str1;
    str1=str;
    cout<<str1<<endl;

    return 0;
}




**********************************************************************************String Concad*******************************************




// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    string str;
    getline(cin,str);
    string str1;
    getline(cin,str1);
    str=str+" "+str1;
    cout<<str<<endl;

    return 0;
}




*********************************************************************String Compare*****************************************************



#include <iostream>
using namespace std;
int main() {
    string str;
    cout<<"Enter First String: ";
    getline(cin,str);
    cout<<"Enter Second String: ";
    string str1;
    getline(cin,str1);
    
    if(str1==str)
        cout<<"Same"<<endl;
    else
        cout<<"Not same"<<endl;

    return 0;
}



*****************************************************************************String Palindrome******************************************************************



#include <iostream>
using namespace std;
int main() {
    string str,str1;
    int j=1;
    cout<<"Enter First String: ";
    getline(cin,str);
    int len=str.size();
    for(int i=0;i<len/2;i++)
    {
        if(str[i]==str[len-i-1])
        {
            j=0;
            
        }
        else
        {
            j=1;
        }
    }
    if(j==0)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not Palindrome"<<endl;
    }
    
        

    return 0;
}




******************************************************************************String Reverse and Plindrome*********************************************************************************




#include <iostream>
using namespace std;
int main() {
    string str,str1,str2;
    int j=1,c=1;
    cout<<"Enter First String: ";
    getline(cin,str);
    str2=str;
    int len=str.size();
    for(int i=0;i<len;i++)
    {
        str1[i]=str[len-1-i];
        cout<<str[len-1-i];
    }
    for(int i=0;i<len;i++)
    {
        if(str2[i]==str1[i])
        {
        c=0;
        }
        else
        {
        c=1;
        break;
        }
    }
    if(c)
    {
        cout<<"\nNot palindrome"<<endl;
    }
    else
    {
        cout<<"\nPalindrome"<<endl;
    }
    

    return 0;
}











********************************************************************************Caluculator Menu*****************************************************



#include <iostream>
using namespace std;

int main() {
    int your_choice;
    cout << "Simple Calculator Menu Display" << endl;
    cout << "\n********************************" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;

    cout << "Enter your choice (1-5): ";
    cin >> your_choice;

    switch (your_choice) {
        case 1:
            cout << "You chose to addition." << endl;
            break;
        case 2:
            cout << "You chose to subtraction." << endl;
            break;
        case 3:
            cout << "You chose to multiplication." << endl;
            break;
        case 4:
            cout << "You chose to division." << endl;
            break;
        case 5:
            cout << "Exiting the calculator.....Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice! Please enter a number between 1 and 5." << endl;
            break;
    }

    return 0;
}






************************************************************************************* 
