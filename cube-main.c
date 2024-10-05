#include <stdio.h>
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
    {2,2,6,1},
    {3,5,2,2},
    {4,4,3,5},
    {6,1,4,4},
    {2,5,6,5},
    {5,6,4,3},
};

int cube_save[6][4]={
    {1,1,1,1},
    {2,2,2,2},
    {3,3,3,3},
    {4,4,4,4},
    {5,5,5,5},
    {6,6,6,6}
};
int cube_save1[6][4]={
    {1,1,1,1},
    {2,2,2,2},
    {3,3,3,3},
    {4,4,4,4},
    {5,5,5,5},
    {6,6,6,6}
};
int cube_save2[6][4]={
    {1,1,1,1},
    {2,2,2,2},
    {3,3,3,3},
    {4,4,4,4},
    {5,5,5,5},
    {6,6,6,6}
};
int cube_save3[6][4]={
    {1,1,1,1},
    {2,2,2,2},
    {3,3,3,3},
    {4,4,4,4},
    {5,5,5,5},
    {6,6,6,6}
};
int cube_save4[6][4]={
    {1,1,1,1},
    {2,2,2,2},
    {3,3,3,3},
    {4,4,4,4},
    {5,5,5,5},
    {6,6,6,6}
};
int cube_save5[6][4]={
    {1,1,1,1},
    {2,2,2,2},
    {3,3,3,3},
    {4,4,4,4},
    {5,5,5,5},
    {6,6,6,6}
};
int cube_save6[6][4]={
    {1,1,1,1},
    {2,2,2,2},
    {3,3,3,3},
    {4,4,4,4},
    {5,5,5,5},
    {6,6,6,6}
};
int cube_save7[6][4]={
    {1,1,1,1},
    {2,2,2,2},
    {3,3,3,3},
    {4,4,4,4},
    {5,5,5,5},
    {6,6,6,6}
};

int turn_Tx_Plus1(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save1[i][j] = cube_save2[i][j];
        }
    }
    cube_save1[4][3]=cube_save2[3][1];
    cube_save1[4][2]=cube_save2[3][3];
    cube_save1[1][2]=cube_save2[4][3];
    cube_save1[1][0]=cube_save2[4][2];
    cube_save1[5][0]=cube_save2[1][2];
    cube_save1[5][1]=cube_save2[1][0];
    cube_save1[3][1]=cube_save2[5][0];
    cube_save1[3][3]=cube_save2[5][1];
    cube_save1[0][1]=cube_save2[0][0];
    cube_save1[0][0]=cube_save2[0][2];
    cube_save1[0][3]=cube_save2[0][1];
    cube_save1[0][2]=cube_save2[0][3];
}
int turn_Tx_minus1(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save1[i][j] = cube_save2[i][j];
        }
    }
    cube_save1[4][3]=cube_save2[1][2];
    cube_save1[4][2]=cube_save2[1][0];
    cube_save1[1][2]=cube_save2[5][0];
    cube_save1[1][0]=cube_save2[5][1];
    cube_save1[5][0]=cube_save2[3][1];
    cube_save1[5][1]=cube_save2[3][3];
    cube_save1[3][1]=cube_save2[4][3];
    cube_save1[3][3]=cube_save2[4][2];
    cube_save1[0][1]=cube_save2[0][3];
    cube_save1[0][0]=cube_save2[0][1];
    cube_save1[0][3]=cube_save2[0][2];
    cube_save1[0][2]=cube_save2[0][0];
}
int turn_Ty_Plus1(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save1[i][j] = cube_save2[i][j];
        }
    }
    cube_save1[4][0]=cube_save2[2][3];
    cube_save1[4][2]=cube_save2[2][1];
    cube_save1[0][0]=cube_save2[4][0];
    cube_save1[0][2]=cube_save2[4][2];
    cube_save1[5][0]=cube_save2[0][0];
    cube_save1[5][2]=cube_save2[0][2];
    cube_save1[2][3]=cube_save2[5][0];
    cube_save1[2][1]=cube_save2[5][2];
    cube_save1[3][1]=cube_save2[3][0];
    cube_save1[3][0]=cube_save2[3][2];
    cube_save1[3][3]=cube_save2[3][1];
    cube_save1[3][2]=cube_save2[3][3];
}
int turn_Ty_minus1(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save1[i][j] = cube_save2[i][j];
        }
    }
    cube_save1[4][0]=cube_save2[0][0];
    cube_save1[4][2]=cube_save2[0][2];
    cube_save1[0][0]=cube_save2[5][0];
    cube_save1[0][2]=cube_save2[5][2];
    cube_save1[5][0]=cube_save2[2][3];
    cube_save1[5][2]=cube_save2[2][1];
    cube_save1[2][3]=cube_save2[4][0];
    cube_save1[2][1]=cube_save2[4][2];
    cube_save1[3][1]=cube_save2[3][3];
    cube_save1[3][0]=cube_save2[3][1];
    cube_save1[3][3]=cube_save2[3][2];
    cube_save1[3][2]=cube_save2[3][0];
}
int turn_Tz_Plus1(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save1[i][j] = cube_save2[i][j];
        }
    }
    cube_save1[4][0]=cube_save2[4][2];
    cube_save1[4][1]=cube_save2[4][0];
    cube_save1[4][2]=cube_save2[4][3];
    cube_save1[4][3]=cube_save2[4][1];
    cube_save1[0][0]=cube_save2[1][0];
    cube_save1[0][1]=cube_save2[1][1];
    cube_save1[3][0]=cube_save2[0][0];
    cube_save1[3][1]=cube_save2[0][1];
    cube_save1[2][0]=cube_save2[3][0];
    cube_save1[2][1]=cube_save2[3][1];
    cube_save1[1][0]=cube_save2[2][0];
    cube_save1[1][1]=cube_save2[2][1];
}
int turn_Tz_minus1(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save1[i][j] = cube_save2[i][j];
        }
    }
    cube_save1[4][1]=cube_save2[4][3];
    cube_save1[4][0]=cube_save2[4][1];
    cube_save1[4][3]=cube_save2[4][2];
    cube_save1[4][2]=cube_save2[4][0];
    cube_save1[0][1]=cube_save2[3][1];
    cube_save1[0][0]=cube_save2[3][0];
    cube_save1[3][1]=cube_save2[2][1];
    cube_save1[3][0]=cube_save2[2][0];
    cube_save1[2][1]=cube_save2[1][1];
    cube_save1[2][0]=cube_save2[1][0];
    cube_save1[1][1]=cube_save2[0][1];
    cube_save1[1][0]=cube_save2[0][0];
}

