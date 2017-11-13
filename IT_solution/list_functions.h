/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   list_functions.h
 * Author: Zaim.S
 * Author: Apik
 *
 * Created on November 13, 2017, 4:56 AM
 */

/*Apik dari Zaim
 1. Ko fahamkan istilah function tu cammana.
 2.Kau tengok example dari list_function.h macam mana aku buat 
 * function choose_windows() dan choose_license()
 3.Lepas tu ko apply kat semua function yang ada dalam main.c
 4. FUngsi kita buat function ni sebab nak nampak more organise dan senang 
 * nak debug kalau ada masalah.
 5.Kauu settlekan semua ni dulu, nnti aku settlekan masalah menu windows kau.
 6. Kalau tak faham roger.
 */

#ifndef LIST_FUNCTIONS_H
#define LIST_FUNCTIONS_H
#include <stdio.h>
int hello=0;
int choose_license(void){
    int product;
    printf("Welcome to ITSolutions Store!\n");
    printf("What kind of license you are looking for? \n");
    printf("1. Windows \n");
    printf("2. Microsoft Office \n");
    printf("3. Antivirus \n");
    printf("4. Other licenses \n\n");
    printf("Please Choose 1-4: ");
    
    scanf("%d",&product);
    return product;
}

int choose_windows(void){
    int choice = 0;
    printf("PRODUCT: \n");
    printf("1.  Windows 7 Home Premium       RM %.2lf \n", win7homepremium_price);
    printf("2.  Windows 7 Pro                RM %.2lf \n", win7pro_price);
    printf("3.  Windows 7 Ultimate           RM %.2lf \n", win7ultimate_price);
    printf("4.  Windows 8                    RM %.2lf \n", win8_price);
    printf("5.  Windows 8.1                  RM %.2lf \n", win81_price);
    printf("6.  Windows 8 Pro                RM %.2lf \n", win8pro_price);
    printf("7.  Windows 8.1 Pro              RM %.2lf \n", win81pro_price);
    printf("8.  Windows 10 Home              RM %.2lf \n", win10home_price);
    printf("9.  Windows 10 Pro               RM %.2lf \n", win10pro_price);
    printf("10. Windows 10 Enterprice        RM %.2lf \n", win10enterprise_price);
    printf("11. Main Menu \n\n");
    printf("Please Make Your Choice: ");
    scanf("%i", &choice);
    return  choice;
}
#endif /* LIST_FUNCTIONS_H */