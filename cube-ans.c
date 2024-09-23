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
int cube_first_save[6][4]={
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
    solve = 1;
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
int first_set(){
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d,",cube[i][j]);
        }
        printf("\n");
    }printf("\n");
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++){
            cube[i][j] = cube_first_save[i][j];
        }
    }
}
int turn_all(){
    cube_init();
    turn_Tx_minus();
    cube_init();
    turn_Tx_Plus();
    cube_init();
    turn_Ty_minus();
    cube_init();
    turn_Ty_Plus();
    cube_init();
    turn_Tz_minus();
    cube_init();
    turn_Tz_Plus();
}
int turn_add_sec(){
    first_set();
    turn_Tx_minus();
    first_set();
    turn_Tx_Plus();
    first_set();
    turn_Ty_minus();
    first_set();
    turn_Ty_Plus();
    first_set();
    turn_Tz_minus();
    first_set();
    turn_Tz_Plus();
    first_set();
}
int secound(){
    if(solve==0){
        for(int i=0;i<6;i++){
            printf("now2-%d",i);
            printf("\n");
            cube_init();
            if(i==0){
                turn_Tx_Plus();
                for(int i=0;i<6;i++){
                    for (int j = 0; j < 4; j++){
                        cube_first_save[i][j] = cube[i][j];
                    }
                }
            }
            else if(i==1){
                turn_Tx_minus();
                for(int i=0;i<6;i++){
                    for (int j = 0; j < 4; j++){
                        cube_first_save[i][j] = cube[i][j];
                    }
                }
            }
            else if(i==2){
                turn_Ty_Plus();
                for(int i=0;i<6;i++){
                    for (int j = 0; j < 4; j++){
                        cube_first_save[i][j] = cube[i][j];
                    }
                }
            }
            else if(i==3){
                turn_Ty_minus();
                for(int i=0;i<6;i++){
                    for (int j = 0; j < 4; j++){
                        cube_first_save[i][j] = cube[i][j];
                    }
                }
            }
            else if(i==4){
                turn_Tz_Plus();
                for(int i=0;i<6;i++){
                    for (int j = 0; j < 4; j++){
                        cube_first_save[i][j] = cube[i][j];
                    }
                }
            }
            else if(i==5){
                turn_Tz_minus();
                for(int i=0;i<6;i++){
                    for (int j = 0; j < 4; j++){
                        cube_first_save[i][j] = cube[i][j];
                    }
                }
            }
            
            turn_add_sec();
            printf("\n");
            printf("%d",solve);
            printf("\n");
            if (solve==1){
                how=2;
                break;
            }
        }
    }
}
int first(){
    if(solve==0){
        cube_init();
        turn_all();
        if (solve==1){
            how=1;
        }
    }
}
void main(){
    cube_init();
    check();
    if(solve==1){
        how=0;
    }
    /*
    printf("now^check");
    first();
    printf("now^check1");
    secound();
    printf("now^check2");
    */
    turn_Tx_minus();
    turn_Ty_minus();
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d,",cube[i][j]);
        }
        printf("\n");
    }
    printf("%d",how);
    
}
