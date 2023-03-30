#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

#define oe (unsigned char)148
#define ae (unsigned char)132
#define ue (unsigned char)129

int a;

float pi = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861045432664821339360726024914127372458700660631558817488152092096282925409171536436789259036001133053054882046652138414695194151160943305727036575959195309218611738193261179310511854807446237996274956735188575272489122793818301194912;

void taschenRechner()
{
    float a;
    float b;
    float f;
    
    printf("Gib eine Zahl f%cr A an!\n", ue);
    scanf("%f", &a);
    printf("Gib eine Zahl f%cr B an!\n", ue);
    scanf("%f", &b);
    printf("\n1 = +\n2 = -\n3 = *\n4 = /\n5 = Zur%cck\n", ue);
    scanf("%f", &f);
    printf("\nA: %f\n", a);
    printf("B: %f\n", b);
    
    if(f == 1)
    {
        printf("Das Ergebnis ist: %f\n", a + b);
        getch();
        system("cls");
        main();
    }
    else if(f == 2)
    {
        printf("Das Ergebnis ist: %f\n", a - b);
        getch();
        system("cls");
        main();
    }
    else if(f == 3)
    {
        printf("Das Ergebnis ist: %f\n", a * b);
        getch();
        system("cls");
        main();
    }
    else if(f == 4)
    {
        printf("Das Ergebnis ist: %f\n", a / b);
        getch();
        system("cls");
        main();
    }
    else if(f == 5)
    {
        system("cls");
        main();
    }
    else
    {
        printf("Das ist keine Option!");
        taschenRechner();
    }
}

void kreisBerechnen()
{
    float r;
    
    printf("Gebe den Radius ein!\n");
    scanf("%f", &r);
    printf("\nRadius: %f\n", r);
    printf("Umfang: %f\n", 2 * r * pi);
    printf("Fl%cche: %f\n", ae, r * r * pi);
    getch();
    system("cls");
}

void formelBerechnung()
{
    float r;
    float h;
    
    printf("Gebe einen Radius ein!\n");
    scanf("%f", &r);
    printf("\nGebe eine H%che an!\n", oe);
    scanf("%f", &h);
    printf("\nRadius: %f\n", r);
    printf("H%che: %f\n", oe, h);
    printf("Kreisfl%cche: %f\n", ae, r * r * pi);
    printf("Zylindervolumen: %f\n", r * r * pi * h);
    printf("Zylindermantel: %f\n", 2 * pi * r * h);
    printf("Spherenfl%cche: %f\n", ae, 4 * pi * r * r);
    printf("Spherenvolumen: %f\n", 4/3 * pi * r * r * r);
    getch();
    system("clear");
    
}

void collatzProblem()
{
    int c;

    printf("Gib die Zahl ein!\n");
    scanf("%d", &c);
    printf("%d", &c);
}

void calculatecollatz(int n) {
    if (n % 2 == 0) {
        // n ist gerade
        printf("%d / 2 = %d\n", n, n / 2);
    } else {
        // n ist ungerade
        printf("3 * %d + 1 = %d\n", n, 3 * n + 1);
    }
}

void basicFunction()
{
    float basic;
    //Das ist eine Test Funktion!
    printf("$$    $$                      $$                        $$\n");
    printf("$$    $$                      $$                        $$\n");
    printf("$$    $$   $$$$$$    $$$$$$$  $$    $$   $$$$$$    $$$$$$$\n");
    printf("$$$$$$$$        $$  $$        $$   $$   $$    $$  $$    $$\n");
    printf("$$    $$   $$$$$$$  $$        $$$$$$    $$$$$$$$  $$    $$\n");
    printf("$$    $$  $$    $$  $$        $$   $$   $$        $$    $$\n");
    printf("$$    $$   $$$$$$$   $$$$$$$  $$    $$   $$$$$$$   $$$$$$$\n");
    printf("1. Taschenrechner\n2. Kreis berechnen\n3. Formelberechnung\n");
    scanf("%f", &basic);
    
    if(basic == 1)
    {
        system("cls");
        taschenRechner();
    }
    else if(basic == 2)
    {
        system("cls");
        kreisBerechnen();
    }
    else if(basic == 3)
    {
        system("cls");
        formelBerechnung();
    }
    else if(basic == 4)
    {
        system("cls");
        main();
    }
    else
    {
        printf("N%c", oe);
        getch();
        system("cls");
        main();
    }
}

int main()
{
    while(a < 1)
    {
        int auswahl;
        printf("$$$$$$$                       $$                                    \n");
        printf("$$    $$                      $$                                    \n");
        printf("$$    $$   $$$$$$    $$$$$$$  $$$$$$$   $$$$$$$    $$$$$$    $$$$$$ \n");
        printf("$$$$$$$   $$    $$  $$        $$    $$  $$    $$  $$    $$  $$    $$\n");
        printf("$$    $$  $$$$$$$$  $         $$    $$  $$    $$  $$$$$$$$  $$      \n");
        printf("$$    $$  $$        $$        $$    $$  $$    $$  $$        $$      \n");
        printf("$$    $$   $$$$$$$   $$$$$$$  $$    $$  $$    $$   $$$$$$$  $$      \n");
        printf("                                                                    \n");
        printf("1. Taschenrechner\n2. Kreis berechnen\n3. Formelberechnung\n4. Collatz Problem\n5. Ausgang\n");
        scanf("%d", &auswahl);
        
        if(auswahl == 1)
        {
            system("cls");
            taschenRechner();
        }
        else if(auswahl == 2)
        {
            system("cls");
            kreisBerechnen();
        }
        else if(auswahl == 3)
        {
            system("cls");
            formelBerechnung();
        }
        else if(auswahl == 4)
        {
            system("cls");
            collatzProblem();
        }
        else if(auswahl == 5)
        {
            system("cls");
            printf("Auf wieder sehen!");
            getch();
            return 0;
        }
        else if(auswahl == 1302)
        {
            printf("\nDas ist keine Option!\n");
            getch();
            system("cls");
            basicFunction();
        }
        else
        {
            printf("\nDas ist keine Option!");
            getch();
            system("cls");
            main();
        }
    }
}
