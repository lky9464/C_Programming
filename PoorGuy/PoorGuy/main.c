//
//  main.c
//  PoorGuy
//
//  Created by IT on 2018. 2. 19..
//  Copyright © 2018년 MobileX. All rights reserved.
//
// 3500원으로 먹을거리 사는 방법(종류별 최소 1개이상 구매)

#include <stdio.h>

#define AMOUNT 1900

int main(int argc, const char * argv[]) {
    printf("소유금액 3500원 물품 종류는 아래와 같음.\n");
    printf("크림빵 : 500원, 새우깡 : 700원, 콜라 : 400원 \n");
    printf("각 물품은 반드시 1개이상 구매하고, 잔돈 없이 살 수 있는 경우의 수는?\n\n");
    
    int breadP = 500;
    int crackerP = 700;
    int cokeP = 400;
    
    for(int i = 0; i*breadP <= 1900; i++){
        int remain1 = AMOUNT - i*breadP;
        
        for(int j = 0; j*crackerP <= remain1; j++){
            int remain2 = remain1 - j*crackerP;
            
            for(int k = 0; k*cokeP <= remain2; k++){
                int remain3 = remain2 - k*cokeP;
                
                if(remain3 == 0){
                    printf("크림빵 : %d개, 새우깡 : %d개, 콜라 : %d개\n", i+1, j+1, k+1);
                }
            }
        }
    }
    return 0;
}
