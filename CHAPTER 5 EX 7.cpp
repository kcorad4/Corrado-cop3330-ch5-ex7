
//COP 3330 KYLE CORRADO

#include<iostream>
#include<cmath>
using namespace std;

void roots(int a, int b, int c){
    float r1,r2,real,imaginary;
    int disc = (b*b)-(4*a*c);

    if(disc == 0){
        r1 =(float)(-b + sqrt(disc))/(2*a);
        cout << "The roots of the quadratic equation are real and same.\nThe roots are r1=r2="<<r1 << endl;
        }
    else if(disc>0){
        r1 =(float)(-b+sqrt(disc))/(2*a);
        r2 =(float)(-b-sqrt(disc))/(2*a);
        cout << "The roots of the quadratic equation are real and different.\nThe roots are r1="<<r1<<" and r2="<<r2 << endl;
        }
    else{
        real =(float) (-b/(2*a));
        imaginary =(float)(sqrt(-disc)/(2*a));
        cout << "The roots of the quadratic equation are complex and different.\nThe roots are r1 = "<<real<<"+"<<imaginary<<"i"<< endl;
        cout << "r2 = " << real << "-" << imaginary << "i" << endl;
    }
}

int main()
{
    cout<<"The quadratic equation is of the form ax^2+bx+c \n";
    int a,b,c;
    cout<<"Enter the values for a , b and c for the quadratic equation:";
    cin>>a>>b>>c;
    roots(a,b,c);
    return 0;
}
