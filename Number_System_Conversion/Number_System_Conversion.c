/*  Made by Timothy Lee 
    If there are any bugs please email @ ltim25199@gmail.com for bug fix
    2023_07_27 
*/


#include <stdio.h>
#include <math.h>
#include<string.h>
#include <conio.h>
#define _CRT_SECURE_NO_WARNINGS

long int Bin_to_Dec(long int); //1:BINARY TO DECIMAL
long int Bin_to_Oct(long int); //2:BINARY TO OCTAL
long int Bin_to_Hex(long int); //3:BINARY TO HEXA-DECIMAL
long int Dec_to_Bin(long int); //4:DECIMAL TO BINARY
long int Dec_to_Oct(long int); //5:DECIMAL TO OCTAL
long int Dec_to_Hex(long int); //6:DECIMAL TO HEXA-DECIMAL
long int Oct_to_Bin(long int); //7:OCTAL TO BINARY
long int Oct_to_Dec(long int); //8:OCTAL TO DECIMAL
long int Oct_to_Hex(long int); //9:OCTAL TO HEXA-DECIMAL
void Hex_to_Bin(char[]); //10:HEXA-DECIMAL TO BINARY
void Hex_to_Dec(char[]); //11:HEXA-DECIMAL TO DECIMAL
void Hex_to_Oct(char[]); //12:HEXA-DECIMAL TO OCTAL

