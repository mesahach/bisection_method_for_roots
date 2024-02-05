#ifndef MTECHMTH_H
#define MTECHMTH_H
#include <string>


class MtechMth
{
    public:
        MtechMth();
        ~MtechMth();
        double sayDoble(double num);
        double getIntv1();
        double getIntv2();
        double createInterval3();
        double createInterval2();
        double createInterval1();
        double question3(double x);
        double question2(double x);
        double question1(double x);
        void setQestion2Type(std::string& func);
        double question1(double a,int powerA, double num);
        double logQuest(double logData);

        void doItration3(double interv1, double interv2);
        void doItration2(double interv1, double interv2);
        void doItration1(double interv1, double interv2);

        void setA(double a);
        void setAPow(int powerA);
        void setB(double b);
        void setBPow(int powerB);
        void setC(double c);
        void setX(double x);
        void setTotal(int total);
        void setIntervl(double interv1);
        void setInterv2(double interv2);
    protected:

    private:
    int interv1;
    int interv2;
    double a;
    int powerA;
    double b;
    int powerB;
    double c;
    double x;
    int total = 1;
    std::string question2Type;

};

#endif // MTECHMTH_H
