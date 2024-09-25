#include <stdio.h>

int solve = 0;
int how = 0;
/*
int cube[6][4]={
    {1,1,1,1},
    {2,2,2,2},
    {3,3,3,3},
    {4,4,4,4},
    {5,5,5,5},
    {6,6,6,6}
};
*/
int cube[6][4]={
    {1,5,4,5},
    {2,1,2,1},
    {3,1,3,4},
    {4,4,6,6},
    {6,5,2,5},
    {2,3,6,3},
};
int cube_save[6][4]={
    {1,1,1,1},
    {2,2,2,2},
    {3,3,3,3},
    {4,4,4,4},
    {5,5,5,5},
    {6,6,6,6}
};
int cube_data_save[6][4]={
    {1,1,1,1},
    {2,2,2,2},
    {3,3,3,3},
    {4,4,4,4},
    {5,5,5,5},
    {6,6,6,6}
};
int cube_secound_save[6][4]={
    {1,1,1,1},
    {2,2,2,2},
    {3,3,3,3},
    {4,4,4,4},
    {5,5,5,5},
    {6,6,6,6}
};
int cube_third_save[6][4]={
    {1,1,1,1},
    {2,2,2,2},
    {3,3,3,3},
    {4,4,4,4},
    {5,5,5,5},
    {6,6,6,6}
};
int cube_forth_save[6][4]={
    {1,1,1,1},
    {2,2,2,2},
    {3,3,3,3},
    {4,4,4,4},
    {5,5,5,5},
    {6,6,6,6}
};
void cube_init(){
    solve = 0;
    how = 0;
    int cube[6][4]={
    {1,5,4,5},
    {2,1,2,1},
    {3,1,3,4},
    {4,4,6,6},
    {6,5,2,5},
    {2,3,6,3},
    };
}
int check(){
    for(int j = 0;j<6;j++){
        for(int i =1;i<4;i++){
            if(cube[j][0]!=cube[j][i]){
                return 0;
                break;
            }
        }
    }
    return 1;
}
int turn_Tx_Plus(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save[i][j] = cube[i][j];
        }
    }
    cube[0][2]=cube_save[3][0];
    cube[0][3]=cube_save[3][2];
    cube[1][3]=cube_save[0][2];
    cube[1][1]=cube_save[0][3];
    cube[5][1]=cube_save[1][3];
    cube[5][0]=cube_save[1][1];
    cube[3][0]=cube_save[5][1];
    cube[3][2]=cube_save[5][0];
    cube[2][0]=cube_save[2][1];
    cube[2][1]=cube_save[2][3];
    cube[2][2]=cube_save[2][0];
    cube[2][3]=cube_save[2][2];
    for(int j = 0;j<6;j++){
        for(int i =1;i<4;i++){
            if(cube[j][0]!=cube[j][i]){
                return 0;
                break;
            }
        }
    }
    solve = 1;
}
int turn_Tx_minus(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save[i][j] = cube[i][j];
        }
    }
    cube[0][2]=cube_save[1][3];
    cube[0][3]=cube_save[1][1];
    cube[1][3]=cube_save[5][1];
    cube[1][1]=cube_save[5][0];
    cube[5][1]=cube_save[3][0];
    cube[5][0]=cube_save[3][2];
    cube[3][0]=cube_save[0][2];
    cube[3][2]=cube_save[0][3];
    cube[2][0]=cube_save[2][2];
    cube[2][1]=cube_save[2][0];
    cube[2][2]=cube_save[2][3];
    cube[2][3]=cube_save[2][1];
    for(int j = 0;j<6;j++){
        for(int i =1;i<4;i++){
            if(cube[j][0]!=cube[j][i]){
                return 0;
                break;
            }
        }
    }
    solve = 1;
}
int turn_Ty_Plus(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save[i][j] = cube[i][j];
        }
    }
    cube[0][1]=cube_save[4][2];
    cube[0][3]=cube_save[4][0];
    cube[2][1]=cube_save[0][1];
    cube[2][3]=cube_save[0][3];
    cube[5][1]=cube_save[2][1];
    cube[5][3]=cube_save[2][3];
    cube[4][2]=cube_save[5][1];
    cube[4][0]=cube_save[5][3];
    cube[3][0]=cube_save[3][1];
    cube[3][1]=cube_save[3][3];
    cube[3][2]=cube_save[3][0];
    cube[3][3]=cube_save[3][2];
    for(int j = 0;j<6;j++){
        for(int i =1;i<4;i++){
            if(cube[j][0]!=cube[j][i]){
                return 0;
                break;
            }
        }
    }
    solve = 1;
}
int turn_Ty_minus(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save[i][j] = cube[i][j];
        }
    }
    cube[0][1]=cube_save[2][1];
    cube[0][3]=cube_save[2][3];
    cube[2][1]=cube_save[5][1];
    cube[2][3]=cube_save[5][3];
    cube[5][1]=cube_save[4][2];
    cube[5][3]=cube_save[4][0];
    cube[4][2]=cube_save[0][1];
    cube[4][0]=cube_save[0][3];
    cube[3][0]=cube_save[3][2];
    cube[3][1]=cube_save[3][0];
    cube[3][2]=cube_save[3][3];
    cube[3][3]=cube_save[3][1];
    for(int j = 0;j<6;j++){
        for(int i =1;i<4;i++){
            if(cube[j][0]!=cube[j][i]){
                return 0;
                break;
            }
        }
    }
    solve = 1;
    printf("\n\n%d\n\n",solve);
}
int turn_Tz_Plus(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save[i][j] = cube[i][j];
        }
    }
    cube[0][0]=cube_save[0][1];
    cube[0][1]=cube_save[0][3];
    cube[0][2]=cube_save[0][0];
    cube[0][3]=cube_save[0][2];
    cube[2][0]=cube_save[1][0];
    cube[2][1]=cube_save[1][1];
    cube[3][0]=cube_save[2][0];
    cube[3][1]=cube_save[2][1];
    cube[4][0]=cube_save[3][0];
    cube[4][1]=cube_save[3][1];
    cube[1][0]=cube_save[4][0];
    cube[1][1]=cube_save[4][1];
    for(int j = 0;j<6;j++){
        for(int i =1;i<4;i++){
            if(cube[j][0]!=cube[j][i]){
                return 0;
                break;
            }
        }
    }
    solve = 1;
}
int turn_Tz_minus(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save[i][j] = cube[i][j];
        }
    }
    cube[0][0]=cube_save[0][2];
    cube[0][1]=cube_save[0][0];
    cube[0][2]=cube_save[0][3];
    cube[0][3]=cube_save[0][1];
    cube[2][0]=cube_save[3][0];
    cube[2][1]=cube_save[3][1];
    cube[3][0]=cube_save[4][0];
    cube[3][1]=cube_save[4][1];
    cube[4][0]=cube_save[1][0];
    cube[4][1]=cube_save[1][1];
    cube[1][0]=cube_save[2][0];
    cube[1][1]=cube_save[2][1];
    for(int j = 0;j<6;j++){
        for(int i =1;i<4;i++){
            if(cube[j][0]!=cube[j][i]){
                return 0;
                break;
            }
        }
    }
    solve = 1;
}
int set(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++){
            cube[i][j] = cube_data_save[i][j];
        }
    }
}
int turn_all(){
    set();
    turn_Tx_minus();
    set();
    turn_Tx_Plus();
    set();
    turn_Ty_minus();
    set();
    turn_Ty_Plus();
    set();
    turn_Tz_minus();
    set();
    turn_Tz_Plus();
}



void main(){
    cube_init();
    check();
    if(solve==1){
        how=0;
    }
    for(int l=0;l<1;l++){
        turn_Ty_minus();
        if(check() == 1){
            how=1;
            break;
        }
        for(int i=0;i<6;i++){
            for (int j = 0; j < 4; j++){
                cube_data_save[i][j] = cube[i][j];
            }
        }
        turn_all();
        if (solve == 1)
        {
            how=2;
            break;
        }
        turn_Tx_minus();
    }
    /*
    printf("now^check");
    first();
    printf("now^check1");
    secound();
    printf("now^check2");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d,",cube[i][j]);
        }
        printf("\n");
    }
    */
    printf("%d",how);
    
}
