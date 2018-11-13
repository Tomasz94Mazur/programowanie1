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
    /*Zadanie 1.1 Zadeklarowaæ zmienne typu int, float, char. Przypisaæ do nich wartoœæ, wyœwietliæ je na ekran.*/
    int x=10; float y=10.5; char zn='a';
    cout << x << endl;
    cout << y << endl;
    cout << zn << endl;
    /*Zadanie 1.2 Wyœwietliæ zmienn¹ typu int na ekran. Nale¿y u¿yæ metody printf i konstrukcji %d*/
    printf("%d", x);
    /*Zadanie 1.3 Pobraæ od u¿ytkownika liczbê x. Wyœwietliæ kwadrat liczby x.*/
    cout << endl << "Podaj liczbe: "; cin >> x; cout << "Kwadrat liczby wynosi: " << x*x << endl;
    /*Zadanie 1.4 Zapoznaæ siê z instrukcjami warunkowymi (if, else if, else oraz switch). Pobraæ od u¿ywkownika liczbê i wyœwietliæ informacjê, czy jest ona: mniejsza, wiêksza, czy równa 0.*/
    int h;
    cout << "Podaj liczbe: "; cin >> h;
    if (h>0)
        cout << "Podana liczba jest wieksza od zera." << endl;
    else if (h<0)
        cout << "Podana liczba jest mniejsza od zera." << endl;
    else
        cout << "Podana liczba jest rowna zero." << endl;
    /*Zadanie 1.5 Pobraæ ud u¿ytkownika 3 liczby (x1, x2, x3). Wyœwietliæ informacjê, która z tych liczb jest najwiêksza.*/
    int x1,x2,x3,najwieksza;
    cin >> x1 >> x2 >> x3;
    najwieksza=x1;
    if (x2>najwieksza) najwieksza=x2;
    if (x3>najwieksza) najwieksza=x3;
    cout << "Najwieksza liczba to: " << najwieksza << endl;
    /*Zadanie 1.6 Napisaæ prosty kalkulator. Nale¿y pobraæ od u¿ytkownika 2 liczby oraz operator (jeden z czterech: mno¿enie, dzielenie, dodawanie,
odejmowanie). Wymagane jest utworzenie prostego menu u¿ytkownika. Uwaga - nale¿y pamiêtaæ o u³amkach (1/3 powinno daæ 0.33, a nie
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

    /*Zadanie 2.1 Zapoznaæ siê z pêtl¹ while. Pêtla ta s³u¿y do wielokrotnego wykonania fragmentu kodu przez NIEZNAN¥ Z GÓRY iloœæ razy. Pêtla
wykonuje siê zawsze, jeœli warunek jest prawdziwy (ewaluowany do true). Napisaæ pêtlê, w któej u¿ytkownik podaje liczbê x. Nale¿y
wyœwietliæ tê liczbê. Je¿eli u¿ytkownik poda 0, nale¿y zakoñczyæ program.*/
    {
        int x;
        while (x!=0)
        {
            cout << "Podaj liczbe x: "; cin >> x;
            cout << "Wartosc 'x' wynosi: " << x << endl;
        }

    }
    /*Zadanie 2.2 Przerobiæ kalkulator z zadania 1.6. Teraz po ka¿dym dzia³aniu program powinien spytaæ u¿ytkownika, czy ten chce powtórzyæ
wszystko od pocz¹tku. Jeœli tak - restartujemy kalkulator i zaczynamy od nowa. Jeœli nie - koñczymy program.*/
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
    /*Zadanie 2.3. Pobraæ od u¿ytkownika liczbê x. Nale¿y wyœwietliæ wszystkie kolejne potêgi liczby x. Zakoñczyæ program, kiedy liczba przekroczy 100
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
    /*Zadanie 2.4. Pobraæ od u¿ytkownika liczbê x. Jeœli liczba jest niedodatnia - nale¿y zakoñczyæ program. Nastêpnie nale¿y wyœwietlaæ kolejno (w
nowej linii) wszystkie liczby mniejsze od x, a¿ osi¹gniête zostanie 0.*/
    {
        int x;
        cout << "Podaj x: "; cin >> x;
        while (x > 0)
            {
                x--;
                cout << x << endl;
            }
    }
    /*Zadanie 2.5. Zapoznaæ siê z instrukcjami continue; i break;. Pierwsza s³u¿y do zakoñczenia iteracji i przejœcia do nastêpnej, a druga natychmiast
koñczy pêtlê. Przerobiæ program z zadania 1.4, aby wyœwietla³ tylko parzyste liczby (u¿yæ if oraz continue). Jeœli liczba wynosi 40, nale¿y
wyjœæ z pêtli i zakoñczyæ program.*/
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
    /*Zadanie 2.6 Zapoznaæ siê z pêtl¹ for. Pêtla s³u¿y do wykonania danego fragmentu kodu ZNAN¥ Z GÓRY okreœlon¹ iloœæ razy. Uwaga - ka¿d¹ pêtlê
for mo¿na zast¹piæ pêtl¹ while i wzajemnie. Zwyczajowo obowiazuje zasada, ¿e jeœli iloœæ iteracji jest znana - u¿ywamy for, a jeœli nie jest
znana (zale¿y od u¿ytkownika lub jakiegoœ stanu zewnêtrznego) - u¿ywamy pêtli while. Pêtla for sk³ada siê z: ZMIENNEJ ITERACYJNEJ,
czyli stanu pocz¹tkowego pêtli, np. int i = 0. Nastêpnie WARUNKU ZAKOÑCZENIA PÊTLI, np. i<10. Nastêpnie OPERACJI WYKONYWANEJ
PO KA¯DEJ ITERACJI - zazwyczaj jest to zwiêkszenie iteratora o 1, czyli i = i + 1, b¹dŸ w skrócie i++. Napisaæ pêtlê for, która wyœwietli cyfry
od 0 do 9.*/
    {
        for (int i=0; i<10; i++)
        {
            cout << i << endl;
        }
    }
    /*Zadanie 2.7 Pobraæ od u¿ytkownika liczby x i y. Zak³adamy, ¿e y > x (zawsze, nie musimy tego sprawdzaæ). Za pomoc¹ pêtli for wypisaæ liczby
miêdzy x a y (do przemyœlenia - co jest stanem pocz¹tkowym, a co warunkiem zakoñczenia pêtli?)*/
    {
        int x,y;
        cout << "Podaj x: "; cin >> x;
        cout << "Podaj y: "; cin >> y;
        for (int i=x+1; i<y; i++)
        {
            cout << i << endl;
        }
    }
    /*Zadanie 2.8 Pobraæ od u¿ytkownika liczbê x. Za pomoc¹ pêtli for wypisaæ wszystkie liczby mniejsze od x, ale wiêksze ni¿ 0.*/
    {
        int x;
        cout << "Podaj x: "; cin >> x;
        for (int i=x-1; i>0; i--)
        {
            cout << i << endl;
        }
    }
    /*Zadanie 2.9 Pobraæ od u¿ytkownika liczbê x. Za pomoc¹ pêtli for wypisywaæ CO TRZECI¥ liczbê wiêksz¹ od x. Pêtla powinna siê zakoñczyæ, jeœli
liczba przekroczy 100. Uwaga - proszê nie u¿ywaæ operacji continue i break, a sterowaæ tylko parametrami pêtli.*/
    {
        int x;
        cout << "Podaj x: "; cin >> x;
        for (int i=x+1; i<100; i=i+3)
        {
            cout << i << endl;
        }
    }
    /*Zadanie 3.1 Napisaæ metodê void NewLine(). Powinna ona wypisaæ na ekran pojedyncz¹ pust¹ liniê. U¿yæ tej metodê w main().*/
    {
        NewLine();
    }
    /*Zadanie 3.2 Napisaæ metodê void NewLines(int count). Powinna ona wypisaæ tyle nowych linii, ile zosta³o podanych W PARAMETRZE count (nale¿y
u¿yæ pêtli for). U¿yæ metodê w main()*/
    {
        NewLines(10);
    }
    /*Zadanie 3.3 Napisaæ metodê void WriteBiggerNumber(int x, int y). Metoda powinna pobraæ 2 parametry i zwróciæ wiêkszy z nich. Wykorzystaæ
funckjê w metodzie main(). UWAGA - pobieranie liczb od u¿ytkownika powinno odbyæ siê w funkcji main(), a NIE w WriteBiggerNumber! Do
funkcji nale¿y jedynie przes³aæ pobrane wczeœniej parametry.*/
    {
        int x,y;
        cout << "Podaj x: "; cin >> x;
        cout << "Podaj y: "; cin >> y;
        WriteBiggerNumber(x,y);
    }
    /*Zadanie 3.4 Napisaæ metodê Multiply(int x, int y) . Metoda powinna ZWRÓCIÆ (s³owo kluczowe return) iloczyn dwóch parametrów. Uwaga! Metoda
NIE POWINNA wypisywaæ wyniku - powinien on byæ wyœwietlony w funkcji main!*/
    {
        cout << Multiply(4,5);
    }

    return 0;
}
