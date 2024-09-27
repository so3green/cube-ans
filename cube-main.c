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
    {1,3,4,3},
    {2,1,2,1},
    {3,2,3,6},
    {6,6,4,4},
    {4,5,1,5},
    {2,5,6,5}
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

int turn_Tx_Plus1(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save1[i][j] = cube_save2[i][j];
        }
    }
    cube_save1[0][2]=cube_save2[3][0];
    cube_save1[0][3]=cube_save2[3][2];
    cube_save1[1][3]=cube_save2[0][2];
    cube_save1[1][1]=cube_save2[0][3];
    cube_save1[5][1]=cube_save2[1][3];
    cube_save1[5][0]=cube_save2[1][1];
    cube_save1[3][0]=cube_save2[5][1];
    cube_save1[3][2]=cube_save2[5][0];
    cube_save1[2][0]=cube_save2[2][1];
    cube_save1[2][1]=cube_save2[2][3];
    cube_save1[2][2]=cube_save2[2][0];
    cube_save1[2][3]=cube_save2[2][2];
}
int turn_Tx_minus1(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save1[i][j] = cube_save2[i][j];
        }
    }
    cube_save1[0][2]=cube_save2[1][3];
    cube_save1[0][3]=cube_save2[1][1];
    cube_save1[1][3]=cube_save2[5][1];
    cube_save1[1][1]=cube_save2[5][0];
    cube_save1[5][1]=cube_save2[3][0];
    cube_save1[5][0]=cube_save2[3][2];
    cube_save1[3][0]=cube_save2[0][2];
    cube_save1[3][2]=cube_save2[0][3];
    cube_save1[2][0]=cube_save2[2][2];
    cube_save1[2][1]=cube_save2[2][0];
    cube_save1[2][2]=cube_save2[2][3];
    cube_save1[2][3]=cube_save2[2][1];
}
int turn_Ty_Plus1(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save1[i][j] = cube_save2[i][j];
        }
    }
    cube_save1[0][1]=cube_save2[4][2];
    cube_save1[0][3]=cube_save2[4][0];
    cube_save1[2][1]=cube_save2[0][1];
    cube_save1[2][3]=cube_save2[0][3];
    cube_save1[5][1]=cube_save2[2][1];
    cube_save1[5][3]=cube_save2[2][3];
    cube_save1[4][2]=cube_save2[5][1];
    cube_save1[4][0]=cube_save2[5][3];
    cube_save1[3][0]=cube_save2[3][1];
    cube_save1[3][1]=cube_save2[3][3];
    cube_save1[3][2]=cube_save2[3][0];
    cube_save1[3][3]=cube_save2[3][2];
}
int turn_Ty_minus1(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save1[i][j] = cube_save2[i][j];
        }
    }
    cube_save1[0][1]=cube_save2[2][1];
    cube_save1[0][3]=cube_save2[2][3];
    cube_save1[2][1]=cube_save2[5][1];
    cube_save1[2][3]=cube_save2[5][3];
    cube_save1[5][1]=cube_save2[4][2];
    cube_save1[5][3]=cube_save2[4][0];
    cube_save1[4][2]=cube_save2[0][1];
    cube_save1[4][0]=cube_save2[0][3];
    cube_save1[3][0]=cube_save2[3][2];
    cube_save1[3][1]=cube_save2[3][0];
    cube_save1[3][2]=cube_save2[3][3];
    cube_save1[3][3]=cube_save2[3][1];
}
int turn_Tz_Plus1(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save1[i][j] = cube_save2[i][j];
        }
    }
    cube_save1[0][0]=cube_save2[0][1];
    cube_save1[0][1]=cube_save2[0][3];
    cube_save1[0][2]=cube_save2[0][0];
    cube_save1[0][3]=cube_save2[0][2];
    cube_save1[2][0]=cube_save2[1][0];
    cube_save1[2][1]=cube_save2[1][1];
    cube_save1[3][0]=cube_save2[2][0];
    cube_save1[3][1]=cube_save2[2][1];
    cube_save1[4][0]=cube_save2[3][0];
    cube_save1[4][1]=cube_save2[3][1];
    cube_save1[1][0]=cube_save2[4][0];
    cube_save1[1][1]=cube_save2[4][1];
}
int turn_Tz_minus1(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save1[i][j] = cube_save2[i][j];
        }
    }
    cube_save1[0][0]=cube_save2[0][2];
    cube_save1[0][1]=cube_save2[0][0];
    cube_save1[0][2]=cube_save2[0][3];
    cube_save1[0][3]=cube_save2[0][1];
    cube_save1[2][0]=cube_save2[3][0];
    cube_save1[2][1]=cube_save2[3][1];
    cube_save1[3][0]=cube_save2[4][0];
    cube_save1[3][1]=cube_save2[4][1];
    cube_save1[4][0]=cube_save2[1][0];
    cube_save1[4][1]=cube_save2[1][1];
    cube_save1[1][0]=cube_save2[2][0];
    cube_save1[1][1]=cube_save2[2][1];
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
    cube_save2[0][2]=cube_save3[3][0];
    cube_save2[0][3]=cube_save3[3][2];
    cube_save2[1][3]=cube_save3[0][2];
    cube_save2[1][1]=cube_save3[0][3];
    cube_save2[5][1]=cube_save3[1][3];
    cube_save2[5][0]=cube_save3[1][1];
    cube_save2[3][0]=cube_save3[5][1];
    cube_save2[3][2]=cube_save3[5][0];
    cube_save2[2][0]=cube_save3[2][1];
    cube_save2[2][1]=cube_save3[2][3];
    cube_save2[2][2]=cube_save3[2][0];
    cube_save2[2][3]=cube_save3[2][2];
}
int turn_Tx_minus2(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save2[i][j] = cube_save3[i][j];
        }
    }
    cube_save2[0][2]=cube_save3[1][3];
    cube_save2[0][3]=cube_save3[1][1];
    cube_save2[1][3]=cube_save3[5][1];
    cube_save2[1][1]=cube_save3[5][0];
    cube_save2[5][1]=cube_save3[3][0];
    cube_save2[5][0]=cube_save3[3][2];
    cube_save2[3][0]=cube_save3[0][2];
    cube_save2[3][2]=cube_save3[0][3];
    cube_save2[2][0]=cube_save3[2][2];
    cube_save2[2][1]=cube_save3[2][0];
    cube_save2[2][2]=cube_save3[2][3];
    cube_save2[2][3]=cube_save3[2][1];
}
int turn_Ty_Plus2(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save2[i][j] = cube_save3[i][j];
        }
    }
    cube_save2[0][1]=cube_save3[4][2];
    cube_save2[0][3]=cube_save3[4][0];
    cube_save2[2][1]=cube_save3[0][1];
    cube_save2[2][3]=cube_save3[0][3];
    cube_save2[5][1]=cube_save3[2][1];
    cube_save2[5][3]=cube_save3[2][3];
    cube_save2[4][2]=cube_save3[5][1];
    cube_save2[4][0]=cube_save3[5][3];
    cube_save2[3][0]=cube_save3[3][1];
    cube_save2[3][1]=cube_save3[3][3];
    cube_save2[3][2]=cube_save3[3][0];
    cube_save2[3][3]=cube_save3[3][2];
}
int turn_Ty_minus2(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save2[i][j] = cube_save3[i][j];
        }
    }
    cube_save2[0][1]=cube_save3[2][1];
    cube_save2[0][3]=cube_save3[2][3];
    cube_save2[2][1]=cube_save3[5][1];
    cube_save2[2][3]=cube_save3[5][3];
    cube_save2[5][1]=cube_save3[4][2];
    cube_save2[5][3]=cube_save3[4][0];
    cube_save2[4][2]=cube_save3[0][1];
    cube_save2[4][0]=cube_save3[0][3];
    cube_save2[3][0]=cube_save3[3][2];
    cube_save2[3][1]=cube_save3[3][0];
    cube_save2[3][2]=cube_save3[3][3];
    cube_save2[3][3]=cube_save3[3][1];
}
int turn_Tz_Plus2(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save2[i][j] = cube_save3[i][j];
        }
    }
    cube_save2[0][0]=cube_save3[0][1];
    cube_save2[0][1]=cube_save3[0][3];
    cube_save2[0][2]=cube_save3[0][0];
    cube_save2[0][3]=cube_save3[0][2];
    cube_save2[2][0]=cube_save3[1][0];
    cube_save2[2][1]=cube_save3[1][1];
    cube_save2[3][0]=cube_save3[2][0];
    cube_save2[3][1]=cube_save3[2][1];
    cube_save2[4][0]=cube_save3[3][0];
    cube_save2[4][1]=cube_save3[3][1];
    cube_save2[1][0]=cube_save3[4][0];
    cube_save2[1][1]=cube_save3[4][1];
}
int turn_Tz_minus2(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save2[i][j] = cube_save3[i][j];
        }
    }
    cube_save2[0][0]=cube_save3[0][2];
    cube_save2[0][1]=cube_save3[0][0];
    cube_save2[0][2]=cube_save3[0][3];
    cube_save2[0][3]=cube_save3[0][1];
    cube_save2[2][0]=cube_save3[3][0];
    cube_save2[2][1]=cube_save3[3][1];
    cube_save2[3][0]=cube_save3[4][0];
    cube_save2[3][1]=cube_save3[4][1];
    cube_save2[4][0]=cube_save3[1][0];
    cube_save2[4][1]=cube_save3[1][1];
    cube_save2[1][0]=cube_save3[2][0];
    cube_save2[1][1]=cube_save3[2][1];
}


