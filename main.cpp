#include <iostream>
#include <math.h>
#include <string>
#include "MtechMth.h"

using namespace std;

int main()
{
    int n = 0, num = 0, num2 = 1, point = 1, todo = 2, total, powerA, powerB, powerC, parameters;
    double interv1, interv2, a, b, c, quest;
    char ans;
    string func = "null";
    //double num = 546.00;

    MtechMth ObjMth;
    //cout << ObjMth.sayDoble(num)<< endl;
    string calculate = "Nothing to calculate";

    cout << "Bisection method for determining the roots of the equation f(x) = 0" << endl;
    cout << "To find the interval we use the intermediate theorem which states that f(a) . f(b) < 0" << endl<< endl;
    //cout << cos(0.5) << endl;
    cout << "For log arguments Xlog10 x + b = 0 press 1\nFor ax - bx = 0 press 2\nFor ax - bx + c = 0 press 3\n" << endl;
    cin >> parameters;

    if(parameters == 1){
        cout << "this function is only for log arguments Xlog10 x + a = 0" << endl;
        cout << "Provide value for a."<<endl;
        cin >> a;

        //cout << "Provide value for b."<<endl;
        //cin >> b;

        ObjMth.setA(a);
        //ObjMth.setB(b);

        cout << "Do you have the intervals? y/n."<<  endl;
        cin >> ans;

    if(ans == 'n' || ans == 'N') {
    ObjMth.createInterval1();
    ans = 'x';
    }else{
    cout << "Provide 1st interval?" << endl;
    cin >> interv1;
    ObjMth.setIntervl(interv1);

    cout << "Provide 2nd interval?" << endl;
    cin >> interv2;
    ObjMth.setInterv2(interv2);
    }

    cout << "How many iterations."<<endl;
    cin >> total;
    ObjMth.setTotal(total);
    ObjMth.doItration1(ObjMth.getIntv1(), ObjMth.getIntv2());

    }else if(parameters == 2) {
    cout << "2 parameters ax - bx = 0" << endl;

    cout << "Provide value for a."<<endl;
    cin >> a;
    cout << "Power of x."<<endl;
    cin >> powerA;

    cout << "Provide value for b."<<endl;
    cin >> b;
    //cout << "Power of x."<<endl;
    //cin >> powerB;
    c = 1;

    ans = 'x';
    cout << "Does your question have any cos , sin or tan? y/n" << endl;
    cin >> ans;
    if(ans == 'y' || ans == 'Y') {
     cout << "what does it contain?" <<endl;
     cin >> func;
    }
    ObjMth.setQestion2Type(func);

    cout << "Do you have the intervals? y/n."<<  endl;
    cin >> ans;

    ObjMth.setA(a);
    ObjMth.setAPow(powerA);
    ObjMth.setB(b);
    //ObjMth.setBPow(powerB);
    //ObjMth.setC(c);
    if(ans == 'n' || ans == 'N') {
    ObjMth.createInterval2();
    ans = 'x';
    }else{
    cout << "Provide 1st interval?" << endl;
    cin >> interv1;
    ObjMth.setIntervl(interv1);

    cout << "Provide 2nd interval?" << endl;
    cin >> interv2;
    ObjMth.setInterv2(interv2);
    }

    cout << "How many iterations."<<endl;
    cin >> total;
    ObjMth.setTotal(total);
    ObjMth.doItration2(ObjMth.getIntv1(), ObjMth.getIntv2());

    powerC = 1;
    }else if(parameters == 3) {
    cout << "3 parameters e.g ax - bx + c = 0" << endl;

    cout << "Provide value for a."<<endl;
    cin >> a;
    cout << "Power of x."<<endl;
    cin >> powerA;

    cout << "Provide value for b."<<endl;
    cin >> b;

    cout << "Provide value for c."<<endl;
    cin >> c;

    cout << "Do you have the intervals? y/n."<<  endl;
    cin >> ans;

    calculate = "quadratic";

    ObjMth.setA(a);
    ObjMth.setAPow(powerA);
    ObjMth.setB(b);
    //ObjMth.setBPow(powerB);
    ObjMth.setC(c);
    if(ans == 'n' || ans == 'N') {
    ObjMth.createInterval3();
    ans = 'x';
    }else{
    cout << "Provide 1st interval?" << endl;
    cin >> interv1;
    ObjMth.setIntervl(interv1);

    cout << "Provide 2nd interval?" << endl;
    cin >> interv2;
    ObjMth.setInterv2(interv2);
    }
    cout << "How many iterations."<<endl;
    cin >> total;
    ObjMth.setTotal(total);

    ObjMth.doItration3(ObjMth.getIntv1(), ObjMth.getIntv2());
    }

    return 0;
}
