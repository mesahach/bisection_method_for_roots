#include "MtechMth.h"
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void MtechMth::setA(double a)
{
    this->a = a;
}
void MtechMth::setAPow(int powerA)
{
    this->powerA = powerA;
}
void MtechMth::setB(double b)
{
    this->b = b;
}
void MtechMth::setBPow(int powerB)
{
    this->powerB = powerB;
}
void MtechMth::setC(double c)
{
    this->c = c;
}
void MtechMth::setX(double x)
{
    this->x = x;
}
void MtechMth::setTotal(int total)
{
    this->total = total;
}
void MtechMth::setIntervl(double interv1)
{
    this->interv1 = interv1;
}
void MtechMth::setInterv2(double interv2)
{
    this->interv2 = interv2;
}

MtechMth::MtechMth()
{
//    const std::string MtechMth::question2Type;
}

MtechMth::~MtechMth()
{
    //ctor
}

double MtechMth::sayDoble(double num)
{
    double total = num / 2.0;
    return total;
}

double MtechMth::getIntv1()
{
    return interv1;
}

double MtechMth::getIntv2()
{
    return interv2;
}

double MtechMth::question3(double x)
{
    double equl;
    equl = ((this->a * (pow(x, this->powerA))) + (this->b * x) + (this->c));
    return equl;
}

void MtechMth::setQestion2Type(std::string& func)
{
    this->question2Type = func;
}

double MtechMth::question2(double x)
{
    double equ1;
    //cout << question2Type<< endl;
    if(this->question2Type == "cos"){
        equ1 = ((this->a * (pow(x, this->powerA))) + (this->b * cos(x *3.14/180)));
    }else if(question2Type == "sin"){
        equ1 = ((this->a * (pow(x, this->powerA))) + (this->b * sin(x*3.14/180)));
    }else if(question2Type == "tan"){
        equ1 = ((this->a * (pow(x, this->powerA))) + (this->b * tan(x*3.14/180)));
    }else{
    equ1 = ((this->a * (pow(x, this->powerA))) + (this->b * x));
    cout << "Your function is not defined" <<endl;
    }
    return equ1;
}

double MtechMth::question1(double x)
{
    double equ1;
    equ1 = log10(x) + this->a;
    return equ1;
}

double MtechMth::logQuest(double logData)
{

}

double MtechMth::createInterval3()
{
        int num = 0, num2 = 1;
        double imd = 0.0, equ11, equ12;
    cout << "Finding intervals" << endl;

    do{
        num++;
        num2++;
        cout << "Let  " << num << ", " << num2 << "  be [a, b]" << endl << endl;

        equ11 = question3(num);
        cout << "f(a) = " << equ11 << endl;

        equ12 = question3(num2);
        cout << "f(b) = " << equ12 <<  endl;
        imd =  (equ11 * equ12);
        cout << "f(a).f(b) = " << imd << endl << endl;
        this->interv1 = num;
        this->interv2 = num2;
        if(num > 100){
            cout <<" Sorry the intervals can`t be fund please review your question"<< endl;
            imd = -1000000;
        }
    }
    while(imd >= 0);
}

double MtechMth::createInterval2()
{
        int num = -1, num2 = 0;
        double imd = 0.0, equ11, equ12;
    cout << "Finding intervals" << endl;

    do{
        num++;
        num2++;
        cout << "Let  " << num << ", " << num2 << "  be [a, b]" << endl << endl;

        equ11 = question2(num);
        cout << "f(a) = " << equ11 << endl;

        equ12 = question2(num2);
        cout << "f(b) = " << equ12 <<  endl;
        imd =  (equ11 * equ12);
        cout << "f(a).f(b) = " << imd << endl << endl;
        this->interv1 = num;
        this->interv2 = num2;
        if(num > 100){
            cout <<" Sorry the intervals can`t be fund please review your question"<< endl;
            imd = -1000000;
        }
    }
    while(imd >= 0);
}

double MtechMth::createInterval1()
{
        int num = -1, num2 = 0;
        double imd = 0.0, equ11, equ12;
    cout << "Finding intervals" << endl;

    do{
        num++;
        num2++;
        cout << "Let  " << num << ", " << num2 << "  be [a, b]" << endl << endl;

        equ11 = question1(num);
        cout << "f(a) = " << equ11 << endl;

        equ12 = question1(num2);
        cout << "f(b) = " << equ12 <<  endl;
        imd =  (equ11 * equ12);
        cout << "f(a).f(b) = " << imd << endl << endl;
        this->interv1 = num;
        this->interv2 = num2;
        if(num > 100){
            cout <<" Sorry the intervals can`t be fund please review your question"<< endl;
            imd = -1000000;
        }
    }
    while(imd >= 0);
}