int turn_Tx_Plus(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save[i][j] = cube_save[i][j];
        }
    }
    cube_save[0][2]=cube_save[3][0];
    cube_save[0][3]=cube_save[3][2];
    cube_save[1][3]=cube_save[0][2];
    cube_save[1][1]=cube_save[0][3];
    cube_save[5][1]=cube_save[1][3];
    cube_save[5][0]=cube_save[1][1];
    cube_save[3][0]=cube_save[5][1];
    cube_save[3][2]=cube_save[5][0];
    cube_save[2][0]=cube_save[2][1];
    cube_save[2][1]=cube_save[2][3];
    cube_save[2][2]=cube_save[2][0];
    cube_save[2][3]=cube_save[2][2];
}
int turn_Tx_minus(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save[i][j] = cube_save[i][j];
        }
    }
    cube_save[0][2]=cube_save[1][3];
    cube_save[0][3]=cube_save[1][1];
    cube_save[1][3]=cube_save[5][1];
    cube_save[1][1]=cube_save[5][0];
    cube_save[5][1]=cube_save[3][0];
    cube_save[5][0]=cube_save[3][2];
    cube_save[3][0]=cube_save[0][2];
    cube_save[3][2]=cube_save[0][3];
    cube_save[2][0]=cube_save[2][2];
    cube_save[2][1]=cube_save[2][0];
    cube_save[2][2]=cube_save[2][3];
    cube_save[2][3]=cube_save[2][1];
}
int turn_Ty_Plus(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save[i][j] = cube_save[i][j];
        }
    }
    cube_save[0][1]=cube_save[4][2];
    cube_save[0][3]=cube_save[4][0];
    cube_save[2][1]=cube_save[0][1];
    cube_save[2][3]=cube_save[0][3];
    cube_save[5][1]=cube_save[2][1];
    cube_save[5][3]=cube_save[2][3];
    cube_save[4][2]=cube_save[5][1];
    cube_save[4][0]=cube_save[5][3];
    cube_save[3][0]=cube_save[3][1];
    cube_save[3][1]=cube_save[3][3];
    cube_save[3][2]=cube_save[3][0];
    cube_save[3][3]=cube_save[3][2];
}
int turn_Ty_minus(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save[i][j] = cube_save[i][j];
        }
    }
    cube_save[0][1]=cube_save[2][1];
    cube_save[0][3]=cube_save[2][3];
    cube_save[2][1]=cube_save[5][1];
    cube_save[2][3]=cube_save[5][3];
    cube_save[5][1]=cube_save[4][2];
    cube_save[5][3]=cube_save[4][0];
    cube_save[4][2]=cube_save[0][1];
    cube_save[4][0]=cube_save[0][3];
    cube_save[3][0]=cube_save[3][2];
    cube_save[3][1]=cube_save[3][0];
    cube_save[3][2]=cube_save[3][3];
    cube_save[3][3]=cube_save[3][1];
}
int turn_Tz_Plus(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save[i][j] = cube_save[i][j];
        }
    }
    cube_save[0][0]=cube_save[0][1];
    cube_save[0][1]=cube_save[0][3];
    cube_save[0][2]=cube_save[0][0];
    cube_save[0][3]=cube_save[0][2];
    cube_save[2][0]=cube_save[1][0];
    cube_save[2][1]=cube_save[1][1];
    cube_save[3][0]=cube_save[2][0];
    cube_save[3][1]=cube_save[2][1];
    cube_save[4][0]=cube_save[3][0];
    cube_save[4][1]=cube_save[3][1];
    cube_save[1][0]=cube_save[4][0];
    cube_save[1][1]=cube_save[4][1];
}
int turn_Tz_minus(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 4; j++)
        {
            cube_save[i][j] = cube_save[i][j];
        }
    }
    cube_save[0][0]=cube_save[0][2];
    cube_save[0][1]=cube_save[0][0];
    cube_save[0][2]=cube_save[0][3];
    cube_save[0][3]=cube_save[0][1];
    cube_save[2][0]=cube_save[3][0];
    cube_save[2][1]=cube_save[3][1];
    cube_save[3][0]=cube_save[4][0];
    cube_save[3][1]=cube_save[4][1];
    cube_save[4][0]=cube_save[1][0];
    cube_save[4][1]=cube_save[1][1];
    cube_save[1][0]=cube_save[2][0];
    cube_save[1][1]=cube_save[2][1];
}




