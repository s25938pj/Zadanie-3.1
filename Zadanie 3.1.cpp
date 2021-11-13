#include <iostream>
#include <iomanip>
using namespace std;

void suma(double x, double y)
{
    double wynik = 0;
    wynik = x + y;
    cout << "Suma liczb " << x << " i " << y << " wynosi " << setprecision(2) << wynik << endl;
}
void roznica(double x, double y)
{
    double wynik = 0;
    wynik = x - y;
    cout << "Roznica liczb " << x << " i " << y << " wynosi " << setprecision(2) << wynik << endl;
}
void iloczyn(double x, double y)
{
    double wynik = 0;
    wynik = x * y;
    cout << "Iloczyn liczb " << x << " i " << y << " wynosi " << setprecision(2) << wynik << endl;
}
void iloraz(double x, double y)
{
    double wynik = 0;
    wynik = x / y;
    cout << "Iloraz liczb " << x << " i " << y << " wynosi " << setprecision(2) << wynik << endl;
}

int main()
{
    double x, y;
    cout << "Wprowadz pierwsza liczbe ";
    cin >> x;
    cout << endl;
    cout << "Wprowadz druga liczbe ";
    cin >> y;
    cout << endl;

    suma(x, y);
    roznica(x, y);
    iloczyn(x, y);
    iloraz(x, y);

    return 0;
}