void MtechMth::doItration3(double interv1, double interv2)
{
    int point = 0, n = 0, todo = 1;
    double mid, itrate, var_a, var_b, a, b;
    do{
        point += 1;

        mid = ((interv1 + interv2) / 2.0);

        a = question3(interv1);
        cout << "  f(a) = " << a << endl;
        b = question3(interv2);
        cout << "  f(b) = " << b << endl;

    cout << "Where a = " << interv1 << " f(a) = " << a << " and b = " << interv2 << " f(b) = " << b << endl;
    cout << "The mid point is " << mid << endl;

    itrate = question3(mid);
    cout << "f(m" << point << ") = " << itrate << " Where n = " << n << endl;

    cout << "f(a) * f(m" << point << ") = " << a << " * " << itrate << " = ";
    var_a = (a * itrate);
    cout <<  var_a << endl;

    cout << "f(b) * f(m" << point << ") = " << b << " * " << itrate << " = ";
    var_b = (b * itrate);
    cout << var_b << endl;

    if(var_a < 0) {
    //*this->interv1 = this->interv1;
    interv2 = mid;
    //this->setInterv2(mid);
    cout << "a < 0\n";
    }else if(var_b < 0) {
    //*this->interv2 = this->interv2;
    interv1 = mid;
    //this->setIntervl(mid);
    cout << "   b < 0\n";
    }

    n += 1;
    cout << "\n The current interval is [ " << interv1 << ", " << interv2 << " ] where n = " << n << endl << endl;

    todo++;
    }
    while(todo <= this->total);
}

void MtechMth::doItration2(double interv1, double interv2)
{
    int point = 0, n = 0, todo = 1;
    double mid, itrate, var_a, var_b, a, b;
    do{
        point += 1;

        mid = ((interv1 + interv2) / 2.0);

        a = question2(interv1);
        cout << "  f(a) = " << a << endl;
        b = question2(interv2);
        cout << "  f(b) = " << b << endl;

    cout << "Where a = " << interv1 << " f(a) = " << a << " and b = " << interv2 << " f(b) = " << b << endl;
    cout << "The mid point is " << mid << endl;

    itrate = question2(mid);
    cout << "f(m" << point << ") = " << itrate << " Where n = " << n << endl;

    cout << "f(a) * f(m" << point << ") = " << a << " * " << itrate << " = ";
    var_a = (a * itrate);
    cout <<  var_a << endl;

    cout << "f(b) * f(m" << point << ") = " << b << " * " << itrate << " = ";
    var_b = (b * itrate);
    cout << var_b << endl;

    if(var_a < 0) {
    //*this->interv1 = this->interv1;
    interv2 = mid;
    //this->setInterv2(mid);
    cout << "a < 0\n";
    }else if(var_b < 0) {
    //*this->interv2 = this->interv2;
    interv1 = mid;
    //this->setIntervl(mid);
    cout << "   b < 0\n";
    }

    n += 1;
    cout << "\n The current interval is [ " << interv1 << ", " << interv2 << " ] where n = " << n << endl << endl;

    todo++;
    }
    while(todo <= this->total);
}

void MtechMth::doItration1(double interv1, double interv2)
{
    int point = 0, n = 0, todo = 1;
    double mid, itrate, var_a, var_b, a, b;
    do{
        point += 1;

        mid = ((interv1 + interv2) / 2.0);

        a = question1(interv1);
        cout << "  f(a) = " << a << endl;
        b = question1(interv2);
        cout << "  f(b) = " << b << endl;

    cout << "Where a = " << interv1 << " f(a) = " << a << " and b = " << interv2 << " f(b) = " << b << endl;
    cout << "The mid point is " << mid << endl;

    itrate = question1(mid);
    cout << "f(m" << point << ") = " << itrate << " Where n = " << n << endl;

    cout << "f(a) * f(m" << point << ") = " << a << " * " << itrate << " = ";
    var_a = (a * itrate);
    cout <<  var_a << endl;

    cout << "f(b) * f(m" << point << ") = " << b << " * " << itrate << " = ";
    var_b = (b * itrate);
    cout << var_b << endl;

    if(var_a < 0) {
    //*this->interv1 = this->interv1;
    interv2 = mid;
    //this->setInterv2(mid);
    cout << "a < 0\n";
    }else if(var_b < 0) {
    //*this->interv2 = this->interv2;
    interv1 = mid;
    //this->setIntervl(mid);
    cout << "   b < 0\n";
    }

    n += 1;
    cout << "\n The current interval is [ " << interv1 << ", " << interv2 << " ] where n = " << n << endl << endl;

    todo++;
    }
    while(todo <= this->total);
}
