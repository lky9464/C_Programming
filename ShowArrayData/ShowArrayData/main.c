//
//  main.c
//  ShowArrayData
//
//  Created by IT on 2018. 2. 26..
//  Copyright © 2018년 MobileX. All rights reserved.
//

#include <stdio.h>

void ShowAllData(const int * arr, int len){
    for(int i = 0; i < len; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, const char * argv[]) {
    int arr[] = {1, 2, 3, 4, 5};
    
    ShowAllData(arr, sizeof(arr) / sizeof(int));
    
    return 0;
}
