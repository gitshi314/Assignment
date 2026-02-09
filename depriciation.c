#include <stdio.h>
int main(){
    int year, depreciation;
    printf("Enter the year of purchase: ");
    scanf("%d", &year);
    int value,salvage;
    printf("Enter the value of the asset: ");
    scanf("%d", &value);
    printf("Enter the salvage value of the asset: ");
    scanf("%d", &salvage);
    depreciation = (value - salvage) / year;
    printf("Depreciation per year: %d\n", depreciation);
    
}