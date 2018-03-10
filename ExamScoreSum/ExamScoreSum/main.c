//
//  main.c
//  ExamScoreSum
//
//  Created by IT on 2018. 3. 3..
//  Copyright © 2018년 MobileX. All rights reserved.
//
#include <stdio.h>
#define COLS 5
#define ROWS 5

int main(int argc, const char * argv[]) {
    
    int table[COLS][ROWS];
    char * student[4] = {"철희", "철수", "영희", "영수"};
    
    for(int i = 0 ; i < ROWS; i++)
        table[COLS - 1][i] = 0;
    
    //table 정보입력
    for(int i = 0; i < COLS - 1; i++){

        printf("%s의 점수 기입입니다.\n", student[i]);
        
        for(int j=0; j<COLS; j++){
            for(int k=0; k<ROWS; k++){
                printf("%10d", table[j][k]);
            }
            printf("\n");
        }
        
        for(int j = 0; j < ROWS - 1; j++){
            
            switch(j){
                case 0 :
                    printf("국어 점수를 입력하세요. : ");
                    scanf("%d", &table[i][j]);
                    
                    table[i][ROWS - 1] = table[i][j];
                    //printf("%d\n", table[i][ROWS - 1]);
                    
                    table[COLS - 1][j] += table[i][j];
                    //printf("%d\n", table[COLS - 1][i]);
                    break;
                case 1:
                    printf("영어 점수를 입력하세요. : ");
                    scanf("%d", &table[i][j]);
                    table[i][ROWS - 1] += table[i][j];
                    table[COLS - 1][j] += table[i][j];
                    break;
                case 2:
                    printf("수학 점수를 입력하세요. : ");
                    scanf("%d", &table[i][j]);
                    table[i][ROWS - 1] += table[i][j];
                    table[COLS - 1][j] += table[i][j];
                    break;
                default:
                    printf("국사 점수를 입력하세요. : ");
                    scanf("%d", &table[i][j]);
                    table[i][ROWS - 1] += table[i][j];
                    table[COLS - 1][j] += table[i][j];
                    printf("\n");
            }
            
        }
        
    }
    
    for(int i = 0; i < COLS - 1; i++){
        printf("%s의 총 점수 : %d\n", student[i], table[i][ROWS-1]);
    }
    printf("\n");
    
    for(int i = 0; i < ROWS - 1; i++){
        switch(i){
            case 0 :
                printf("학생들이 받은 국어 총 점수 : %d\n", table[COLS-1][i]);
                break;
            case 1 :
                printf("학생들이 받은 영어 총 점수 : %d\n", table[COLS-1][i]);
                break;
            case 2 :
                printf("학생들이 받은 수학 총 점수 : %d\n", table[COLS-1][i]);
                break;
            default:
                printf("학생들이 받은 국사 총 점수 : %d\n", table[COLS-1][i]);
        }
    }
    printf("\n");
    
    
    return 0;
}
