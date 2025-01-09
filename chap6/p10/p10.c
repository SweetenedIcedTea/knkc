#include <stdio.h>

int main(void){
    int me, de, ye, mc, dc, yc, early;
    early = 0;

    printf("Enter date (mm/dd/yy): ");
    scanf("%d/%d/%d", &me, &de, &ye);
    if (me == 0 && de == 0 && ye == 0){
        return 0;
    }
    while(1){
        printf("Enter date (mm/dd/yy): ");
        scanf("%d/%d/%d", &mc, &dc, &yc);
        if (mc == 0 && dc == 0 && yc == 0){
            break;
        }
        if (yc < ye){
            early = 1;
        }
        else if (mc < me){
            early = 1;
        }
        else if (dc < de){
            early = 1;
        }

        if (early){
            ye = yc;
            me = mc;
            de = dc;
        }
    }

    printf("Earliest date: %d/%d/%02d\n", me, de, ye);
  
    return 0;
}