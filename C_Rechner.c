#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

#define oe (unsigned char)148
#define ae (unsigned char)132
#define ue (unsigned char)129
#define ss (unsigned char)225

int loop;

float pi = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861045432664821339360726024914127372458700660631558817488152092096282925409171536436789259036001133053054882046652138414695194151160943305727036575959195309218611738193261179310511854807446237996274956735188575272489122793818301194912;

int main();

void integerCalculator(){
    int valueA;
    int valueB;
    int function;
    
    printf("Gib eine Zahl f%cr A an!\n", ue);
    scanf("%d", &valueA);
    printf("Gib eine Zahl f%cr B an!\n", ue);
    scanf("%d", &valueB);
    printf("\n1 = +\n2 = -\n3 = *\n4 = /\n5 = Zur%cck\n", ue);
    scanf("%f", &function);
    printf("\nA: %f\n", valueA);
    printf("B: %f\n", valueB);
    
    if(function == 1){
        printf("Das Ergebnis ist: %d\n", valueA + valueB);
        getch();
        system("cls");
        main();
    }else if(function == 2){
        printf("Das Ergebnis ist: %d\n", valueA - valueB);
        getch();
        system("cls");
        main();
    }else if(function == 3){
        printf("Das Ergebnis ist: %d\n", valueA * valueB);
        getch();
        system("cls");
        main();
    }else if(function == 4){
        printf("Das Ergebnis ist: %d\n", valueA / valueB);
        printf("Und der Rest beträgt: %d\n", valueA % valueB);
        getch();
        system("cls");
        main();
    }else if(function == 5){
        system("cls");
        main();
    }else{
        printf("Das ist keine Option!");
        taschenRechner();
    }
}

void floatingPointCalculator(){
    float valueA;
    float valueB;
    int function;
    
    printf("Gib eine Zahl f%cr A an!\n", ue);
    scanf("%f", &valueA);
    printf("Gib eine Zahl f%cr B an!\n", ue);
    scanf("%f", &valueB);
    printf("\n1 = +\n2 = -\n3 = *\n4 = /\n5 = Zur%cck\n", ue);
    scanf("%f", &function);
    printf("\nA: %f\n", valueA);
    printf("B: %f\n", valueB);
    
    if(function == 1){
        printf("Das Ergebnis ist: %.2f\n", valueA + valueB);
        getch();
        system("cls");
        main();
    }else if(function == 2){
        printf("Das Ergebnis ist: %.2f\n", valueA - valueB);
        getch();
        system("cls");
        main();
    }else if(function == 3){
        printf("Das Ergebnis ist: %.2f\n", valueA * valueB);
        getch();
        system("cls");
        main();
    }else if(function == 4){
        printf("Das Ergebnis ist: %.2f\n", valueA / valueB);
        getch();
        system("cls");
        main();
    }else if(function == 5){
        system("cls");
        main();
    }else{
        printf("Das ist keine Option!");
        taschenRechner();
    }
}

void kreisBerechnen(){
    float radius;
    
    printf("Gebe den Radius ein!\n");
    scanf("%f", &radius);
    printf("\nRadius: %.2f\n", radius);
    printf("Umfang: %.2f\n", 2 * radius * pi);
    printf("Fl%cche: %.2f\n", ae, radius * radius * pi);
    getch();
    system("cls");
}

void formelBerechnung(){
    float radius;
    float height;
    
    printf("Gebe einen Radius ein!\n");
    scanf("%f", &radius);
    printf("\nGebe eine H%che an!\n", oe);
    scanf("%f", &height);
    printf("\nRadius: %.2f\n", radius);
    printf("H%che: %.2f\n", oe, height);
    printf("Kreisfl%cche: %.2f\n", ae, radius * radius * pi);
    printf("Zylindervolumen: %.2f\n", radius * radius * pi * height);
    printf("Zylindermantel: %.2f\n", 2 * pi * radius * height);
    printf("Spherenfl%cche: %.2f\n", ae, 4 * pi * radius * radius);
    printf("Spherenvolumen: %.2f\n", 4/3 * pi * radius * radius * radius);
    getch();
    system("clear");
    
}

void basicFunction(){
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
    
    if(basic == 1){
        system("cls");
        taschenRechner();
    }else if(basic == 2){
        system("cls");
        kreisBerechnen();
    }else if(basic == 3){
        system("cls");
        formelBerechnung();
    }else if(basic == 4){
        system("cls");
        main();
    }else{
        printf("N%c", oe);
        getch();
        system("cls");
        main();
    }
}

int main(){
    while(loop < 1){
        int selection;
        printf("$$$$$$$                       $$                                    \n");
        printf("$$    $$                      $$                                    \n");
        printf("$$    $$   $$$$$$    $$$$$$$  $$$$$$$   $$$$$$$    $$$$$$    $$$$$$ \n");
        printf("$$$$$$$   $$    $$  $$        $$    $$  $$    $$  $$    $$  $$    $$\n");
        printf("$$    $$  $$$$$$$$  $         $$    $$  $$    $$  $$$$$$$$  $$      \n");
        printf("$$    $$  $$        $$        $$    $$  $$    $$  $$        $$      \n");
        printf("$$    $$   $$$$$$$   $$$$$$$  $$    $$  $$    $$   $$$$$$$  $$      \n");
        printf("                                                                    \n");
        printf("1. Ganzzahl Taschenrechner\n2. Gleit-Komma Taschenrechner\n3. Kreis berechnen\n4. Formelberechnung\n5. Ausgang\n");
        scanf("%d", &selection);
        
        if(selection == 1){
            system("cls");
            taschenRechner();
        }else if(selection == 2){
            system("cls");
            kreisBerechnen();
        }else if(selection == 3){
            system("cls");
            formelBerechnung();
        }else if(selection == 4){
            system("cls");
            printf("Auf wieder sehen!");
            getch();
            return 0;
        }else if(selection == 1302){
            printf("\nDas ist keine Option!\n");
            getch();
            system("cls");
            basicFunction();
        }else{
            printf("\nDas ist keine Option!");
            getch();
            system("cls");
            main();
        }
    }
}
