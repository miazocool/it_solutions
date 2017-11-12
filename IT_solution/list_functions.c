/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
int choose_license(){
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
    