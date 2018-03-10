//
//  main.c
//  intelligentTrain
//
//  Created by IT on 2017. 9. 21..
//  Copyright © 2017년 weAreGood. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int tmp = 0; //현재 기차내 인원
    int most = 0; //최대 기차내 인원
    int station = 0; //각 역마다 타고 내린인원의 합
    int m = 0; //역의 갯수
    int busy_station = 0;
    
    printf("역의 갯수를 입력하세요.(출발역,종점역 포함) : ");
    scanf("%d", &m);
    int in[m - 1];
    int off[m - 1];
    
    for (int j = 1; j < m; j++)
    {
        int k = j - 1;
        if(j == 1)
        {
            printf("출발 역에서의 탑승인원을 입력하세요. : ");
            scanf("%d", &in[k]);
            off[k] = 0;
        }
        
        else
        {
            
            printf("%d번째 역에서의 탑승인원, 하차인원을 입력하세요. : ", j);
            scanf("%d %d", &in[k], &off[k]);
            
        }
    }
    
    
    for(int i = 0; i < (m-1); i++)
    {
        station = in[i] - off[i]; //타고 내린인원 계산
        tmp += station; // 현재 타고있는 인원
        
        
        
        if(tmp > most)
        {
            most = tmp;
            busy_station = i + 1;
        }
        
        
       
    }
    printf("종점 역에서의 하차인원 : %d\n", tmp);
    printf("오늘은 %d번째 역에서 제일 복잡하고, 그 역에서의 승객은 %d명입니다.\n", busy_station, most);
    
    
    return 0;
}