void main(){
    int depth = 0;
    for(int o=0;o<7;o++){
        if(o==0){
            for(int i=0;i<6;i++){
                for(int j=0;j<4;j++){
                    cube_save6[i][j]=cube[i][j];
                }
            }
        }
        for(int p=0;p<7;p++){
            if(p==0){
                for(int i=0;i<6;i++){
                    for(int j=0;j<4;j++){
                        cube_save5[i][j]=cube_save6[i][j];
                    }
                }
            }
            for(int k=0;k<7;k++){
                if(k==0){
                    for(int i=0;i<6;i++){
                        for(int j=0;j<4;j++){
                            cube_save4[i][j]=cube_save5[i][j];
                        }
                    }
                }
                for(int l=0;l<7;l++){
                    if(l==0){
                        for(int i=0;i<6;i++){
                            for(int j=0;j<4;j++){
                                cube_save3[i][j]=cube_save4[i][j];
                            }
                        }
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
                                    printf("depth = %d\n%d,%d,%d,%d,%d,%d",depth,o,p,k,l,m,n);
                                    return;
                                }
                            }
                            else if (n==1){
                                if(depth<1){
                                    depth=1;
                                }
                                turn_Tx_Plus1();
                                if (check1()==1){
                                    printf("depth = %d\n%d,%d,%d,%d,%d,%d",depth,o,p,k,l,m,n);
                                    return;
                                }
                            }
                            else if (n==2){
                                turn_Tx_minus1();
                                if (check1()==1){
                                    printf("depth = %d\n%d,%d,%d,%d,%d,%d",depth,o,p,k,l,m,n);
                                    return;
                                }
                            }
                            else if (n==3){
                                turn_Ty_Plus1();
                                if (check1()==1){
                                    printf("depth = %d\n%d,%d,%d,%d,%d,%d",depth,o,p,k,l,m,n);
                                    return;
                                }
                            }
                            else if (n==4){
                                turn_Ty_minus1();
                                if (check1()==1){
                                    printf("depth = %d\n%d,%d,%d,%d,%d,%d",depth,o,p,k,l,m,n);
                                    return;
                                }
                            }
                            else if (n==5){
                                turn_Tz_Plus1();
                                if (check1()==1){
                                    printf("depth = %d\n%d,%d,%d,%d,%d,%d",depth,o,p,k,l,m,n);
                                    return;
                                }
                            }
                            else if (n==6){
                                turn_Tz_minus1();
                                if (check1()==1){
                                    printf("depth = %d\n%d,%d,%d,%d,%d,%d",depth,o,p,k,l,m,n);
                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("nothing");
    /*
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d,",cube[i][j]);
        }
        printf("\n");
    }
    */
}
