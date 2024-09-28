#include <stdio.h>
int cube[6][4]={
    {1,1,1,1},
    {2,2,2,2},
    {3,3,3,3},
    {4,4,4,4},
    {5,5,5,5},
    {6,6,6,6}
};

int cube_save[6][4]={
    {1,1,1,1},
    {2,2,2,2},
    {3,3,3,3},
    {4,4,4,4},
    {5,5,5,5},
    {6,6,6,6}
};
int turn_Tx_Plus(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save[i][j] = cube[i][j];
        }
    }
    cube[4][3]=cube_save[3][1];
    cube[4][2]=cube_save[3][3];
    cube[1][2]=cube_save[4][3];
    cube[1][0]=cube_save[4][2];
    cube[5][0]=cube_save[1][2];
    cube[5][1]=cube_save[1][0];
    cube[3][1]=cube_save[5][0];
    cube[3][3]=cube_save[5][1];
    cube[0][1]=cube_save[0][0];
    cube[0][0]=cube_save[0][2];
    cube[0][3]=cube_save[0][1];
    cube[0][2]=cube_save[0][3];
}
int turn_Tx_minus(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save[i][j] = cube[i][j];
        }
    }
    cube[4][3]=cube_save[1][2];
    cube[4][2]=cube_save[1][0];
    cube[1][2]=cube_save[5][0];
    cube[1][0]=cube_save[5][1];
    cube[5][0]=cube_save[3][1];
    cube[5][1]=cube_save[3][3];
    cube[3][1]=cube_save[4][3];
    cube[3][3]=cube_save[4][2];
    cube[0][1]=cube_save[0][3];
    cube[0][0]=cube_save[0][1];
    cube[0][3]=cube_save[0][2];
    cube[0][2]=cube_save[0][0];
}
int turn_Ty_Plus(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save[i][j] = cube[i][j];
        }
    }
    cube[4][0]=cube_save[2][3];
    cube[4][2]=cube_save[2][1];
    cube[0][0]=cube_save[4][0];
    cube[0][2]=cube_save[4][2];
    cube[5][0]=cube_save[0][0];
    cube[5][2]=cube_save[0][2];
    cube[2][3]=cube_save[5][0];
    cube[2][1]=cube_save[5][2];
    cube[3][1]=cube_save[3][0];
    cube[3][0]=cube_save[3][2];
    cube[3][3]=cube_save[3][1];
    cube[3][2]=cube_save[3][3];
}
int turn_Ty_minus(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save[i][j] = cube[i][j];
        }
    }//0>4,2>0,4>2,
    cube[4][0]=cube_save[0][0];
    cube[4][2]=cube_save[0][2];
    cube[0][0]=cube_save[5][0];
    cube[0][2]=cube_save[5][2];
    cube[5][0]=cube_save[2][3];
    cube[5][2]=cube_save[2][1];
    cube[2][3]=cube_save[4][0];
    cube[2][1]=cube_save[4][2];
    cube[3][1]=cube_save[3][3];
    cube[3][0]=cube_save[3][1];
    cube[3][3]=cube_save[3][2];
    cube[3][2]=cube_save[3][0];
}
int turn_Tz_Plus(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save[i][j] = cube[i][j];
        }
    }
    cube[4][0]=cube_save[4][2];
    cube[4][1]=cube_save[4][0];
    cube[4][2]=cube_save[4][3];
    cube[4][3]=cube_save[4][1];
    cube[0][0]=cube_save[1][0];
    cube[0][1]=cube_save[1][1];
    cube[3][0]=cube_save[0][0];
    cube[3][1]=cube_save[0][1];
    cube[2][0]=cube_save[3][0];
    cube[2][1]=cube_save[3][1];
    cube[1][0]=cube_save[2][0];
    cube[1][1]=cube_save[2][1];
}
int turn_Tz_minus(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save[i][j] = cube[i][j];
        }
    }
    cube[4][1]=cube_save[4][3];
    cube[4][0]=cube_save[4][1];
    cube[4][3]=cube_save[4][2];
    cube[4][2]=cube_save[4][0];
    cube[0][1]=cube_save[3][1];
    cube[0][0]=cube_save[3][0];
    cube[3][1]=cube_save[2][1];
    cube[3][0]=cube_save[2][0];
    cube[2][1]=cube_save[1][1];
    cube[2][0]=cube_save[1][0];
    cube[1][1]=cube_save[0][1];
    cube[1][0]=cube_save[0][0];
}
void main(){
    turn_Ty_minus();
    turn_Tx_minus();
    turn_Ty_Plus();
    turn_Tz_minus();
    turn_Ty_minus();
    turn_Tz_minus();
    turn_Tx_Plus();
    //turn_Tz_Plus();
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d,",cube[i][j]);
        }
        printf("\n");
    }
}
