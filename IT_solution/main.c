/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Zaim Saharudin
 *
 * Created on November 13, 2017, 3:38 AM
 */

#include <stdlib.h>
#include <stdio.h>
#include "list_items.h"

int main ()
{
    int product;
    printf("Welcome to ITSolutions Store!\n");
    printf("What kind of license you are looking for? \n");
    printf("1. Windows \n");
    printf("2. Microsoft Office \n");
    printf("3. Antivirus \n");
    printf("4. Other licenses \n\n");
    printf("Please Choose 1-4: ");


    scanf("%d",&product);

    if (product == 1)
    {
        int choice = 0;
        double totalPrice = 0;

        printf("Choose Your Windows\n\n");

    do{
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

        switch(choice){
        case 1:
            totalPrice += win7homepremium_price;
            break;
        case 2:
            totalPrice += win7pro_price;
            break;
        case 3:
            totalPrice += win7ultimate_price;
            break;
         case 4:
            totalPrice += win8_price;
            break;
        case 5:
            totalPrice += win81_price;
            break;
        case 6:
            totalPrice += win8pro_price;
            break;
         case 7:
            totalPrice += win81pro_price;
            break;
        case 8:
            totalPrice += win10home_price;
            break;
        case 9:
            totalPrice += win10pro_price;
            break;
         case 10:
            totalPrice +=  win10enterprise_price;
            break;
        case 11:
            printf("Thanks for choosing us\n");
            break;
        default:
            printf("*** Error:  Your choice is not on the menu. \n");
            break;
        }

        printf("Total so far: RM %.2lf\n\n", totalPrice);

    } while (choice != 11);

    printf("Your order is RM %.2lf \n\n", totalPrice);

}

    else if ( product == 2)
    {
       int choice = 0;
        double totalPrice = 0;

    printf("Choose Your Microsoft Office\n\n");

    do{
        printf("PRODUCT: \n");
        printf("1.  Microsoft Office 2010             RM %.2lf \n", mso10_price);
        printf("2.  Microsoft Office 2013             RM %.2lf \n", mso13_price);
        printf("3.  Microsoft Office 2016             RM %.2lf \n", mso16_price);
        printf("4.  Microsoft Office 365              RM %.2lf \n", mso365_price);
        printf("5.  Main Menu \n\n");
        printf("Please Make Your Choice: ");
        scanf("%i", &choice);

        switch(choice){
        case 1:
            totalPrice += mso10_price;
            break;
        case 2:
            totalPrice += mso13_price;
            break;
        case 3:
            totalPrice += mso16_price;
            break;
        case 4:
            totalPrice += mso365_price;
            break;
        case 5:
            printf("Thanks for choosing us\n");
            break;
        default:
            printf("*** Error:  Your choice is not on the menu. \n");
            break;
        }

        printf("Total so far: RM %.2lf\n\n", totalPrice);

    } while (choice != 5);

    printf("Your order is RM %.2lf \n\n", totalPrice);
    }
    else if ( product == 3)
    {
       int choice = 0;
        double totalPrice = 0;

     printf("Choose Your Antivirus\n\n");

    do{
        printf("PRODUCT: \n");
        printf("1.  Kaspersky 1PC 1Year                      RM %.2lf \n", kaspersky1u_price);
        printf("2.  Kaspersky 3PC 1Year                      RM %.2lf \n", kaspersky3u_price);
        printf("3.  Norton 1PC 1Year                         RM %.2lf \n", norton1u_price);
        printf("4.  Norton 3PC 1Year                         RM %.2lf \n", norton3u_price);
        printf("5.  Eset cyber for Mac                       RM %.2lf \n", esetcybermac_price);
        printf("6.  Eset Smart 1PC 1Year                     RM %.2lf \n", esetsmart1u_price);
        printf("7.  Eset Smart 3PC 1Year                     RM %.2lf \n", esetsmart3u_price);
        printf("8.  Eset Smart 1PC 2Years                    RM %.2lf \n", esetsmart1u2y_price);
        printf("9.  Eset Smart 3PC 2Years                    RM %.2lf \n", esetsmart3u2y_price);
        printf("10. AVG 1PC 1Year                            RM %.2lf \n", avg1u_price);
        printf("11. AVG 3PC 1Year                            RM %.2lf \n", avg3u_price);
        printf("12. AVG Tune                                 RM %.2lf \n", avgtune_price);
        printf("13. Trend 1PC 1PC 1Year                      RM %.2lf \n", trend1u_price);
        printf("14. Trend 1PC 3PC 1Year                      RM %.2lf \n", trend3u_price);
        printf("15. mcAfee Live Safe 1PC 1Year               RM %.2lf \n", mcafeelive1u1y_price);
        printf("16. mcAfee Live Safe 3PC 1Year               RM %.2lf \n", mcafeelive3u1y_price);
        printf("17. mcAfee Live Safe 5PC 1Year               RM %.2lf \n", mcafeelive5u1y_price);
        printf("18. mcAfee Live Safe 1PC 2Years              RM %.2lf \n", mcafeelive1u2y_price);
        printf("19. mcAfee Live Safe 3PC 2Years              RM %.2lf \n", mcafeelive3u2y_price);
        printf("20. mcAfee Live Safe 5PC 2Years              RM %.2lf \n", mcafeelive5u2y_price);
        printf("21. mcAfee Live Safe 1PC 3Years              RM %.2lf \n", mcafeelive1u3y_price);
        printf("22. mcAfee Live Safe 3PC 3Years              RM %.2lf \n", mcafeelive3u3y_price);
        printf("23. mcAfee Live Safe 5PC 3Years              RM %.2lf \n", mcafeelive5u3y_price);
        printf("24. mcAfee Internet Security 1PC 1Year       RM %.2lf \n", mcafeeint1u1y_price);
        printf("25. mcAfee Internet Security 3PC 1Year       RM %.2lf \n", mcafeeint3u1y_price);
        printf("26. mcAfee Internet Security 1PC 2Years      RM %.2lf \n", mcafeeint1u2y_price);
        printf("27. mcAfee Internet Security 3PC 2Years      RM %.2lf \n", mcafeeint3u2y_price);
        printf("28. mcAfee Internet Security 1PC 3Year       RM %.2lf \n", mcafeeint1u3y_price);
        printf("29. mcAfee Internet Security 3PC 3Years      RM %.2lf \n", mcafeeint3u3y_price);
        printf("30. mcAfee Total Security 1PC 1Year          RM %.2lf \n", mcafeetot1u1y_price);
        printf("31. mcAfee Total Security 3PC 1Year          RM %.2lf \n", mcafeetot3u1y_price);
        printf("32. mcAfee Total Security 1PC 2Years         RM %.2lf \n", mcafeetot1u2y_price);
        printf("33. mcAfee Total Security 3PC 2Years         RM %.2lf \n", mcafeetot3u2y_price);
        printf("34. mcAfee Total Security 1PC 1Year          RM %.2lf \n", mcafeetot1u3y_price);
        printf("35. mcAfee Total Security 3PC 3Years         RM %.2lf \n", mcafeetot3u3y_price);
        printf("36. Main Menu \n\n");
        printf("Please Make Your Choice: ");
        scanf("%i", &choice);

        switch(choice){
        case 1:
            totalPrice += kaspersky1u_price;
            break;
        case 2:
            totalPrice += kaspersky3u_price;
            break;
        case 3:
            totalPrice += norton1u_price;
            break;
         case 4:
            totalPrice += norton3u_price;
            break;
        case 5:
            totalPrice += esetcybermac_price;
            break;
        case 6:
            totalPrice += esetsmart1u_price;
            break;
         case 7:
            totalPrice += esetsmart3u_price;
            break;
        case 8:
            totalPrice += esetsmart1u2y_price;
            break;
        case 9:
            totalPrice += esetsmart3u2y_price;
            break;
         case 10:
            totalPrice +=  trend3u_price;
            break;
         case 11:
            totalPrice += avg3u_price;
            break;
        case 12:
            totalPrice += avgtune_price;
            break;
        case 13:
            totalPrice += trend1u_price;
            break;
         case 14:
            totalPrice += trend3u_price;
            break;
        case 15:
            totalPrice += mcafeelive1u1y_price;
            break;
        case 16:
            totalPrice += mcafeelive3u1y_price;
            break;
         case 17:
            totalPrice += mcafeelive5u1y_price;
            break;
        case 18:
            totalPrice += mcafeelive1u2y_price;
            break;
        case 19:
            totalPrice += mcafeelive3u2y_price;
            break;
         case 20:
            totalPrice +=  mcafeelive5u2y_price;
            break;
         case 21:
            totalPrice += mcafeelive1u3y_price;
            break;
        case 22:
            totalPrice += mcafeelive3u3y_price;
            break;
        case 23:
            totalPrice += mcafeelive5u3y_price;
            break;
         case 24:
            totalPrice += mcafeeint1u1y_price;
            break;
        case 25:
            totalPrice += mcafeeint3u1y_price;
            break;
        case 26:
            totalPrice += mcafeeint1u2y_price;
            break;
         case 27:
            totalPrice += mcafeeint3u2y_price;
            break;
        case 28:
            totalPrice += mcafeeint1u3y_price;
            break;
        case 29:
            totalPrice += mcafeeint3u3y_price;
        case 30:
            totalPrice += mcafeeint1u1y_price;
            break;
        case 31:
            totalPrice += mcafeetot3u1y_price;
            break;
        case 32:
            totalPrice += mcafeetot1u2y_price;
            break;
         case 33:
            totalPrice += mcafeetot3u2y_price;
            break;
        case 34:
            totalPrice += mcafeetot1u3y_price;
            break;
        case 35:
            totalPrice += mcafeetot3u3y_price;
            break;
        case 36:
            printf("Thanks for choosing us\n");
            break;
        default:
            printf("*** Error:  Your choice is not on the menu. \n");
            break;
        }

        printf("Total so far: RM %.2lf\n\n", totalPrice);

    } while (choice != 36);

    printf("Your order is RM %.2lf \n\n", totalPrice);
    }
    else if ( product == 4 )
    {
    int choice = 0;
    double totalPrice = 0;

    printf("Choose Your Software\n\n");

    do{
        printf("PRODUCT: \n");
        printf("1.  Acrobat Pro xi                  RM %.2lf \n", acrobat_price);
        printf("2.  Project 2013 Pro                RM %.2lf \n", projec13_price);
        printf("3.  Project 2016 Pro                RM %.2lf \n", projec16_price);
        printf("4.  Visio 2013                      RM %.2lf \n", visio13_price);
        printf("5.  Visio 2016                      RM %.2lf \n", visio16_price);
        printf("6.  IDM 1Year                       RM %.2lf \n", idm1y_price);
        printf("7.  IDM Lifetime                    RM %.2lf \n", idmlt_price);
        printf("8.  Microsoft Server 2008           RM %.2lf \n", server08_price);
        printf("9.  Microsoft Server 2012           RM %.2lf \n", server12_price);
        printf("10. Microsoft Server 2016           RM %.2lf \n", server16_price);
        printf("11. Main Menu \n\n");
        printf("Please Make Your Choice: ");
        scanf("%i", &choice);

        switch(choice){
        case 1:
            totalPrice += acrobat_price;
            break;
        case 2:
            totalPrice += projec13_price;
            break;
        case 3:
            totalPrice += projec16_price;
            break;
         case 4:
            totalPrice += visio13_price;
            break;
        case 5:
            totalPrice += visio16_price;
            break;
        case 6:
            totalPrice += idm1y_price;
            break;
         case 7:
            totalPrice += idmlt_price;
            break;
        case 8:
            totalPrice += server08_price;
            break;
        case 9:
            totalPrice += server12_price;
            break;
         case 10:
            totalPrice += server16_price;
            break;
        case 11:
            printf("Thanks for choosing us\n");
            break;
        default:
            printf("*** Error:  Your choice is not on the menu. \n");
            break;
        }

        printf("Total so far: RM %.2lf\n\n", totalPrice);

    } while (choice != 11);

    printf("Your order is RM %.2lf \n\n", totalPrice);
    }

    else
        printf("Your choice are not in list!");

    return 0;
}