int main()
{
    int op, num = 1, check;
    long int bin, oct, dec;
    char hex[100];
    int i, j, space;  //  FOR PATTERN

    printf("\t\tWELCOME TO NUMBER SYSTEM CONVERSION\n\n");

    while (num != 0)
    {
        printf("\t\t>>>>>> CHOOSE THE CONVERSION <<<<<<\n\n");

        printf("=> BINARY <=\n");
        printf("1: Binary to Decimal.\n2: Binary to Octal.\n3: Binary to Hexa-Decimal.\n");

        printf("\n=> DECIMAL <=\n");
        printf("4: Decimal to Binary.\n5: Decimal to Octal.\n6: Decimal to Hexa-Decimal.\n");

        printf("\n=> OCTAL <=\n");
        printf("7: Octal to Binary.\n8: Octal to Decimal.\n9: Octal to Hexa-Decimal.\n");

        printf("\n=> HEXA-DECIMAL <=\n");
        printf("10: Hexa-Decimal to Binary.\n11: Hexa-Decimal to Decimal.\n12: Hexa-Decimal to Octal.\n");

        printf("\nENTER YOUR CHOICE: ");
        scanf_s(" %d", &op);

        switch (op)
        {
        case 1:
            printf("\n***BINARY TO DECIMAL***\n");
        D:
            printf("\nEnter the Number in Binary form (0s & 1s): ");
            scanf_s(" %ld", &bin);
            // CHECKING INPUT IS IN BINARY FORM
            check = bin;

            while (check != 0)
            {
                num = check % 10;
                if (num > 1)
                {
                    printf("\n%d IS NOT BINARY NUMBER.\n", bin);
                    printf("***TRY AGAIN****\n");
                    goto D;
                }
                else
                    check = check / 10;
            }

            Bin_to_Dec(bin); break;

        case 2:
            printf("\n***BINARY TO OCTAL***\n");
        E:
            printf("\nEnter the Number in Binary form (0s & 1s): ");
            scanf_s(" %ld", &bin);
            // CHECKING INPUT IS IN BINARY FORM
            check = bin;

            while (check != 0)
            {
                num = check % 10;
                if (num > 1)
                {
                    printf("\n%d IS NOT BINARY NUMBER.\n", bin);
                    printf("***TRY AGAIN****\n");
                    goto E;
                }
                else
                    check = check / 10;
            }

            Bin_to_Oct(bin); break;

        case 3:
            printf("\n***BINARY TO HEXA-DECIMAL***\n");
        F:
            printf("\nEnter the Number in Binary form (0s & 1s): ");
            scanf_s(" %ld", &bin);
            // CHECKING INPUT IS IN BINARY FORM
            check = bin;

            while (check != 0)
            {
                num = check % 10;
                if (num > 1)
                {
                    printf("\n%d IS NOT BINARY NUMBER.\n", bin);
                    printf("***TRY AGAIN****\n");
                    goto F;
                }
                else
                    check = check / 10;
            }

            Bin_to_Hex(bin); break;

        case 4:
            printf("\n***DECIMAL TO BINARY***\n");
            printf("\nEnter the Number in Decimal form (0 to 9): ");
            scanf_s(" %ld", &dec);
            Dec_to_Bin(dec); break;

        case 5:
            printf("\n***DECIMAL TO OCTAL***\n");
            printf("\nEnter the Number in Decimal form (0 to 9): ");
            scanf_s("  %ld", &dec);
            Dec_to_Oct(dec); break;

        case 6:
            printf("\n***DECIMAL TO HEXA-DECIMAL***\n");
            printf("\nEnter the Number in Decimal form (0 to 9): ");
            scanf_s(" %ld", &dec);
            Dec_to_Hex(dec); break;

        case 7:
            printf("\n***OCTAL TO BINARY***\n");
        A:
            printf("\nEnter the Number in Octal form (0 to 7): ");
            scanf_s(" %ld", &oct);
            // CHECKING INPUT IS IN OCTAL FORM
            check = oct;

            while (check != 0)
            {
                num = check % 10;
                if (num > 7)
                {
                    printf("\n%d IS NOT OCTAL NUMBER.\n", num);
                    goto A;
                }
                else
                {
                    check = check / 10;
                    i++;
                }
            }
            Oct_to_Bin(oct); break;

        case 8:
            printf("\n***OCTAL TO DECIMAL***\n");
        B:
            printf("\nEnter the Number in Octal form (0 to 7): ");
            scanf_s(" %ld", &oct);
            // CHECKING INPUT IS IN OCTAL FORM
            check = oct;

            while (check != 0)
            {
                num = check % 10;
                if (num > 7)
                {
                    printf("\n%d IS NOT OCTAL NUMBER.\n", num);
                    goto B;
                }
                else
                {
                    check = check / 10;
                    i++;
                }
            }
            Oct_to_Dec(oct); break;

        case 9:
            printf("\n***OCTAL TO HEXA-DECIMAL***\n");
        C:
            printf("\nEnter the Number in Octal form (0 to 7): ");
            scanf_s(" %ld", &oct);
            // CHECKING INPUT IS IN OCTAL FORM
            check = oct;

            while (check != 0)
            {
                num = check % 10;
                if (num > 7)
                {
                    printf("\n%d IS NOT OCTAL NUMBER.\n", num);
                    goto C;
                }
                else
                {
                    check = check / 10;
                    i++;
                }
            }
            Oct_to_Hex(oct); break;

        case 10:
            printf("\n***HEXA-DECIMAL TO BINARY***\n");
        X:
            printf("\nEnter the Number in Hexa-Decimal form: ");
            fgets(hex, sizeof(hex), stdin);
            hex[strcspn(hex, "\n")] = 0;  // Remove the newline character

            //check
            size_t b;
            for(b = strlen(hex) - 1; b >= 0; b--)
            {
                if (hex[b] > 'f' && hex[b] <= 'z' || hex[b] > 'F' && hex[b] <= 'Z')
                {
                    printf("\nYou have to Enter Hexa-Decimal Number.\n");
                    printf("'%c' IS NOT Hexa-Decimal Number.\n", hex[b]);
                    goto X;
                }
            }
            Hex_to_Bin(hex); break;

        case 11:
            printf("\n***HEXA-DECIMAL TO DECIMAL***\n");
        Y:
            printf("\nEnter the Number in Hexa-Decimal form: ");
            fgets(hex, sizeof(hex), stdin);
            hex[strcspn(hex, "\n")] = 0;  // Remove the newline character
            //check
            for (b = strlen(hex) - 1; b >= 0; b--)
            {
                if (hex[b] > 'f' && hex[b] <= 'z' || hex[b] > 'F' && hex[b] <= 'Z')
                {
                    printf("\nYou have to Enter Hexa-Decimal Number.\n");
                    printf("'%c' IS NOT Hexa-Decimal Number.\n", hex[b]);
                    goto Y;
                }
            }
            Hex_to_Dec(hex); break;

        case 12:
            printf("\n***HEXA-DECIMAL TO OCTAL***\n");
        Z:
            printf("\nEnter the Number in Hexa-Decimal form: ");
            fgets(hex, sizeof(hex), stdin);
            hex[strcspn(hex, "\n")] = 0;  // Remove the newline character

            //check
            for (b = strlen(hex) - 1; b >= 0; b--)
            {
                if (hex[b] > 'f' && hex[b] <= 'z' || hex[b] > 'F' && hex[b] <= 'Z')
                {
                    printf("\nYou have to Enter Hexa-Decimal Number.\n");
                    printf("'%c' IS NOT Hexa-Decimal Number.\n", hex[b]);
                    goto Z;
                }
            }
            Hex_to_Oct(hex); break;

        default:
            printf("\n***INVALID NUMBER***\n");
            break;
        }
        printf("\n\nDO YOU WANT TO CONTINUE = (1/0) :\n");
        scanf_s(" %d", &num);

    }

    space = 3 + 35;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    space = 37;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space++;
        for (j = 1; j <= 2 * (3 - i) - 1; j++)
        {
            printf("*");

        }

        printf("\n");

    }
}

