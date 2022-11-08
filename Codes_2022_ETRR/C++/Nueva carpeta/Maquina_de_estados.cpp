#include <iostream>
using namespace std;

int Cafe_Elegido;

void Latte(void)
{
    cout << "El latte tiene los siguiente ml de leche y cafe:\n";
    cout << "- 80 ml de elche\n";
    cout << "- 40 ml de cafe\n";
}
void Americano(void)
{
    cout << "El americano tiene los siguiente ml de agua y cafe\n";
    cout << "- 30 ml de cafe\n";
    cout << "- 40 ml de agua\n";
}
void Lagrima(void)
{
    cout << "El lagrima tiene los siguiente ml de leche y cafe\n";
    cout << "- 90 ml de leche\n";
    cout << "- 5 ml de cafe\n";
}
void Negro(void)
{
    cout << "El negro tiene los siguiente ml de cafe\n";
    cout << "- 100 ml de cafe\n";
}
void Cortado(void)
{
    cout << "El cortado tiene los siguiente ml de leche y cafe\n";
    cout << "- 50 ml de leche\n";
    cout << "- 50 ml de cafe\n";
}

void (*pAlberto) (void);

int main()
{
    cout << "Bienvenido a la maquina expendedora de Nescafe \nSeleccione la tecla correspondiente a cada cafe\n";
    cout << "A continuación le vamos a mostrar la cantidad de cada ingrediente para hacer cada tipo de cafe: \n";
    cout << "- Latte(1)\n- Americano(2)\n- Negro(4)\n- Cortado(5)\n";
    cin >> Cafe_Elegido;
    
    switch(Cafe_Elegido)
    {
        case 1:
        pAlberto = Latte;
        pAlberto();
        break;
        
        case 2:
        pAlberto = Americano;
        pAlberto();
        break;
        
        case 3:
        pAlberto = Lagrima;
        pAlberto();
        break;
        
        case 4:
        pAlberto = Negro;
        pAlberto();
        break;
        
        case 5:
        pAlberto = Cortado;
        pAlberto();
        break;
    }
    return 0;
}