int check1(){
    for(int i=0;i<6;i++){
        for(int j=1;j<4;j++){
            if(cube_save1[i][0]!=cube_save1[i][j]){
                return 0;
            }
        }
    }
    return 1;
}

int turn_Tx_Plus2(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save2[i][j] = cube_save3[i][j];
        }
    }
    cube_save2[4][3]=cube_save3[3][1];
    cube_save2[4][2]=cube_save3[3][3];
    cube_save2[1][2]=cube_save3[4][3];
    cube_save2[1][0]=cube_save3[4][2];
    cube_save2[5][0]=cube_save3[1][2];
    cube_save2[5][1]=cube_save3[1][0];
    cube_save2[3][1]=cube_save3[5][0];
    cube_save2[3][3]=cube_save3[5][1];
    cube_save2[0][1]=cube_save3[0][0];
    cube_save2[0][0]=cube_save3[0][2];
    cube_save2[0][3]=cube_save3[0][1];
    cube_save2[0][2]=cube_save3[0][3];
}
int turn_Tx_minus2(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save2[i][j] = cube_save3[i][j];
        }
    }
    cube_save2[4][3]=cube_save3[1][2];
    cube_save2[4][2]=cube_save3[1][0];
    cube_save2[1][2]=cube_save3[5][0];
    cube_save2[1][0]=cube_save3[5][1];
    cube_save2[5][0]=cube_save3[3][1];
    cube_save2[5][1]=cube_save3[3][3];
    cube_save2[3][1]=cube_save3[4][3];
    cube_save2[3][3]=cube_save3[4][2];
    cube_save2[0][1]=cube_save3[0][3];
    cube_save2[0][0]=cube_save3[0][1];
    cube_save2[0][3]=cube_save3[0][2];
    cube_save2[0][2]=cube_save3[0][0];
}
int turn_Ty_Plus2(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save2[i][j] = cube_save3[i][j];
        }
    }
    cube_save2[4][0]=cube_save3[2][3];
    cube_save2[4][2]=cube_save3[2][1];
    cube_save2[0][0]=cube_save3[4][0];
    cube_save2[0][2]=cube_save3[4][2];
    cube_save2[5][0]=cube_save3[0][0];
    cube_save2[5][2]=cube_save3[0][2];
    cube_save2[2][3]=cube_save3[5][0];
    cube_save2[2][1]=cube_save3[5][2];
    cube_save2[3][1]=cube_save3[3][0];
    cube_save2[3][0]=cube_save3[3][2];
    cube_save2[3][3]=cube_save3[3][1];
    cube_save2[3][2]=cube_save3[3][3];
}
int turn_Ty_minus2(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save2[i][j] = cube_save3[i][j];
        }
    }
    cube_save2[4][0]=cube_save3[0][0];
    cube_save2[4][2]=cube_save3[0][2];
    cube_save2[0][0]=cube_save3[5][0];
    cube_save2[0][2]=cube_save3[5][2];
    cube_save2[5][0]=cube_save3[2][3];
    cube_save2[5][2]=cube_save3[2][1];
    cube_save2[2][3]=cube_save3[4][0];
    cube_save2[2][1]=cube_save3[4][2];
    cube_save2[3][1]=cube_save3[3][3];
    cube_save2[3][0]=cube_save3[3][1];
    cube_save2[3][3]=cube_save3[3][2];
    cube_save2[3][2]=cube_save3[3][0];
}
int turn_Tz_Plus2(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save2[i][j] = cube_save3[i][j];
        }
    }
    cube_save2[4][0]=cube_save3[4][2];
    cube_save2[4][1]=cube_save3[4][0];
    cube_save2[4][2]=cube_save3[4][3];
    cube_save2[4][3]=cube_save3[4][1];
    cube_save2[0][0]=cube_save3[1][0];
    cube_save2[0][1]=cube_save3[1][1];
    cube_save2[3][0]=cube_save2[0][0];
    cube_save2[3][1]=cube_save3[0][1];
    cube_save2[2][0]=cube_save3[3][0];
    cube_save2[2][1]=cube_save3[3][1];
    cube_save2[1][0]=cube_save3[2][0];
    cube_save2[1][1]=cube_save3[2][1];
}
int turn_Tz_minus2(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save2[i][j] = cube_save3[i][j];
        }
    }
    cube_save2[4][1]=cube_save3[4][3];
    cube_save2[4][0]=cube_save3[4][1];
    cube_save2[4][3]=cube_save3[4][2];
    cube_save2[4][2]=cube_save3[4][0];
    cube_save2[0][1]=cube_save3[3][1];
    cube_save2[0][0]=cube_save3[3][0];
    cube_save2[3][1]=cube_save3[2][1];
    cube_save2[3][0]=cube_save3[2][0];
    cube_save2[2][1]=cube_save3[1][1];
    cube_save2[2][0]=cube_save3[1][0];
    cube_save2[1][1]=cube_save3[0][1];
    cube_save2[1][0]=cube_save3[0][0];
}