long int Bin_to_Dec(long int bin)
{
    int rem, sum = 0, i = 0;
    while (bin != 0)
    {
        rem = bin % 10;
        bin = bin / 10;
        sum = sum + rem * (int)pow(2, i);
        i++;
    }

    printf("\nEquivalent Decimal Number : %d", sum);
}

long int Bin_to_Oct(long int bin)
{
    int i = 0, rem, sum = 0, remain[100], len = 0;

    while (bin != 0)
    {
        rem = bin % 10;
        bin = bin / 10;
        sum = sum + rem * (int)pow(2, i);
        i++;
    }
    i = 0;
    while (sum != 0)
    {
        remain[i] = sum % 8;
        sum = sum / 8;
        i++;
        len++;
    }
    printf("\nEquivalent Octal Number : ");
    for (i = len - 1; i >= 0; i--)
    {
        printf("%d", remain[i]);
    }
}

long int Bin_to_Hex(long int bin)
{
    int rem, i = 0, sum = 0, remain[100], len = 0;

    while (bin != 0)
    {
        rem = bin % 10;
        bin = bin / 10;
        sum = sum + rem * (int)pow(2, i);
        i++;
    }
    i = 0;
    while (sum != 0)
    {
        remain[i] = sum % 16;
        sum = sum / 16;
        i++;
        len++;
    }
    printf("\nEquivalent Hexa-Decimal Number : ");
    for (i = len - 1; i >= 0; i--)
    {
        switch (remain[i])
        {
        case 10:
            printf("A"); break;

        case 11:
            printf("B"); break;

        case 12:
            printf("C"); break;

        case 13:
            printf("D"); break;

        case 14:
            printf("E"); break;

        case 15:
            printf("F"); break;

        default:
            printf("%d", remain[i]);
        }

    }
}

long int Dec_to_Bin(long int dec)
{
    int rem[50], i, len = 0;
    do
    {
        rem[i] = dec % 2;
        dec = dec / 2;
        i++;
        len++;
    } while (dec != 0);

    printf("\nEquivalent Binary Number : ");
    for (i = len - 1; i >= 0; i--)
    {
        printf("%d", rem[i]);
    }
    return;
}

long int Dec_to_Oct(long int dec)
{
    int rem[50], i, len = 0;
    do
    {
        rem[i] = dec % 8;
        dec = dec / 8;
        i++;
        len++;
    } while (dec != 0);

    printf("\nEquivalent Octal Number : ");
    for (i = len - 1; i >= 0; i--)
    {
        printf("%d", rem[i]);
    }
}

long int Dec_to_Hex(long int dec)
{
    int rem[50], i, len = 0;
    do
    {
        rem[i] = dec % 16;
        dec = dec / 16;
        i++;
        len++;
    } while (dec != 0);

    printf("\nEquivalent Hexa-Decimal Number : ");
    for (i = len - 1; i >= 0; i--)
    {
        switch (rem[i])
        {
        case 10:
            printf("A"); break;

        case 11:
            printf("B"); break;

        case 12:
            printf("C"); break;

        case 13:
            printf("D"); break;

        case 14:
            printf("E"); break;

        case 15:
            printf("F"); break;

        default:
            printf("%d", rem[i]);
        }

    }
}

