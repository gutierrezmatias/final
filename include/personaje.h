#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <string>

class personaje
{
    public:
        personaje();
        void move();
        virtual ~personaje();
    std::string id;
    double x;
    double w;
    double y= 0;
    double h;
    int vel;
    int vidas;
    double distancia;
    protected:

    private:

};

#endif // PERSONAJE_H