int turn_Tx_Plus3(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save3[i][j] = cube_save4[i][j];
        }
    }
    cube_save3[4][3]=cube_save4[3][1];
    cube_save3[4][2]=cube_save4[3][3];
    cube_save3[1][2]=cube_save4[4][3];
    cube_save3[1][0]=cube_save4[4][2];
    cube_save3[5][0]=cube_save4[1][2];
    cube_save3[5][1]=cube_save4[1][0];
    cube_save3[3][1]=cube_save4[5][0];
    cube_save3[3][3]=cube_save4[5][1];
    cube_save3[0][1]=cube_save4[0][0];
    cube_save3[0][0]=cube_save4[0][2];
    cube_save3[0][3]=cube_save4[0][1];
    cube_save3[0][2]=cube_save4[0][3];
}
int turn_Tx_minus3(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save3[i][j] = cube_save4[i][j];
        }
    }
    cube_save3[4][3]=cube_save4[1][2];
    cube_save3[4][2]=cube_save4[1][0];
    cube_save3[1][2]=cube_save4[5][0];
    cube_save3[1][0]=cube_save4[5][1];
    cube_save3[5][0]=cube_save4[3][1];
    cube_save3[5][1]=cube_save4[3][3];
    cube_save3[3][1]=cube_save4[4][3];
    cube_save3[3][3]=cube_save4[4][2];
    cube_save3[0][1]=cube_save4[0][3];
    cube_save3[0][0]=cube_save4[0][1];
    cube_save3[0][3]=cube_save4[0][2];
    cube_save3[0][2]=cube_save4[0][0];
}
int turn_Ty_Plus3(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save3[i][j] = cube_save4[i][j];
        }
    }
    cube_save3[4][0]=cube_save4[2][3];
    cube_save3[4][2]=cube_save4[2][1];
    cube_save3[0][0]=cube_save4[4][0];
    cube_save3[0][2]=cube_save4[4][2];
    cube_save3[5][0]=cube_save4[0][0];
    cube_save3[5][2]=cube_save4[0][2];
    cube_save3[2][3]=cube_save4[5][0];
    cube_save3[2][1]=cube_save4[5][2];
    cube_save3[3][1]=cube_save4[3][0];
    cube_save3[3][0]=cube_save4[3][2];
    cube_save3[3][3]=cube_save4[3][1];
    cube_save3[3][2]=cube_save4[3][3];
}
int turn_Ty_minus3(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save3[i][j] = cube_save4[i][j];
        }
    }
    cube_save3[4][0]=cube_save4[0][0];
    cube_save3[4][2]=cube_save4[0][2];
    cube_save3[0][0]=cube_save4[5][0];
    cube_save3[0][2]=cube_save4[5][2];
    cube_save3[5][0]=cube_save4[2][3];
    cube_save3[5][2]=cube_save4[2][1];
    cube_save3[2][3]=cube_save4[4][0];
    cube_save3[2][1]=cube_save4[4][2];
    cube_save3[3][1]=cube_save4[3][3];
    cube_save3[3][0]=cube_save4[3][1];
    cube_save3[3][3]=cube_save4[3][2];
    cube_save3[3][2]=cube_save4[3][0];
}
int turn_Tz_Plus3(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save3[i][j] = cube_save4[i][j];
        }
    }
    cube_save3[4][0]=cube_save4[4][2];
    cube_save3[4][1]=cube_save4[4][0];
    cube_save3[4][2]=cube_save4[4][3];
    cube_save3[4][3]=cube_save4[4][1];
    cube_save3[0][0]=cube_save4[1][0];
    cube_save3[0][1]=cube_save4[1][1];
    cube_save3[3][0]=cube_save4[0][0];
    cube_save3[3][1]=cube_save4[0][1];
    cube_save3[2][0]=cube_save4[3][0];
    cube_save3[2][1]=cube_save4[3][1];
    cube_save3[1][0]=cube_save4[2][0];
    cube_save3[1][1]=cube_save4[2][1];
}
int turn_Tz_minus3(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save3[i][j] = cube_save4[i][j];
        }
    }
    cube_save3[4][1]=cube_save4[4][3];
    cube_save3[4][0]=cube_save4[4][1];
    cube_save3[4][3]=cube_save4[4][2];
    cube_save3[4][2]=cube_save4[4][0];
    cube_save3[0][1]=cube_save4[3][1];
    cube_save3[0][0]=cube_save4[3][0];
    cube_save3[3][1]=cube_save4[2][1];
    cube_save3[3][0]=cube_save4[2][0];
    cube_save3[2][1]=cube_save4[1][1];
    cube_save3[2][0]=cube_save4[1][0];
    cube_save3[1][1]=cube_save4[0][1];
    cube_save3[1][0]=cube_save4[0][0];
}