long int Oct_to_Bin(long int oct)
{
    int rem[50], len = 0, decimal = 0, i = 0, ans;

    while (oct != 0)
    {
        ans = oct % 10;
        decimal = decimal + ans * (int)pow(8, i);
        i++;
        oct = oct / 10;
    }

    i = 0;
    do
    {
        rem[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
        len++;
    } while (decimal != 0);

    printf("\nEquivalent Binary Number : ");
    for (i = len - 1; i >= 0; i--)
    {
        printf("%d", rem[i]);
    }
}

long int Oct_to_Dec(long int oct)
{
    int decimal = 0, i = 0, ans;

    while (oct != 0)
    {
        ans = oct % 10;
        decimal = decimal + ans * (int)pow(8, i);
        i++;
        oct = oct / 10;
    }
    printf("\nEquivalent Decimal Number : %d", decimal);
    return;
}

long int Oct_to_Hex(long int oct)
{
    int rem[50], len = 0, decimal = 0, i = 0, ans = 0;
    while (oct != 0)
    {
        ans = oct % 10;
        decimal = decimal + ans * (int)pow(8, i);
        i++;
        oct = oct / 10;
    }
    i = 0;
    while (decimal != 0)
    {
        rem[i] = decimal % 16;
        decimal = decimal / 16;
        i++;
        len++;
    }
    printf("\nEquivalent Hexa-Decimal Number : ");
    for (i = len - 1; i >= 0; i--)
    {
        switch (rem[i])
        {
        case 10:
            printf("A"); break;

        case 11:
            printf("B"); break;

        case 12:
            printf("C"); break;

        case 13:
            printf("D"); break;

        case 14:
            printf("E"); break;

        case 15:
            printf("F"); break;

        default:
            printf("%d", rem[i]);
        }

    }
    return;
}

void Hex_to_Bin(char hex[])
{
    int i = 0;
    printf("\nEquivalent Binary Number : ");
    for (i = 0; i < strlen(hex); i++)
    {
        switch (hex[i])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        case '8':
            printf("1000"); break;
        case '9':
            printf("1001"); break;
        case 'A':
        case 'a':
            printf("1010"); break;
        case 'B':
        case 'b':
            printf("1011"); break;
        case 'C':
        case 'c':
            printf("1100"); break;
        case 'D':
        case 'd':
            printf("1101"); break;
        case 'E':
        case 'e':
            printf("1110"); break;
        case 'F':
        case 'f':
            printf("1111"); break;

        default:
            printf("\n Invalid hexa digit %c ", hex[i]);
        }
    }

}

void Hex_to_Dec(char hex[])
{
    int num = 0, power = 0, decimal = 0;

    size_t i;
    for (i = strlen(hex); i-- > 0; )
    {
        if (hex[i] == 'A' || hex[i] == 'a')
        {
            num = 10;
        }
        else if (hex[i] == 'B' || hex[i] == 'b')
        {
            num = 11;
        }
        else if (hex[i] == 'C' || hex[i] == 'c')
        {
            num = 12;
        }
        else if (hex[i] == 'D' || hex[i] == 'd')
        {
            num = 13;
        }
        else if (hex[i] == 'E' || hex[i] == 'e')
        {
            num = 14;
        }
        else if (hex[i] == 'F' || hex[i] == 'f')
        {
            num = 15;
        }
        else
            //(a[i]>=0 || a[i]<=9)
        {
            num = hex[i] - 48;
        }

        decimal = decimal + num * (int)pow(16, power);
        power++;
    }
    printf("\nEquivalent Decimal Number : %d", decimal);

}

void Hex_to_Oct(char hex[])
{
    int i, len, num = 0, power = 0, decimal = 0, rem[100];

    len = (int)strlen(hex);
    for (i = len - 1; i >= 0; i--)
    {
        if (hex[i] == 'A' || hex[i] == 'a')
        {
            num = 10;
        }
        else if (hex[i] == 'B' || hex[i] == 'b')
        {
            num = 11;
        }
        else if (hex[i] == 'C' || hex[i] == 'c')
        {
            num = 12;
        }
        else if (hex[i] == 'D' || hex[i] == 'd')
        {
            num = 13;
        }
        else if (hex[i] == 'E' || hex[i] == 'e')
        {
            num = 14;
        }
        else if (hex[i] == 'F' || hex[i] == 'f')
        {
            num = 15;
        }
        else
            //(a[i]>=0 || a[i]<=9)
        {
            num = hex[i] - 48;
        }

        decimal = decimal + num * (int)pow(16, power);
        power++;
    }

    i = 0, len = 0;
    while (decimal != 0)
    {
        rem[i] = decimal % 8;
        decimal = decimal / 8;
        i++;
        len++;
    }
    printf("\nEquivalent Octal Number : ");
    for (i = len - 1; i >= 0; i--)
    {
        printf("%d", rem[i]);
    }

}
