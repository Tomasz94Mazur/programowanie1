#include <iostream>
#include <stdlib.h>

using namespace std;

bool IsSorted (int *tab, int s)
{
    if (tab[s-5]<=tab[s-4] && tab[s-4]<=tab[s-3] && tab[s-3]<=tab[s-2] && tab[s-2]<=tab[s-1])
    {
        cout << "Tablica JEST posortowana niemalejaco - (Metoda IsSorted)" << endl;
        return true;
    }
    else
    {
        cout << "Tablica NIE JEST posortowana niemalejaco - (Metoda IsSorted)" << endl;
        return false;
    }
}

void printBackwards (int *a, int s)
{
    for (s; s>=0; --s)
    {
        cout << "Wartosc " << s+1 <<  " tablicy to: " << a[s+1] << endl;
    }
}

void printDots (int *a, int s)
{
    //int x; *'.'
    for (int i=0; i<=s; i++)
    {
        cout << a[i+1] << endl;
    }
}

void Sum (int *a, int s)
{
    int i, suma=0;
    for (i=s; i>=0; i--)
    {
        suma+=a[i];
    }
    cout << "Suma wynosi: " << suma << endl;
}

int getLenght (char *str)
{
    int wynik=0;
    for (int i=0; str[i]!='\0'; i++)
        wynik++;
    cout << "Dlugosc lancucha wynosi: " << wynik-1 << endl;
    //return wynik-1;
}

void Reverse (char *str)
{
    int s=0;
    int e=3;
    while (s<e)
    {
        //cout << str[e];
        swap(str[s], str[e]);
        //cout << str[s];
        //cout << str[e];
        s++;
        e--;
        cout << str[e];
    }
}
/*
bool containsDigits (char *str)
{
    for (char znak: str)
    {
        if (znak < '0' || znak > '9')
        {
            cout << "znalazlem cos co nie jest cyfra" << endl; break;
        }
    }
*/
    /*
    for (int i=0; str[i]='\0'; i++)
    {
        if (str[i]>'0' || str[i]<'9')
        {
            continue;
            else
            {
                cout << "TRUE\n";
                return true;
            }
        }
        else
        {
            if str[i]!='\0' continue;
            else
            {
                cout << "FALSE\n";
                return false;
            }
        }
    }
}
*/

int main()
{
    {
        //Zad 1.1
        cout << "Zadanie 1.1\n";
        int tab[5], maksimum=-2147483648;
        for (int i=0; i<=4; i++)
        {
            cout << "Podaj " << i+1 << " liczbe: "; cin >> tab[i];
            if (tab[i] > maksimum) maksimum = tab[i];
        }
        cout << "Najwieksza liczba wynosi: " << maksimum << endl;
        //Zad 1.2
        cout << "\n";
        cout << "Zadanie 1.2\n";
        for (int i=0; i<=4; i++)
        {
            cout << "Wartosc " << i+1 <<  " tablicy to: " << tab[i] << endl;
        }
        for (int i=4; i>=0; i--)
        {
            cout << "Wartosc " << i+1 <<  " tablicy to: " << tab[i] << endl;
        }
        cout << "\n";
        cout << "Zadanie 1.3\n";
        {
            if (tab[0]<=tab[1] && tab[1]<=tab[2] && tab[2]<=tab[3] && tab[3]<=tab[4])
            {
                cout << "Tablica JEST posortowana niemalejaco." << endl;
            }
            else cout << "Tablica NIE JEST posortowana niemalejaco." << endl;
        }
        //Zad 2.1
        cout << "\nZadanie 2.1\n";
        int wsk=*tab;
        IsSorted(&wsk, 5);
        //Zad 2.2
        cout << "\nZadanie 2.2\n";
        printBackwards(&wsk, 4);
        //Zad 2.3
        cout << "\nZadanie 2.3\n";
        int tab2[]={3,2,5,4};
        printDots(&wsk, 4);
        //Zad 2.4
        cout << "\nZadanie 2.4\n";
        Sum(&wsk, 5);
        //Zad 2.5
        cout << "\nZadanie 2.5\n";
        int ile;
        cout << "Jak duza tablice posortowac? [Ilosc jej elementow]: "; cin >> ile;
        //dynamiczna alokacja tablicy
        int *tablica;
        tablica=new int [ile];
        for(int i=0; i<ile; i++)
        {
            cout << "Podaj wartosc " << i+1 << ": ";
            cin >> tablica[i];
        }
        cout << "Efekt sortowania babelkowego ponizej: " << endl;
        for(int i=0; i<ile; i++)
        {
            for(int j=ile-1; j>=1; j--)
            {
                if(tablica[j]<tablica[j-1])
                {
                    int bufor;
                    bufor=tablica[j-1];
                    tablica[j-1]=tablica[j];
                    tablica[j]=bufor;
                }
            }
            cout << tablica[i] << endl;
        }
        delete [] tablica;
        //Zad 3.1
        {
            cout << "\nZadanie 3.1\n";
            char str[] = "Hello!";
            char wskaznik=*str;
            getLenght(&wskaznik);
        }
        //Zad 3.2
        {
            cout << "\nZadanie 3.2\n";
            char str[] = "kot";
            char wskaznik=*str;
            Reverse(&wskaznik);
        }
        //Zad 3.3
        {
            cout << "\nZadanie 3.3\n";
            char str[50];
            cout << "Podaj ciag znakow (sprawdzamy czy sa w nim cyfry): ";
            cin >> str;
            char wskaznik=*str;
            //containsDigits(&wskaznik);
        }
    }
    //Zad 4.1
    {
        int n;
        cout << "\nZadanie 4.1\n";
        cout << "Podaj n: "; cin >> n;
        int *tab=(int*) malloc(sizeof(int)*n);
        for (int i=0; i<=n-1; i++)
        {
            cout << "Podaj " << i+1 << " liczbe: ";
            cin >> tab[i];
        }
        printBackwards(tab, n);
        //Zad 4.2
        int n2;
        cout << "\nZadanie 4.2\n";
        cout << "Podaj n: "; cin >> n2;
        int *tab2=(int*) malloc(sizeof(int)*n2);
        for (int i=0; i<=n2-1; i++)
        {
            cout << "Podaj " << i+1 << " liczbe: ";
            cin >> tab[i];
        }

        free(tab);
        free(tab2);
    }

    return 0;
}