int turn_Tx_Plus4(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save4[i][j] = cube_save5[i][j];
        }
    }
    cube_save4[4][3]=cube_save5[3][1];
    cube_save4[4][2]=cube_save5[3][3];
    cube_save4[1][2]=cube_save5[4][3];
    cube_save4[1][0]=cube_save5[4][2];
    cube_save4[5][0]=cube_save5[1][2];
    cube_save4[5][1]=cube_save5[1][0];
    cube_save4[3][1]=cube_save5[5][0];
    cube_save4[3][3]=cube_save5[5][1];
    cube_save4[0][1]=cube_save5[0][0];
    cube_save4[0][0]=cube_save5[0][2];
    cube_save4[0][3]=cube_save5[0][1];
    cube_save4[0][2]=cube_save5[0][3];
}
int turn_Tx_minus4(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save4[i][j] = cube_save5[i][j];
        }
    }
    cube_save4[4][3]=cube_save5[1][2];
    cube_save4[4][2]=cube_save5[1][0];
    cube_save4[1][2]=cube_save5[5][0];
    cube_save4[1][0]=cube_save5[5][1];
    cube_save4[5][0]=cube_save5[3][1];
    cube_save4[5][1]=cube_save5[3][3];
    cube_save4[3][1]=cube_save5[4][3];
    cube_save4[3][3]=cube_save5[4][2];
    cube_save4[0][1]=cube_save5[0][3];
    cube_save4[0][0]=cube_save5[0][1];
    cube_save4[0][3]=cube_save5[0][2];
    cube_save4[0][2]=cube_save5[0][0];
}
int turn_Ty_Plus4(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save4[i][j] = cube_save5[i][j];
        }
    }
    cube_save4[4][0]=cube_save5[2][3];
    cube_save4[4][2]=cube_save5[2][1];
    cube_save4[0][0]=cube_save5[4][0];
    cube_save4[0][2]=cube_save5[4][2];
    cube_save4[5][0]=cube_save5[0][0];
    cube_save4[5][2]=cube_save5[0][2];
    cube_save4[2][3]=cube_save5[5][0];
    cube_save4[2][1]=cube_save5[5][2];
    cube_save4[3][1]=cube_save5[3][0];
    cube_save4[3][0]=cube_save5[3][2];
    cube_save4[3][3]=cube_save5[3][1];
    cube_save4[3][2]=cube_save5[3][3];
}
int turn_Ty_minus4(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save4[i][j] = cube_save5[i][j];
        }
    }
    cube_save4[4][0]=cube_save5[0][0];
    cube_save4[4][2]=cube_save5[0][2];
    cube_save4[0][0]=cube_save5[5][0];
    cube_save4[0][2]=cube_save5[5][2];
    cube_save4[5][0]=cube_save5[2][3];
    cube_save4[5][2]=cube_save5[2][1];
    cube_save4[2][3]=cube_save5[4][0];
    cube_save4[2][1]=cube_save5[4][2];
    cube_save4[3][1]=cube_save5[3][3];
    cube_save4[3][0]=cube_save5[3][1];
    cube_save4[3][3]=cube_save5[3][2];
    cube_save4[3][2]=cube_save5[3][0];
}
int turn_Tz_Plus4(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save4[i][j] = cube_save5[i][j];
        }
    }
    cube_save4[4][0]=cube_save5[4][2];
    cube_save4[4][1]=cube_save5[4][0];
    cube_save4[4][2]=cube_save5[4][3];
    cube_save4[4][3]=cube_save5[4][1];
    cube_save4[0][0]=cube_save5[1][0];
    cube_save4[0][1]=cube_save5[1][1];
    cube_save4[3][0]=cube_save5[0][0];
    cube_save4[3][1]=cube_save5[0][1];
    cube_save4[2][0]=cube_save5[3][0];
    cube_save4[2][1]=cube_save5[3][1];
    cube_save4[1][0]=cube_save5[2][0];
    cube_save4[1][1]=cube_save5[2][1];
}
int turn_Tz_minus4(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save4[i][j] = cube_save5[i][j];
        }
    }
    cube_save4[4][1]=cube_save5[4][3];
    cube_save4[4][0]=cube_save5[4][1];
    cube_save4[4][3]=cube_save5[4][2];
    cube_save4[4][2]=cube_save5[4][0];
    cube_save4[0][1]=cube_save5[3][1];
    cube_save4[0][0]=cube_save5[3][0];
    cube_save4[3][1]=cube_save5[2][1];
    cube_save4[3][0]=cube_save5[2][0];
    cube_save4[2][1]=cube_save5[1][1];
    cube_save4[2][0]=cube_save5[1][0];
    cube_save4[1][1]=cube_save5[0][1];
    cube_save4[1][0]=cube_save5[0][0];
}

