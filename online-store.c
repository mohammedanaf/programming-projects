// Mohammed Anaf
// Online store
// 15 September 2022

#include <stdio.h>

int main()
{
    // Declaring variables

    int items, rating;
    char confirmation;

    // Project title

    printf("\n\tOnline Store Project\n");

    // Confirming entry from the user

    printf("\nType 'Y' to proceed or 'N' to exit:\n");
    scanf("%c", &confirmation);

    // Displaying output if the user confirmed his/her entry

    if(confirmation == 'Y' || confirmation == 'y')
    {
        // Displaying store menu and taking input from the user

        printf("\nYou have choose to proceed so we will display our menu:\n");

        printf("\n1. Pencil - 2$"
               "\n2. Pen - 3$"
               "\n3. Eraser - 1$"
               "\n4. Sharpener - 1$"
               "\n5. Scale - 4$"
               "\n6. Stapler - 10$"
               "\n7. Glue - 8$"
               "\n8. Whitener - 6$"
               "\n9. A4 size paper - 2.5$"
               "\n10. Highlighter - 9$\n"
               "\n\nType the item number in order to make a purchase:\n");
        scanf("%d", &items);

        // Displaying details of the product purchased by the user

        switch(items)
        {
            case 1:
                printf("\nHere is your pencil worth 2$.\n");
                break;

            case 2:
                printf("\nHere is your pen worth 3$.\n");
                break;

            case 3:
                printf("\nHere is your eraser worth 1$.\n");
                break;

            case 4:
                printf("\nHere is your sharpener worth 1$.\n");
                break;

            case 5:
                printf("\nHere is your scale worth 4$.\n");
                break;

            case 6:
                printf("\nHere is your stapler worth 10$.\n");
                break;

            case 7:
                printf("\nHere is your glue worth 8$.\n");
                break;

            case 8:
                printf("\nHere is your whitener worth 6$.\n");
                break;

            case 9:
                printf("\nHere is your A4 size paper worth 2.5$.\n");
                break;

            case 10:
                printf("\nHere is your Highlighter worth 9$.\n");
                break;

            default:
                printf("\nNo such product number is available, make another purchase!\n");
        }

        // Taking rating as an input from the user

        printf("\nIf you enjoyed your stay, do give us a rating: \n");
        scanf("%d", &rating);

        // Displaying an output message based on the number of rating

        switch(rating)
        {
        case 1:
            printf("\nYou have rated us 1, we will try our best to improve your experience.\n");
            break;

        case 2:
            printf("\nYou have rated us 2, do tell us what changes we can make to help you better.\n");
            break;

        case 3:
            printf("\nYou have rated us 3, we will work harder to elevate your rating.\n");
            break;

        case 4:
            printf("\nYou have rated us 4, we are grateful for that.\n");
            break;

        case 5:
            printf("\nYou have rated us 5, we hope you found this fascinating.\n");
            break;

        default:
            printf("\nYou have entered an incorrect input.\n");
            break;
        }

        // Displaying an end message to the user

        printf("\n\tThank you for visiting us!\n");  
    }

    // Displaying output if the user denied his/her entry

    else if(confirmation == 'N' || confirmation == 'n')
    {
        printf("\nWe would be glad to see you back!\n");
    }

    // Displaying output if the user entered an incorrect input

    else
    {
        printf("\nYou have entered an incorrect input, try again!\n");
    }

    return 0;
}