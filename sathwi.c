#include <stdio.h>

int main()
{
    int food, qty, size;

    // Pizza quantities
    int ps = 0, pm = 0, pl = 0;

    // Biriyani quantities
    int bs = 0, bm = 0, bl = 0;

    // Dosa quantities
    int ds = 0, dm = 0, dl = 0;

    // Fried rice quantities
    int fs = 0, fm = 0, fl = 0;

    printf("____________________________\n");
    printf("    WELCOME TO EMERTXE CAFE\n");
    printf("____________________________\n");

    do
    {
        printf("\n--------- FOOD MENU ---------\n");
        printf("1. Pizza\n");
        printf("2. Biriyani\n");
        printf("3. Dosa\n");
        printf("4. Fried Rice\n");
        printf("0. Finish the order\n");

        printf("Enter your choice: ");
        if (scanf("%d", &food) != 1)
        {
            printf("Invalid input. Enter a number.\n");
            return 1;
        }

        if (food == 0)
        {
            break;
        }

        if (food < 1 || food > 4)
        {
            printf("Invalid food choice!\n");
            continue;
        }

        printf("\nSelect portion size:\n");
        printf("1. Small\n");
        printf("2. Medium\n");
        printf("3. Large\n");

        printf("Enter portion size: ");
        if (scanf("%d", &size) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }

        if (size < 1 || size > 3)
        {
            printf("Invalid portion size!\n");
            continue;
        }

        printf("Enter quantity: ");
        if (scanf("%d", &qty) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }

        if (qty <= 0)
        {
            printf("Quantity must be positive!\n");
            continue;
        }

        switch (food)
        {
            case 1:
                switch (size)
                {
                    case 1: ps += qty; break;
                    case 2: pm += qty; break;
                    case 3: pl += qty; break;
                }
                break;

            case 2:
                switch (size)
                {
                    case 1: bs += qty; break;
                    case 2: bm += qty; break;
                    case 3: bl += qty; break;
                }
                break;

            case 3:
                switch (size)
                {
                    case 1: ds += qty; break;
                    case 2: dm += qty; break;
                    case 3: dl += qty; break;
                }
                break;

            case 4:
                switch (size)
                {
                    case 1: fs += qty; break;
                    case 2: fm += qty; break;
                    case 3: fl += qty; break;
                }
                break;
        }

        printf("Item added successfully!\n");

    } while (food != 0);

    printf("\n-------- ORDER SUMMARY --------\n");

    printf("Pizza: Small=%d Medium=%d Large=%d\n",
           ps, pm, pl);

    printf("Biriyani: Small=%d Medium=%d Large=%d\n",
           bs, bm, bl);

    printf("Dosa: Small=%d Medium=%d Large=%d\n",
           ds, dm, dl);

    printf("Fried Rice: Small=%d Medium=%d Large=%d\n",
           fs, fm, fl);

    printf("\nYou finished ordering!\n");
    printf("Thank you for visiting Emertxe Cafe!\n");

    return 0;
}