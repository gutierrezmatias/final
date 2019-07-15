#ifndef MOSCA_H
#define MOSCA_H


class mosca
{
    public:
        mosca();
        void set(double x,double y);
        double getX();
        double getY();
        void move();
        virtual ~mosca();
    double x;
    double y;
    double w = 1;
    double h = 1;
    int vel=-10;
    protected:

    private:

};

#endif // MOSCA_H