int turn_Tx_Plus5(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save5[i][j] = cube_save6[i][j];
        }
    }
    cube_save5[4][3]=cube_save6[3][1];
    cube_save5[4][2]=cube_save6[3][3];
    cube_save5[1][2]=cube_save6[4][3];
    cube_save5[1][0]=cube_save6[4][2];
    cube_save5[5][0]=cube_save6[1][2];
    cube_save5[5][1]=cube_save6[1][0];
    cube_save5[3][1]=cube_save6[5][0];
    cube_save5[3][3]=cube_save6[5][1];
    cube_save5[0][1]=cube_save6[0][0];
    cube_save5[0][0]=cube_save6[0][2];
    cube_save5[0][3]=cube_save6[0][1];
    cube_save5[0][2]=cube_save6[0][3];
}
int turn_Tx_minus5(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save5[i][j] = cube_save6[i][j];
        }
    }
    cube_save5[4][3]=cube_save6[1][2];
    cube_save5[4][2]=cube_save6[1][0];
    cube_save5[1][2]=cube_save6[5][0];
    cube_save5[1][0]=cube_save6[5][1];
    cube_save5[5][0]=cube_save6[3][1];
    cube_save5[5][1]=cube_save6[3][3];
    cube_save5[3][1]=cube_save6[4][3];
    cube_save5[3][3]=cube_save6[4][2];
    cube_save5[0][1]=cube_save6[0][3];
    cube_save5[0][0]=cube_save6[0][1];
    cube_save5[0][3]=cube_save6[0][2];
    cube_save5[0][2]=cube_save6[0][0];
}
int turn_Ty_Plus5(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save5[i][j] = cube_save6[i][j];
        }
    }
    cube_save5[4][0]=cube_save6[2][3];
    cube_save5[4][2]=cube_save6[2][1];
    cube_save5[0][0]=cube_save6[4][0];
    cube_save5[0][2]=cube_save6[4][2];
    cube_save5[5][0]=cube_save6[0][0];
    cube_save5[5][2]=cube_save6[0][2];
    cube_save5[2][3]=cube_save6[5][0];
    cube_save5[2][1]=cube_save6[5][2];
    cube_save5[3][1]=cube_save6[3][0];
    cube_save5[3][0]=cube_save6[3][2];
    cube_save5[3][3]=cube_save6[3][1];
    cube_save5[3][2]=cube_save6[3][3];
}
int turn_Ty_minus5(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save5[i][j] = cube_save6[i][j];
        }
    }
    cube_save5[4][0]=cube_save6[0][0];
    cube_save5[4][2]=cube_save6[0][2];
    cube_save5[0][0]=cube_save6[5][0];
    cube_save5[0][2]=cube_save6[5][2];
    cube_save5[5][0]=cube_save6[2][3];
    cube_save5[5][2]=cube_save6[2][1];
    cube_save5[2][3]=cube_save6[4][0];
    cube_save5[2][1]=cube_save6[4][2];
    cube_save5[3][1]=cube_save6[3][3];
    cube_save5[3][0]=cube_save6[3][1];
    cube_save5[3][3]=cube_save6[3][2];
    cube_save5[3][2]=cube_save6[3][0];
}
int turn_Tz_Plus5(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save5[i][j] = cube_save6[i][j];
        }
    }
    cube_save5[4][0]=cube_save6[4][2];
    cube_save5[4][1]=cube_save6[4][0];
    cube_save5[4][2]=cube_save6[4][3];
    cube_save5[4][3]=cube_save6[4][1];
    cube_save5[0][0]=cube_save6[1][0];
    cube_save5[0][1]=cube_save6[1][1];
    cube_save5[3][0]=cube_save6[0][0];
    cube_save5[3][1]=cube_save6[0][1];
    cube_save5[2][0]=cube_save6[3][0];
    cube_save5[2][1]=cube_save6[3][1];
    cube_save5[1][0]=cube_save6[2][0];
    cube_save5[1][1]=cube_save6[2][1];
}
int turn_Tz_minus5(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save5[i][j] = cube_save6[i][j];
        }
    }
    cube_save5[4][1]=cube_save6[4][3];
    cube_save5[4][0]=cube_save6[4][1];
    cube_save5[4][3]=cube_save6[4][2];
    cube_save5[4][2]=cube_save6[4][0];
    cube_save5[0][1]=cube_save6[3][1];
    cube_save5[0][0]=cube_save6[3][0];
    cube_save5[3][1]=cube_save6[2][1];
    cube_save5[3][0]=cube_save6[2][0];
    cube_save5[2][1]=cube_save6[1][1];
    cube_save5[2][0]=cube_save6[1][0];
    cube_save5[1][1]=cube_save6[0][1];
    cube_save5[1][0]=cube_save6[0][0];
}

