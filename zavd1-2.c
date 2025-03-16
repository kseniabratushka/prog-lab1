#include <stdio.h>
#include <math.h>

int main() 
{
    system("chcp 65001");
    
    int n;
    printf("Введіть кількість елементів масиву: ");
    scanf("%d", &n);
    
    int mas [n];
    printf("Введіть %d цілих чисел: \n", n);
    for (int i = 0; i < n; i += 1) 
    {
        scanf("%d", &mas[i]);
    }
    
    int sum_even = 0, count_even = 0, product_odd = 1, count_odd = 0, max_value = mas[0], max_index = 0;
    
    for (int i = 0; i < n; i += 1) 
    {
        if (mas[i] % 2 == 0) 
        {
            sum_even += mas[i];
            count_even++;
        } 
        else 
        {
            product_odd *= mas[i];
            count_odd++;
        }
        
        if (mas[i] > max_value) 
        {
            max_value = mas[i];
            max_index = i;
        }
    }
    
    printf("Сума парних чисел: %d\n", sum_even);
    if (count_even > 0) 
    {
        printf("Середнє арифметичне парних чисел: %.2f\n", (float)sum_even / count_even);
    } else 
    {
        printf("Парних чисел немає.\n");
    }
    
    if (count_odd > 0) 
    {
        printf("Добуток непарних чисел: %d\n", product_odd);
        printf("Середнє геометричне непарних чисел: %.2f\n", pow((double)product_odd, 1.0 / count_odd));
    } 
    else 
    {
        printf("Непарних чисел немає.\n");
    }
    
    printf("Максимальне значення: %d, його номер у масиві: %d\n", max_value, max_index);
    
    return 0;
}
