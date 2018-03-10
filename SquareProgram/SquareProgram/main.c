//
//  main.c
//  SquareProgram
//
//  Created by IT on 2018. 2. 26..
//  Copyright © 2018년 MobileX. All rights reserved.
//

#include <stdio.h>

void SquareByValue(int n){
    n *= n;
    printf("%d\n", n);
}
void SquareByReference(int * n){
    (*n) *= (*n);
    printf("%d\n", *n);
}
int main(int argc, const char * argv[]) {
    
    int num = 12;
    
    SquareByValue(num);
    SquareByReference(&num);
    return 0;
}
