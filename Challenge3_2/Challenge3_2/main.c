//
//  main.c
//  Challenge3_2
//
//  Created by IT on 2018. 3. 6..
//  Copyright © 2018년 MobileX. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int user = 0;
    int value = 0;
    printf("n*n 행렬을 만듭니다. n을 입력해주세요.(정수) : ");
    scanf("%d", &user); //배열 가로or세로 길이 입력
    int staticUser = user; //user값 변화가 불필요 할 경우 사용
    int arr[user][user];
    
    int w = 0, x = 1, y = 2, z = 0;
    // for ...
    
    for (int k = user; k > 0; k -= 2) {
        
        int ww = w, xx = x, yy = y, zz = z;
        int temp = user;
        
        for (; ww < temp; ww++) { // 오른쪽 진행
            value += 1;
            arr[w][ww] = value;
        }
        w++; //clear1 //clear2 //..
        
        for (; xx < temp; xx++) { // 아래쪽 진행
            value += 1;
            arr[xx][temp - 1] = value;
        }
        x++; //clear1 //clear2 //..
        
        for (; yy < temp; yy++) { //왼쪽 진행
            value += 1;
            arr[temp - 1][staticUser-yy] = value;
        }
        y++; //clear1 //clear2 //..
        
        for (; zz < temp - 1; zz++) { //위쪽 진행
            value += 1;
            arr[staticUser - zz - 1][z] = value;
        }
        z++; //clear1 //clear2 //..
        
        user--;
    }
    
    
    printf("완성된 배열 (%d)\n", staticUser);
    
    for(int i = 0; i < staticUser; i++){
        for(int j = 0; j < staticUser; j++){
            printf("%8d", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    return 0;
}


