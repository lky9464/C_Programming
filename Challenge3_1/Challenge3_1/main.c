//
//  main.c
//  Challenge3_1
//
//  Created by IT on 2018. 3. 3..
//  Copyright © 2018년 MobileX. All rights reserved.
//

#include <stdio.h>
#define COLS 4
#define ROWS 4

int turnArray(int tempArray[4][4]){
    
    for(int i = 0; i < 4; i++){
        
        int temp = tempArray[i][0];
        tempArray[i][0] = tempArray[i][3];
        tempArray[i][3] = temp;
        
        int temp2 = tempArray[i][1];
        tempArray[i][1] = tempArray[i][2];
        tempArray[i][2] = temp2;
        
        
    }
    for(int i = 0; i < 4; i++){
        
        for(int j = 0; j < 4; j++){
            
            if(i == j && i + j < 3){
                int temp = tempArray[i][j];
                tempArray[i][j] = tempArray[3-i][3-j];
                tempArray[3-i][3-j] = temp;
            }else if(i + j == 1){
                int temp = tempArray[i][j];
                tempArray[i][j] = tempArray[i+2][j+2];
                tempArray[i+2][j+2] = temp;
            }else if(i + j == 2 && i != j){
                int temp = tempArray[i][j];
                tempArray[i][j] = tempArray[i+1][j+1];
                tempArray[i+1][j+1] = temp;
            }
        }
    }
    
    return *tempArray[4];
}

int main(int argc, const char * argv[]) {
    
    int twoDim[4][4];
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            twoDim[i][j] = i*4 + j + 1;
        }
    }
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%2d ", twoDim[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    
    printf("90도 회전 (1번)\n");
    twoDim[4][4] = turnArray(twoDim); //시계방향 90도회전
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%2d ", twoDim[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    printf("90도 회전 (2번)\n");
    twoDim[4][4] = turnArray(twoDim); //시계방향 90도회전 * 2
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%2d ", twoDim[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    printf("90도 회전 (3번)\n");
    twoDim[4][4] = turnArray(twoDim); //시계방향 90도회전 * 3
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%2d ", twoDim[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    
    
    return 0;
}