int turn_Tx_Plus6(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save6[i][j] = cube_save7[i][j];
        }
    }
    cube_save6[4][3]=cube_save7[3][1];
    cube_save6[4][2]=cube_save7[3][3];
    cube_save6[1][2]=cube_save7[4][3];
    cube_save6[1][0]=cube_save7[4][2];
    cube_save6[5][0]=cube_save7[1][2];
    cube_save6[5][1]=cube_save7[1][0];
    cube_save6[3][1]=cube_save7[5][0];
    cube_save6[3][3]=cube_save7[5][1];
    cube_save6[0][1]=cube_save7[0][0];
    cube_save6[0][0]=cube_save7[0][2];
    cube_save6[0][3]=cube_save7[0][1];
    cube_save6[0][2]=cube_save7[0][3];
}
int turn_Tx_minus6(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save6[i][j] = cube_save7[i][j];
        }
    }
    cube_save6[4][3]=cube_save7[1][2];
    cube_save6[4][2]=cube_save7[1][0];
    cube_save6[1][2]=cube_save7[5][0];
    cube_save6[1][0]=cube_save7[5][1];
    cube_save6[5][0]=cube_save7[3][1];
    cube_save6[5][1]=cube_save7[3][3];
    cube_save6[3][1]=cube_save7[4][3];
    cube_save6[3][3]=cube_save7[4][2];
    cube_save6[0][1]=cube_save7[0][3];
    cube_save6[0][0]=cube_save7[0][1];
    cube_save6[0][3]=cube_save7[0][2];
    cube_save6[0][2]=cube_save7[0][0];
}
int turn_Ty_Plus6(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save6[i][j] = cube_save7[i][j];
        }
    }
    cube_save6[4][0]=cube_save7[2][3];
    cube_save6[4][2]=cube_save7[2][1];
    cube_save6[0][0]=cube_save7[4][0];
    cube_save6[0][2]=cube_save7[4][2];
    cube_save6[5][0]=cube_save7[0][0];
    cube_save6[5][2]=cube_save7[0][2];
    cube_save6[2][3]=cube_save7[5][0];
    cube_save6[2][1]=cube_save7[5][2];
    cube_save6[3][1]=cube_save7[3][0];
    cube_save6[3][0]=cube_save7[3][2];
    cube_save6[3][3]=cube_save7[3][1];
    cube_save6[3][2]=cube_save7[3][3];
}
int turn_Ty_minus6(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save6[i][j] = cube_save7[i][j];
        }
    }
    cube_save6[4][0]=cube_save7[0][0];
    cube_save6[4][2]=cube_save7[0][2];
    cube_save6[0][0]=cube_save7[5][0];
    cube_save6[0][2]=cube_save7[5][2];
    cube_save6[5][0]=cube_save7[2][3];
    cube_save6[5][2]=cube_save7[2][1];
    cube_save6[2][3]=cube_save7[4][0];
    cube_save6[2][1]=cube_save7[4][2];
    cube_save6[3][1]=cube_save7[3][3];
    cube_save6[3][0]=cube_save7[3][1];
    cube_save6[3][3]=cube_save7[3][2];
    cube_save6[3][2]=cube_save7[3][0];
}
int turn_Tz_Plus6(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save6[i][j] = cube_save7[i][j];
        }
    }
    cube_save6[4][0]=cube_save7[4][2];
    cube_save6[4][1]=cube_save7[4][0];
    cube_save6[4][2]=cube_save7[4][3];
    cube_save6[4][3]=cube_save7[4][1];
    cube_save6[0][0]=cube_save7[1][0];
    cube_save6[0][1]=cube_save7[1][1];
    cube_save6[3][0]=cube_save7[0][0];
    cube_save6[3][1]=cube_save7[0][1];
    cube_save6[2][0]=cube_save7[3][0];
    cube_save6[2][1]=cube_save7[3][1];
    cube_save6[1][0]=cube_save7[2][0];
    cube_save6[1][1]=cube_save7[2][1];
}
int turn_Tz_minus6(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save6[i][j] = cube_save7[i][j];
        }
    }
    cube_save6[4][1]=cube_save7[4][3];
    cube_save6[4][0]=cube_save7[4][1];
    cube_save6[4][3]=cube_save7[4][2];
    cube_save6[4][2]=cube_save7[4][0];
    cube_save6[0][1]=cube_save7[3][1];
    cube_save6[0][0]=cube_save7[3][0];
    cube_save6[3][1]=cube_save7[2][1];
    cube_save6[3][0]=cube_save7[2][0];
    cube_save6[2][1]=cube_save7[1][1];
    cube_save6[2][0]=cube_save7[1][0];
    cube_save6[1][1]=cube_save7[0][1];
    cube_save6[1][0]=cube_save7[0][0];
}


