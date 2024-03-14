//
//  2_2.c
//  C
//
//  Created by Ikjun Cho on 3/14/24.
//

#include <stdio.h>

int main(void) {
    int x = 10;
    int y = 20;
    int tmp;
    
    printf("x:%d y:%d\n", x, y);
    
    tmp = x;
    x = y;
    y = tmp;
    
    printf("x:%d y:%d\n", x, y);
    return 0;
}
