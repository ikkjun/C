//
//  2_1.c
//  C
//
//  Created by Ikjun Cho on 3/14/24.
//

#include <stdio.h>
int main(void) {
    int age = 14;
    int year;
    
    printf("year:%d\n", year);
    year = age + 2000;
    
    printf("age:%d\n", age);
    printf("year:%d\n", year);
    
    age = age + 1;
    printf("age:%d year:%d\n", age, year);
    
    return 0;
}