int turn_Tx_Plus7(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save7[i][j] = cube[i][j];
        }
    }
    cube_save7[4][3]=cube[3][1];
    cube_save7[4][2]=cube[3][3];
    cube_save7[1][2]=cube[4][3];
    cube_save7[1][0]=cube[4][2];
    cube_save7[5][0]=cube[1][2];
    cube_save7[5][1]=cube[1][0];
    cube_save7[3][1]=cube[5][0];
    cube_save7[3][3]=cube[5][1];
    cube_save7[0][1]=cube[0][0];
    cube_save7[0][0]=cube[0][2];
    cube_save7[0][3]=cube[0][1];
    cube_save7[0][2]=cube[0][3];
}
int turn_Tx_minus7(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save7[i][j] = cube[i][j];
        }
    }
    cube_save7[4][3]=cube[1][2];
    cube_save7[4][2]=cube[1][0];
    cube_save7[1][2]=cube[5][0];
    cube_save7[1][0]=cube[5][1];
    cube_save7[5][0]=cube[3][1];
    cube_save7[5][1]=cube[3][3];
    cube_save7[3][1]=cube[4][3];
    cube_save7[3][3]=cube[4][2];
    cube_save7[0][1]=cube[0][3];
    cube_save7[0][0]=cube[0][1];
    cube_save7[0][3]=cube[0][2];
    cube_save7[0][2]=cube[0][0];
}
int turn_Ty_Plus7(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save7[i][j] = cube[i][j];
        }
    }
    cube_save7[4][0]=cube[2][3];
    cube_save7[4][2]=cube[2][1];
    cube_save7[0][0]=cube[4][0];
    cube_save7[0][2]=cube[4][2];
    cube_save7[5][0]=cube[0][0];
    cube_save7[5][2]=cube[0][2];
    cube_save7[2][3]=cube[5][0];
    cube_save7[2][1]=cube[5][2];
    cube_save7[3][1]=cube[3][0];
    cube_save7[3][0]=cube[3][2];
    cube_save7[3][3]=cube[3][1];
    cube_save7[3][2]=cube[3][3];
}
int turn_Ty_minus7(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save7[i][j] = cube[i][j];
        }
    }
    cube_save7[4][0]=cube[0][0];
    cube_save7[4][2]=cube[0][2];
    cube_save7[0][0]=cube[5][0];
    cube_save7[0][2]=cube[5][2];
    cube_save7[5][0]=cube[2][3];
    cube_save7[5][2]=cube[2][1];
    cube_save7[2][3]=cube[4][0];
    cube_save7[2][1]=cube[4][2];
    cube_save7[3][1]=cube[3][3];
    cube_save7[3][0]=cube[3][1];
    cube_save7[3][3]=cube[3][2];
    cube_save7[3][2]=cube[3][0];
}
int turn_Tz_Plus7(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save7[i][j] = cube[i][j];
        }
    }
    cube_save7[4][0]=cube[4][2];
    cube_save7[4][1]=cube[4][0];
    cube_save7[4][2]=cube[4][3];
    cube_save7[4][3]=cube[4][1];
    cube_save7[0][0]=cube[1][0];
    cube_save7[0][1]=cube[1][1];
    cube_save7[3][0]=cube[0][0];
    cube_save7[3][1]=cube[0][1];
    cube_save7[2][0]=cube[3][0];
    cube_save7[2][1]=cube[3][1];
    cube_save7[1][0]=cube[2][0];
    cube_save7[1][1]=cube[2][1];
}
int turn_Tz_minus7(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save7[i][j] = cube[i][j];
        }
    }
    cube_save7[4][1]=cube[4][3];
    cube_save7[4][0]=cube[4][1];
    cube_save7[4][3]=cube[4][2];
    cube_save7[4][2]=cube[4][0];
    cube_save7[0][1]=cube[3][1];
    cube_save7[0][0]=cube[3][0];
    cube_save7[3][1]=cube[2][1];
    cube_save7[3][0]=cube[2][0];
    cube_save7[2][1]=cube[1][1];
    cube_save7[2][0]=cube[1][0];
    cube_save7[1][1]=cube[0][1];
    cube_save7[1][0]=cube[0][0];
}



