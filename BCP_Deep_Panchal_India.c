//Compiled By Roscorvya Josef
#include <stdio.h>
void DemonStration_Of_Struct();
void DemonStration_Of_Array();
void DemonStration_Of_Arithmatic_Operators();
int main()
{
    int Choice; /*Choice Of Integrated Programs*/

    printf("---------Select What You Want To Explore From Given Menu---------\n");
    printf("Enter 1 For \t-----DemonStration_Of_Struct-----\n");
    printf("Enter 2 For \t-----Store & Retrieval Elements Of Array-----\n");
    printf("Enter 3 For \t-----DemonStration Of Arithmatic Operators-----\n");
    scanf("%d", &Choice);
    if (Choice == 1)
    {
        DemonStration_Of_Struct();
    }
    else if (Choice == 2)
    {
        DemonStration_Of_Array();
    }
    else if (Choice == 3)
    {
        DemonStration_Of_Arithmatic_Operators();
    }
    else
    {
        printf("--Enter Choice From Given Menu--\n");
    }
    return 0;
}
void DemonStration_Of_Struct()
{
    struct EX1
    {
        int Age;
        int M_No;
    };
    struct EX1 Deep_For_You = {.Age = 18,.M_No = 0000000000};
    printf("Age = %d\n M_No = %d", Deep_For_You.Age, Deep_For_You.M_No);
}
void DemonStration_Of_Array()
{
    int Size, i, n;
    int Arr[30];

    printf("Enter How many Elements You Want to Store In Array\n");
    scanf("%d", &Size);
    // Store Elements
    for (i = 0; i < Size; i++)
    {
        scanf("%d", &Arr[i]);
    }

    // Retrieval Of Elements
    for (i = 0; i < Size; i++)
    {
        printf("%d No Element's Value:-%d\n", i, Arr[i]);
    }
}
void DemonStration_Of_Arithmatic_Operators()
{
    int N1, N2;
    N1 = 10;
    N2 = 3;
    // For Addition
    printf("N1 + N2 = %d\n", (N1 + N2));

    // For Subtraction
    printf("N1 - N2 = %d\n", (N1 - N2));

    // For Multiplication
    printf("N1 * N2 = %d\n", (N1 * N2));

    // For Division
    printf("N1 / N2 = %d\n", (N1 / N2));

    // For Modulo
    printf("N1 % N2 = %d\n", (N1 % N2));

    // For Nagetive
    printf("-N1 = %d\n-N2 = %d", -N1, -N2);
}