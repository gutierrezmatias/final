#include <iostream>
#include <fstream>
#include <string>
#include "mosca.h"
#include "personaje.h"
using namespace std;
int main()
{
    mosca moscas[25];
    personaje personajes[8];
    int i=0;
    int maxmoscas = 0;
    int maxpersonajes = 0;
    string line;
    ifstream filemmoscas ("moscas.txt");
    if (filemmoscas.is_open())
    {

        while ( getline (filemmoscas,line) )
        {
            string xMosca = line.substr(0,line.find(" "));
            string yMosca = line.erase(0,line.find(" "));
            cout << "Mosca: " << i << '\n';
            cout << stod(xMosca) << '\n';
            cout << stod(yMosca) << '\n';
            moscas[i].set(stod(xMosca),stod(yMosca));
            i++;

        }
        maxmoscas=i;
        filemmoscas.close();
    }

    ifstream filepersonajes ("personajes.txt");
    if (filepersonajes.is_open())
    {
        i=0;
        while ( getline (filepersonajes,line) )
        {
            string id = line.substr(0,line.find(" "));
            line = line.erase(0,line.find(" ")+1);
            string x = line.substr(0,line.find(" "));
            line = line.erase(0,line.find(" ")+1);
            string w = line.substr(0,line.find(" "));
            line = line.erase(0,line.find(" ")+1);
            string y = line.substr(0,line.find(" "));
            line = line.erase(0,line.find(" ")+1);
            string vel = line.substr(0,line.find(" "));
            line = line.erase(0,line.find(" ")+1);
            string vidas = line.substr(0,line.find(" "));
            line = line.erase(0,line.find(" ")+1);

            personajes[i].id=id;
            personajes[i].x=stod(x);
            personajes[i].w=stod(w);
            personajes[i].y=stod(y);
            personajes[i].vel=stoi(vel);
            personajes[i].vidas=stoi(vidas);
            i++;

        }
        maxpersonajes=i;
        filepersonajes.close();
    }

    int j= 0;
    for (j=0; j<5; j++)
    {
        for (i= 0; i<maxmoscas; i++)
        {
            moscas[i].move();
            cout << "Mosca: " << i << endl;
            cout << moscas[i].getX() << " | ";
            cout << moscas[i].getY() << '\n';
        }
        for (i= 0; i<maxpersonajes; i++)
        {
            personajes[i].move();
            cout << "Personaje: " << i << endl;
            cout << personajes[i].id << " | ";
            cout << personajes[i].x << " | ";
            cout << personajes[i].w << " | ";
            cout << personajes[i].y << " | ";
            cout << personajes[i].vel << " | ";
            cout << personajes[i].vidas << '\n';
        }
    }
    return 0;
}
