#include <iostream>
#include <cstdlib>

using namespace std;

void NewLine()
{
    cout << "\n";
}
void NewLines(int count)
{
    for (int i=1; i<=count; i++)
    {
        cout << "\n";
    }
}
int WriteBiggerNumber(int x, int y)
{
    if (x>y)
    {
        cout << "Wiekszy jest x: " << x << endl;
        cout << x << " > " << y << endl;
        return x;
    }
    else
    {
        cout << "Wiekszy jest y: " << y << endl;
        cout << y << " > " << x << endl;
        return y;
    }
}
int Multiply(int x, int y)
{
    return x*y;
}

int main()
{
    /*Zadanie 1.1 Zadeklarowa� zmienne typu int, float, char. Przypisa� do nich warto��, wy�wietli� je na ekran.*/
    int x=10; float y=10.5; char zn='a';
    cout << x << endl;
    cout << y << endl;
    cout << zn << endl;
    /*Zadanie 1.2 Wy�wietli� zmienn� typu int na ekran. Nale�y u�y� metody printf i konstrukcji %d*/
    printf("%d", x);
    /*Zadanie 1.3 Pobra� od u�ytkownika liczb� x. Wy�wietli� kwadrat liczby x.*/
    cout << endl << "Podaj liczbe: "; cin >> x; cout << "Kwadrat liczby wynosi: " << x*x << endl;
    /*Zadanie 1.4 Zapozna� si� z instrukcjami warunkowymi (if, else if, else oraz switch). Pobra� od u�ywkownika liczb� i wy�wietli� informacj�, czy jest ona: mniejsza, wi�ksza, czy r�wna 0.*/
    int h;
    cout << "Podaj liczbe: "; cin >> h;
    if (h>0)
        cout << "Podana liczba jest wieksza od zera." << endl;
    else if (h<0)
        cout << "Podana liczba jest mniejsza od zera." << endl;
    else
        cout << "Podana liczba jest rowna zero." << endl;
    /*Zadanie 1.5 Pobra� ud u�ytkownika 3 liczby (x1, x2, x3). Wy�wietli� informacj�, kt�ra z tych liczb jest najwi�ksza.*/
    int x1,x2,x3,najwieksza;
    cin >> x1 >> x2 >> x3;
    najwieksza=x1;
    if (x2>najwieksza) najwieksza=x2;
    if (x3>najwieksza) najwieksza=x3;
    cout << "Najwieksza liczba to: " << najwieksza << endl;
    /*Zadanie 1.6 Napisa� prosty kalkulator. Nale�y pobra� od u�ytkownika 2 liczby oraz operator (jeden z czterech: mno�enie, dzielenie, dodawanie,
odejmowanie). Wymagane jest utworzenie prostego menu u�ytkownika. Uwaga - nale�y pami�ta� o u�amkach (1/3 powinno da� 0.33, a nie
0)*/
    double m,n;
    int odp;
    cout << "Podaj 1 liczbe: "; cin >> m;
    cout << "Podaj 2 liczbe: "; cin >> n;
    cout << "--- MENU KALKULATORA ---" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie" << endl;
    cout << "Ktory operator wybierasz? "; cin >> odp;
    switch (odp)
    {
        case 1: cout << "Wynik dodawania to: " << m+n;          break;
        case 2: cout << "Wynik odejmowania to: " << m-n;        break;
        case 3: cout << "Wynik mnozenia to: " << m*n;           break;
        case 4: cout << "Wynik dzielenia to: " << m/n;          break;
        default: cout << "Blad, niepoprawna liczba" << endl;    break;
    }
    cout << endl;

    /*Zadanie 2.1 Zapozna� si� z p�tl� while. P�tla ta s�u�y do wielokrotnego wykonania fragmentu kodu przez NIEZNAN� Z G�RY ilo�� razy. P�tla
wykonuje si� zawsze, je�li warunek jest prawdziwy (ewaluowany do true). Napisa� p�tl�, w kt�ej u�ytkownik podaje liczb� x. Nale�y
wy�wietli� t� liczb�. Je�eli u�ytkownik poda 0, nale�y zako�czy� program.*/
    {
        int x;
        while (x!=0)
        {
            cout << "Podaj liczbe x: "; cin >> x;
            cout << "Wartosc 'x' wynosi: " << x << endl;
        }

    }
    /*Zadanie 2.2 Przerobi� kalkulator z zadania 1.6. Teraz po ka�dym dzia�aniu program powinien spyta� u�ytkownika, czy ten chce powt�rzy�
wszystko od pocz�tku. Je�li tak - restartujemy kalkulator i zaczynamy od nowa. Je�li nie - ko�czymy program.*/
    {
        double m,n;
        int odp1;
        char odp2;
        do
        {
        cout << "Podaj 1 liczbe: "; cin >> m;
        cout << "Podaj 2 liczbe: "; cin >> n;
        cout << "--- MENU KALKULATORA ---" << endl;
        cout << "1. Dodawanie" << endl;
        cout << "2. Odejmowanie" << endl;
        cout << "3. Mnozenie" << endl;
        cout << "4. Dzielenie" << endl;
        cout << "Ktory operator wybierasz? ";
        cin >> odp1;
        switch (odp1)
        {
        case 1: cout << "Wynik dodawania to: " << m+n << endl;              break;
        case 2: cout << "Wynik odejmowania to: " << m-n << endl;            break;
        case 3: cout << "Wynik mnozenia to: " << m*n << endl;               break;
        case 4: cout << "Wynik dzielenia to: " << m/n << endl;              break;
        default: cout << "Blad, niepoprawna liczba" << endl;                break;
        }
        cout << "Czy chcesz powtorzyc dzialanie kalkulatora? T/N: "; cin >> odp2;
        } while (odp2=='T'||odp2=='t');
        cout << endl;
    }
    /*Zadanie 2.3. Pobra� od u�ytkownika liczb� x. Nale�y wy�wietli� wszystkie kolejne pot�gi liczby x. Zako�czy� program, kiedy liczba przekroczy 100
000.*/
    {
        int x, wynik;
        cout << "Podaj x: "; cin >> x;
        wynik=x;
        while (x<100000)
        {
            x*=wynik;
            cout << x << endl;
        }
    }
    /*Zadanie 2.4. Pobra� od u�ytkownika liczb� x. Je�li liczba jest niedodatnia - nale�y zako�czy� program. Nast�pnie nale�y wy�wietla� kolejno (w
nowej linii) wszystkie liczby mniejsze od x, a� osi�gni�te zostanie 0.*/
    {
        int x;
        cout << "Podaj x: "; cin >> x;
        while (x > 0)
            {
                x--;
                cout << x << endl;
            }
    }
    /*Zadanie 2.5. Zapozna� si� z instrukcjami continue; i break;. Pierwsza s�u�y do zako�czenia iteracji i przej�cia do nast�pnej, a druga natychmiast
ko�czy p�tl�. Przerobi� program z zadania 1.4, aby wy�wietla� tylko parzyste liczby (u�y� if oraz continue). Je�li liczba wynosi 40, nale�y
wyj�� z p�tli i zako�czy� program.*/
    {
        int x;
        cout << "Podaj x: "; cin >> x;
        while (x > 0)
            {
                if (x>=40) break;
                x--;
                if (x%2!=0) continue;
                else
                {
                    cout << x << endl;
                }
            }
    }
    /*Zadanie 2.6 Zapozna� si� z p�tl� for. P�tla s�u�y do wykonania danego fragmentu kodu ZNAN� Z G�RY okre�lon� ilo�� razy. Uwaga - ka�d� p�tl�
for mo�na zast�pi� p�tl� while i wzajemnie. Zwyczajowo obowiazuje zasada, �e je�li ilo�� iteracji jest znana - u�ywamy for, a je�li nie jest
znana (zale�y od u�ytkownika lub jakiego� stanu zewn�trznego) - u�ywamy p�tli while. P�tla for sk�ada si� z: ZMIENNEJ ITERACYJNEJ,
czyli stanu pocz�tkowego p�tli, np. int i = 0. Nast�pnie WARUNKU ZAKO�CZENIA P�TLI, np. i<10. Nast�pnie OPERACJI WYKONYWANEJ
PO KA�DEJ ITERACJI - zazwyczaj jest to zwi�kszenie iteratora o 1, czyli i = i + 1, b�d� w skr�cie i++. Napisa� p�tl� for, kt�ra wy�wietli cyfry
od 0 do 9.*/
    {
        for (int i=0; i<10; i++)
        {
            cout << i << endl;
        }
    }
    /*Zadanie 2.7 Pobra� od u�ytkownika liczby x i y. Zak�adamy, �e y > x (zawsze, nie musimy tego sprawdza�). Za pomoc� p�tli for wypisa� liczby
mi�dzy x a y (do przemy�lenia - co jest stanem pocz�tkowym, a co warunkiem zako�czenia p�tli?)*/
    {
        int x,y;
        cout << "Podaj x: "; cin >> x;
        cout << "Podaj y: "; cin >> y;
        for (int i=x+1; i<y; i++)
        {
            cout << i << endl;
        }
    }
    /*Zadanie 2.8 Pobra� od u�ytkownika liczb� x. Za pomoc� p�tli for wypisa� wszystkie liczby mniejsze od x, ale wi�ksze ni� 0.*/
    {
        int x;
        cout << "Podaj x: "; cin >> x;
        for (int i=x-1; i>0; i--)
        {
            cout << i << endl;
        }
    }
    /*Zadanie 2.9 Pobra� od u�ytkownika liczb� x. Za pomoc� p�tli for wypisywa� CO TRZECI� liczb� wi�ksz� od x. P�tla powinna si� zako�czy�, je�li
liczba przekroczy 100. Uwaga - prosz� nie u�ywa� operacji continue i break, a sterowa� tylko parametrami p�tli.*/
    {
        int x;
        cout << "Podaj x: "; cin >> x;
        for (int i=x+1; i<100; i=i+3)
        {
            cout << i << endl;
        }
    }
    /*Zadanie 3.1 Napisa� metod� void NewLine(). Powinna ona wypisa� na ekran pojedyncz� pust� lini�. U�y� tej metod� w main().*/
    {
        NewLine();
    }
    /*Zadanie 3.2 Napisa� metod� void NewLines(int count). Powinna ona wypisa� tyle nowych linii, ile zosta�o podanych W PARAMETRZE count (nale�y
u�y� p�tli for). U�y� metod� w main()*/
    {
        NewLines(10);
    }
    /*Zadanie 3.3 Napisa� metod� void WriteBiggerNumber(int x, int y). Metoda powinna pobra� 2 parametry i zwr�ci� wi�kszy z nich. Wykorzysta�
funckj� w metodzie main(). UWAGA - pobieranie liczb od u�ytkownika powinno odby� si� w funkcji main(), a NIE w WriteBiggerNumber! Do
funkcji nale�y jedynie przes�a� pobrane wcze�niej parametry.*/
    {
        int x,y;
        cout << "Podaj x: "; cin >> x;
        cout << "Podaj y: "; cin >> y;
        WriteBiggerNumber(x,y);
    }
    /*Zadanie 3.4 Napisa� metod� Multiply(int x, int y) . Metoda powinna ZWR�CI� (s�owo kluczowe return) iloczyn dw�ch parametr�w. Uwaga! Metoda
NIE POWINNA wypisywa� wyniku - powinien on by� wy�wietlony w funkcji main!*/
    {
        cout << Multiply(4,5);
    }

    return 0;
}