void main(){
    int depth = 0;
    for(int s=0;s<7;s++){
        if(s==0){
            for(int i=0;i<6;i++){
                for(int j=0;j<4;j++){
                    cube_save7[i][j]=cube[i][j];
                }
            }
        }
        else if (s==1){
            if(depth<7){
                depth=7;
            }
            turn_Tx_Plus7();
        }
        else if (s==2){
            turn_Tx_minus7();
        }
        else if (s==3){
            turn_Ty_Plus7();
        }
        else if (s==4){
            turn_Ty_minus7();
        }
        else if (s==5){
            turn_Tz_Plus7();
        }
        else if (s==6){
            turn_Tz_minus7();
        }
    
    for(int o=0;o<7;o++){
        if(o==0){
            for(int i=0;i<6;i++){
                for(int j=0;j<4;j++){
                    cube_save6[i][j]=cube_save7[i][j];
                }
            }
        }
        else if (o==1){
            if(depth<6){
                depth=6;
            }
            turn_Tx_Plus6();
        }
        else if (o==2){
            turn_Tx_minus6();
        }
        else if (o==3){
            turn_Ty_Plus6();
        }
        else if (o==4){
            turn_Ty_minus6();
        }
        else if (o==5){
            turn_Tz_Plus6();
        }
        else if (o==6){
            turn_Tz_minus6();
        }
        for(int p=0;p<7;p++){
            if(p==0){
                for(int i=0;i<6;i++){
                    for(int j=0;j<4;j++){
                        cube_save5[i][j]=cube_save6[i][j];
                    }
                }
            }
            else if (p==1){
                if(depth<5){
                    depth=5;
                }
                turn_Tx_Plus5();
            }
            else if (p==2){
                turn_Tx_minus5();
            }
            else if (p==3){
                turn_Ty_Plus5();
            }
            else if (p==4){
                turn_Ty_minus5();
            }
            else if (p==5){
                turn_Tz_Plus5();
            }
            else if (p==6){
                turn_Tz_minus5();
            }
            for(int k=0;k<7;k++){
                if(k==0){
                    for(int i=0;i<6;i++){
                        for(int j=0;j<4;j++){
                            cube_save4[i][j]=cube_save5[i][j];
                        }
                    }
                }
                else if (k==1){
                    if(depth<4){
                        depth=4;
                    }
                    turn_Tx_Plus4();
                }
                else if (k==2){
                    turn_Tx_minus4();
                }
                else if (k==3){
                    turn_Ty_Plus4();
                }
                else if (k==4){
                    turn_Ty_minus4();
                }
                else if (k==5){
                    turn_Tz_Plus4();
                }
                else if (k==6){
                    turn_Tz_minus4();
                }
                for(int l=0;l<7;l++){
                    if(l==0){
                        for(int i=0;i<6;i++){
                            for(int j=0;j<4;j++){
                                cube_save3[i][j]=cube_save4[i][j];
                            }
                        }
                    }else if (l==1){
                        if(depth<3){
                            depth=3;
                        }
                        turn_Tx_Plus3();
                    }
                    else if (l==2){
                        turn_Tx_minus3();
                    }
                    else if (l==3){
                        turn_Ty_Plus3();
                    }
                    else if (l==4){
                        turn_Ty_minus3();
                    }
                    else if (l==5){
                        turn_Tz_Plus3();
                    }
                    else if (l==6){
                        turn_Tz_minus3();
                    }
                    for(int m=0;m<7;m++){
                        if(m==0){
                            for(int i=0;i<6;i++){
                                for(int j=0;j<4;j++){
                                    cube_save2[i][j]=cube_save3[i][j];
                                }
                            }
                        }
                        else if (m==1){
                            if(depth<=2){
                                depth=2;
                            }
                            turn_Tx_Plus2();
                        }
                        else if (m==2){
                            turn_Tx_minus2();
                        }
                        else if (m==3){
                            turn_Ty_Plus2();
                        }
                        else if (m==4){
                            turn_Ty_minus2();
                        }
                        else if (m==5){
                            turn_Tz_Plus2();
                        }
                        else if (m==6){
                            turn_Tz_minus2();
                        }
                        for(int n=0;n<7;n++){
                            if(n==0){
                                for(int i=0;i<6;i++){
                                    for(int j=0;j<4;j++){
                                        cube_save1[i][j]=cube_save2[i][j];
                                    }
                                }
                                if (check1()==1){
                                    printf("depth = %d\n%d,%d,%d,%d,%d,%d,%d",depth,s,o,p,k,l,m,n);
                                    return;
                                }
                            }
                            else if (n==1){
                                if(depth<1){
                                    depth=1;
                                }
                                turn_Tx_Plus1();
                                if (check1()==1){
                                    printf("depth = %d\n%d,%d,%d,%d,%d,%d,%d",depth,s,o,p,k,l,m,n);
                                    return;
                                }
                            }
                            else if (n==2){
                                turn_Tx_minus1();
                                if (check1()==1){
                                    printf("depth = %d\n%d,%d,%d,%d,%d,%d,%d",depth,s,o,p,k,l,m,n);
                                    return;
                                }
                            }
                            else if (n==3){
                                turn_Ty_Plus1();
                                if (check1()==1){
                                    printf("depth = %d\n%d,%d,%d,%d,%d,%d,%d",depth,s,o,p,k,l,m,n);
                                    return;
                                }
                            }
                            else if (n==4){
                                turn_Ty_minus1();
                                if (check1()==1){
                                    printf("depth = %d\n%d,%d,%d,%d,%d,%d,%d",depth,s,o,p,k,l,m,n);
                                    return;
                                }
                            }
                            else if (n==5){
                                turn_Tz_Plus1();
                                if (check1()==1){
                                    printf("depth = %d\n%d,%d,%d,%d,%d,%d,%d",depth,s,o,p,k,l,m,n);
                                    return;
                                }
                            }
                            else if (n==6){
                                turn_Tz_minus1();
                                if (check1()==1){
                                    printf("depth = %d\n%d,%d,%d,%d,%d,%d,%d",depth,s,o,p,k,l,m,n);
                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    } 
    
    printf("nothing");
}
