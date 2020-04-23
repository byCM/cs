#include <stdio.h>
#include <math.h>

//method to get the user input
void getValues(float* pv, float* r, int* n)
{
    printf("Enter current amount (present value). \n");
    scanf_s("%f", pv);
    printf("Enter yearly interest rate. \n");
    scanf_s("%f", r);
    printf("Enter number of years of compound interest. \n");
    scanf_s("%d", n);

}
int main()
{
    //variable declaration
    float pv, fv, r;
    int n;

    //method calling
    //pass the address of the varible
    getValues(&pv, &r, &n);

    //calculate the final value
    fv = pv * pow(1.0 + r, n);

    //display the result
    printf("$%.2f after %d years with a compound interest rate of %.2f is $%.2f dollars.\n", pv, n, r, fv);

    return 0;
}
