//
//  main.c
//  ArrayParamsAccess
//
//  Created by IT on 2018. 2. 26..
//  Copyright © 2018년 MobileX. All rights reserved.
//

#include <stdio.h>
void ShowArrayElem(int * param, int len){
    for(int i = 0; i < len; i++){
        printf("%d ", param[i]);
    }
    printf("\n");
}
void AddArrayElem(int * param, int len, int add){
    for(int i = 0; i < len; i++){
        param[i] += add;
    }
}
int main(int argc, const char * argv[]) {
    
    int arr[3] = {1, 2, 3};
    ShowArrayElem(arr, sizeof(arr) / sizeof(int));
    
    AddArrayElem(arr, sizeof(arr) / sizeof(int), 5);
    ShowArrayElem(arr, sizeof(arr)/sizeof(int));
    
    return 0;
}
