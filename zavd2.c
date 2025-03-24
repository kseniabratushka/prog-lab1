#include <stdio.h>
#include <math.h>

int main() 
{
    system("chcp 65001");
    int n;
    printf("Введіть кількість елементів масиву: ");
    scanf("%d", &n);
    
    double mas [n];
    printf("Введіть %d чисел: \n", n);
    for (int i = 0; i < n; i += 1) 
    {
        scanf("%lf", &mas[i]);
    }
    
    double sum = 0, product_between = 1;
    int max_index = 0, min_index = 0;
    
    for (int i = 0; i < n; i += 1) 
    {
        if (mas[i] > 0) sum += mas[i];
        if (fabs(mas[i]) > fabs(mas[max_index])) max_index = i;
        if (fabs(mas[i]) < fabs(mas[min_index])) min_index = i;
    }
    
    int start = (max_index < min_index) ? max_index : min_index;
    int end = (max_index < min_index) ? max_index : min_index;
    if (abs(end - start) > 1) 
    {
        for (int i = start + 1; i < end; i += 1) 
        {
            product_between *= mas[i];
        }
    } 
    else 
    {
        product_between = 0.0;
    }
    
    printf("Сума додатних: %.2lf\n", sum);
    if (abs(end - start) > 1) 
        printf("Добуток між max і min за модулем: %.2lf\n", product_between);
    else 
        printf("Добуток дорівнює 0.\n");
    
    return 0;
}
