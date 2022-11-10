#include <stdio.h>
#include <stdlib.h>

int a;

float pi = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861045432664821339360726024914127372458700660631558817488152092096282925409171536436789259036001133053054882046652138414695194151160943305727036575959195309218611738193261179310511854807446237996274956735188575272489122793818301194912;

void taschenRechner()
{
    float a;
    float b;
    float f;
    
    printf("Gib eine Zahl für A an!\n");
    scanf("%f", &a);
    printf("Gib eine Zahl für B an!\n");
    scanf("%f", &b);
    printf("1 = +\n2 = -\n3 = *\n4 = /\n5 = Zurück\n");
    scanf("%f", &f);
    printf("A: %f\n", a);
    printf("B: %f\n", b);
    
    if(f == 1)
    {
        printf("Das Ergebnis ist: %f\n", a + b);
    }
    else if(f == 2)
    {
        printf("Das Ergebnis ist: %f\n", a - b);
    }
    else if(f == 3)
    {
        printf("Das Ergebnis ist: %f\n", a * b);
    }
    else if(f == 4)
    {
        printf("Das Ergebnis ist: %f\n", a / b);
    }
    else if(f == 5)
    {
        system("clear");
        main();
    }
    else
    {
        printf("Das ist keine Option!");
    }
    
    system("clear");
}

void kreisBerechnen()
{
    float r;
    
    printf("Gebe den Radius ein!\n");
    scanf("%f", &r);
    printf("Radius: %f\n", r);
    printf("Umfang: %f\n", 2 * r * pi);
    printf("Fläche: %f\n", r * r * pi);
    
    //getc(stdin);
    //printf("Test");
    system("clear");
}

void formelBerechnung()
{
    float r;
    float h;
    
    printf("Gebe einen Radius ein!\n");
    scanf("%f", &r);
    printf("Gebe eine Höhe an!\n");
    scanf("%f", &h);
    printf("Radius: %f\n", r);
    printf("Höhe: %f\n", h);
    printf("Kreisfläche: %f\n", r * r * pi);
    printf("Zylindervolumen: %f\n", r * r * pi * h);
    printf("Spherenfläche: %f\n", 4 * pi * r * r);
    printf("Spherenvolumen: %f\n", 4/3 * pi * r * r * r);
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
        printf("1. Taschenrechner\n2. Kreis berechnen\n3. Formelberechnung\n");
        scanf("%d", &auswahl);
        
        if(auswahl == 1)
        {
            taschenRechner();
        }
        else if(auswahl == 2)
        {
            kreisBerechnen();
        }
        else if(auswahl == 3)
        {
            formelBerechnung();
        }
        else{
            printf("Das ist keine Option!");
            system("clear");
            main();
        }
    }
    
    system("clear");
}