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
    
    if (max_index > min_index) 
    {
        for (int i = min_index + 1; i < max_index; i++) product_between *= mas[i];
    } else if (min_index > max_index) 
    {
        for (int i = max_index + 1; i < min_index; i++) product_between *= mas[i];
    } else 
    {
        product_between = 0;
    }
    
    printf("Сума додатних: %.2lf\n", sum);
    if (max_index != min_index) printf("Добуток між max і min за модулем: %.2lf\n", product_between);
    else printf("Добуток не обчислюється.\n");
    
    return 0;
}
