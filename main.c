#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3];
    int i,j;
    int sum=0;

    printf("\nPlease text 3x3 Juzhegn :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                sum+=a[i][j];
            }
        }
    }
    printf("\nThe sum of DuiJiaoXian is :%d\n",sum);

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i+j==3){
                sum+=a[i][j];
            }
        }
    }
    printf("\nThe sum of Fan DuiJiaoXian is :%d\n",sum);
    return 0;
}
