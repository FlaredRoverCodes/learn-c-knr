#include <stdio.h>

#define TAB_SIZE 8

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    char fahrenheit_s[] = "Fahrenheit";
    char celsius_s[] = "Celsius";

    size_t f_length = sizeof(fahrenheit_s) - 1;
    size_t c_length = sizeof(celsius_s) - 1;

    printf("%s\t|\t%s\n", fahrenheit_s, celsius_s);
    while(fahr <= upper)
    {
        celsius = (5.0f/9.0f) * (fahr - 32.0f);
        printf("%*.0f\t|\t%-*.1f\n", f_length, fahr, c_length, celsius);
        printf("%.*s\n", f_length + (TAB_SIZE * 2)  + c_length, "------------------------------------------------------------");
        fahr += step;
    }
}