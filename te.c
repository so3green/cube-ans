#include <stdio.h>

int cube[6][5]={
    {0,1,1,1,1},
    {0,-1,-2,-3,-4},
    {0,3,3,3,3},
    {0,-1,-2,-3,-4},
    {0,5,5,5,5},
    {0,6,6,6,6}
};

int cube1[6][5]={
    {0,1,1,1,1},
    {0,2,2,2,2},
    {0,3,3,3,3},
    {0,4,4,4,4},
    {0,5,5,5,5},
    {0,6,6,6,6}
};



void rollA2(void) {
  for (int i = 0; i < 5; i++) {
    cube1[0][i] = cube[0][i]; cube1[1][i] = cube[1][i]; cube1[2][i] = cube[2][i];
    cube1[3][i] = cube[3][i]; cube1[4][i] = cube[4][i]; cube1[5][i] = cube[5][i];
  }

  cube1[0][1] = cube[1][1];  
  cube1[0][2] = cube[1][2];
  cube1[1][1] = cube[2][1];  
  cube1[1][2] = cube[2][2];
  cube1[2][1] = cube[3][1];  
  cube1[2][2] = cube[3][2];
  cube1[3][1] = cube[0][1];  
  cube1[3][2] = cube[0][2];
  for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cube[i][j]=cube1[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
    cube1[0][i] = cube[0][i]; cube1[1][i] = cube[1][i]; cube1[2][i] = cube[2][i];
    cube1[3][i] = cube[3][i]; cube1[4][i] = cube[4][i]; cube1[5][i] = cube[5][i];
  }

  cube1[0][1] = cube[1][1];  
  cube1[0][2] = cube[1][2];
  cube1[1][1] = cube[2][1];  
  cube1[1][2] = cube[2][2];
  cube1[2][1] = cube[3][1];  
  cube1[2][2] = cube[3][2];
  cube1[3][1] = cube[0][1];  
  cube1[3][2] = cube[0][2];
  for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cube[i][j]=cube1[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
    cube1[0][i] = cube[0][i]; cube1[1][i] = cube[1][i]; cube1[2][i] = cube[2][i];
    cube1[3][i] = cube[3][i]; cube1[4][i] = cube[4][i]; cube1[5][i] = cube[5][i];
  }

  cube1[0][1] = cube[1][1];  
  cube1[0][2] = cube[1][2];
  cube1[1][1] = cube[2][1];  
  cube1[1][2] = cube[2][2];
  cube1[2][1] = cube[3][1];  
  cube1[2][2] = cube[3][2];
  cube1[3][1] = cube[0][1];  
  cube1[3][2] = cube[0][2];
  for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cube[i][j]=cube1[i][j];
        }
    }
    
    for (int i = 0; i < 5; i++) {
    cube1[0][i] = cube[0][i]; cube1[1][i] = cube[1][i]; cube1[2][i] = cube[2][i];
    cube1[3][i] = cube[3][i]; cube1[4][i] = cube[4][i]; cube1[5][i] = cube[5][i];
    }
    cube1[5][1] = cube[5][2];
    cube1[5][3] = cube[5][1];
    cube1[5][4] = cube[5][3];
    cube1[5][2] = cube[5][4];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cube[i][j]=cube1[i][j];
        }
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
    cube1[0][i] = cube[0][i]; cube1[1][i] = cube[1][i]; cube1[2][i] = cube[2][i];
    cube1[3][i] = cube[3][i]; cube1[4][i] = cube[4][i]; cube1[5][i] = cube[5][i];
    }
    cube1[5][1] = cube[5][2];
    cube1[5][3] = cube[5][1];
    cube1[5][4] = cube[5][3];
    cube1[5][2] = cube[5][4];
    
    for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cube[i][j]=cube1[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
    cube1[0][i] = cube[0][i]; cube1[1][i] = cube[1][i]; cube1[2][i] = cube[2][i];
    cube1[3][i] = cube[3][i]; cube1[4][i] = cube[4][i]; cube1[5][i] = cube[5][i];
    }
    cube1[5][1] = cube[5][2];
    cube1[5][3] = cube[5][1];
    cube1[5][4] = cube[5][3];
    cube1[5][2] = cube[5][4];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cube[i][j]=cube1[i][j];
        }
    }
}

void rollB2(void) {
    
    for (int i = 0; i < 5; i++) {
        cube1[0][i] = cube[0][i]; cube1[1][i] = cube[1][i]; cube1[2][i] = cube[2][i];
        cube1[3][i] = cube[3][i]; cube1[4][i] = cube[4][i]; cube1[5][i] = cube[5][i];
    }
    cube1[0][3] = cube[1][3];  cube1[0][4] = cube[1][4];
    cube1[1][3] = cube[2][3];  cube1[1][4] = cube[2][4];
    cube1[2][3] = cube[3][3];  cube1[2][4] = cube[3][4];
    cube1[3][3] = cube[0][3];  cube1[3][4] = cube[0][4];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cube[i][j]=cube1[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        cube1[0][i] = cube[0][i]; cube1[1][i] = cube[1][i]; cube1[2][i] = cube[2][i];
        cube1[3][i] = cube[3][i]; cube1[4][i] = cube[4][i]; cube1[5][i] = cube[5][i];
    }
    cube1[0][3] = cube[1][3];  cube1[0][4] = cube[1][4];
    cube1[1][3] = cube[2][3];  cube1[1][4] = cube[2][4];
    cube1[2][3] = cube[3][3];  cube1[2][4] = cube[3][4];
    cube1[3][3] = cube[0][3];  cube1[3][4] = cube[0][4];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cube[i][j]=cube1[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        cube1[0][i] = cube[0][i]; cube1[1][i] = cube[1][i]; cube1[2][i] = cube[2][i];
        cube1[3][i] = cube[3][i]; cube1[4][i] = cube[4][i]; cube1[5][i] = cube[5][i];
    }
    cube1[0][3] = cube[1][3];  cube1[0][4] = cube[1][4];
    cube1[1][3] = cube[2][3];  cube1[1][4] = cube[2][4];
    cube1[2][3] = cube[3][3];  cube1[2][4] = cube[3][4];
    cube1[3][3] = cube[0][3];  cube1[3][4] = cube[0][4];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cube[i][j]=cube1[i][j];
        }
    }
    
    for (int i = 0; i < 5; i++) {
        cube1[0][i] = cube[0][i]; cube1[1][i] = cube[1][i]; cube1[2][i] = cube[2][i];
        cube1[3][i] = cube[3][i]; cube1[4][i] = cube[4][i]; cube1[5][i] = cube[5][i];
    }
    cube1[5][1] = cube[5][2];
    cube1[5][3] = cube[5][1];
    cube1[5][4] = cube[5][3];
    cube1[5][2] = cube[5][4];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cube[i][j]=cube1[i][j];
        }
    }
}

void pitchA2(void) {
    for (int i = 0; i < 5; i++) {
        cube1[0][i] = cube[0][i]; cube1[1][i] = cube[1][i]; cube1[2][i] = cube[2][i];
        cube1[3][i] = cube[3][i]; cube1[4][i] = cube[4][i]; cube1[5][i] = cube[5][i];
    }
    cube1[0][2] = cube[5][2];  cube1[0][4] = cube[5][4];
    cube1[4][2] = cube[0][2];  cube1[4][4] = cube[0][4];
    cube1[2][3] = cube[4][2];  cube1[2][1] = cube[4][4];
    cube1[5][2] = cube[2][3];  cube1[5][4] = cube[2][1];

  for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cube[i][j]=cube1[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        cube1[0][i] = cube[0][i]; cube1[1][i] = cube[1][i]; cube1[2][i] = cube[2][i];
        cube1[3][i] = cube[3][i]; cube1[4][i] = cube[4][i]; cube1[5][i] = cube[5][i];
    }
    cube1[3][1] = cube[3][2];
    cube1[3][3] = cube[3][1];
    cube1[3][4] = cube[3][3];
    cube1[3][2] = cube[3][4];

    for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cube[i][j]=cube1[i][j];
        }
    }
}
void pitchB2(void) {
    for (int i = 0; i < 5; i++) {
        cube1[0][i] = cube[0][i]; cube1[1][i] = cube[1][i]; cube1[2][i] = cube[2][i];
        cube1[3][i] = cube[3][i]; cube1[4][i] = cube[4][i]; cube1[5][i] = cube[5][i];
    }

    cube1[0][1] = cube[5][1];  cube1[0][3] = cube[5][3];
    cube1[4][1] = cube[0][1];  cube1[4][3] = cube[0][3];
    cube1[2][4] = cube[4][1];  cube1[2][2] = cube[4][3];
    cube1[5][1] = cube[2][4];  cube1[5][3] = cube[2][2];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cube[i][j]=cube1[i][j];
        }
    }
    
    for (int i = 0; i < 5; i++) {
        cube1[0][i] = cube[0][i]; cube1[1][i] = cube[1][i]; cube1[2][i] = cube[2][i];
        cube1[3][i] = cube[3][i]; cube1[4][i] = cube[4][i]; cube1[5][i] = cube[5][i];
    }
    cube1[1][1] = cube[1][2];
    cube1[1][3] = cube[1][1];
    cube1[1][4] = cube[1][3];
    cube1[1][2] = cube[1][4];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cube[i][j]=cube1[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        cube1[0][i] = cube[0][i]; cube1[1][i] = cube[1][i]; cube1[2][i] = cube[2][i];
        cube1[3][i] = cube[3][i]; cube1[4][i] = cube[4][i]; cube1[5][i] = cube[5][i];
    }
    cube1[1][1] = cube[1][2];
    cube1[1][3] = cube[1][1];
    cube1[1][4] = cube[1][3];
    cube1[1][2] = cube[1][4];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cube[i][j]=cube1[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        cube1[0][i] = cube[0][i]; cube1[1][i] = cube[1][i]; cube1[2][i] = cube[2][i];
        cube1[3][i] = cube[3][i]; cube1[4][i] = cube[4][i]; cube1[5][i] = cube[5][i];
    }
    cube1[1][1] = cube[1][2];
    cube1[1][3] = cube[1][1];
    cube1[1][4] = cube[1][3];
    cube1[1][2] = cube[1][4];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cube[i][j]=cube1[i][j];
        }
    }
}

void yawA2(void) {
    for (int i = 0; i < 5; i++) {
        cube1[0][i] = cube[0][i]; cube1[1][i] = cube[1][i]; cube1[2][i] = cube[2][i];
        cube1[3][i] = cube[3][i]; cube1[4][i] = cube[4][i]; cube1[5][i] = cube[5][i];
    }

  cube1[3][1] = cube[4][2]; cube1[3][3] = cube[4][1];
  cube1[4][2] = cube[1][4]; cube1[4][1] = cube[1][2];
  cube1[1][4] = cube[5][3]; cube1[1][2] = cube[5][4];
  cube1[5][3] = cube[3][1]; cube1[5][4] = cube[3][3];
    for (int i = 0; i < 6; i++){
        for (int j = 1; j < 5; j++){
            cube[i][j]=cube1[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        cube1[0][i] = cube[0][i]; cube1[1][i] = cube[1][i]; cube1[2][i] = cube[2][i];
        cube1[3][i] = cube[3][i]; cube1[4][i] = cube[4][i]; cube1[5][i] = cube[5][i];
    }
    cube1[0][1] = cube[0][2];
    cube1[0][3] = cube[0][1];
    cube1[0][4] = cube[0][3];
    cube1[0][2] = cube[0][4];
    for (int i = 0; i < 6; i++){
        for (int j = 1; j < 5; j++){
            cube[i][j]=cube1[i][j];
        }
    }
}

void yawB2(void) {
    for (int i = 0; i < 5; i++) {
        cube1[0][i] = cube[0][i]; cube1[1][i] = cube[1][i]; cube1[2][i] = cube[2][i];
        cube1[3][i] = cube[3][i]; cube1[4][i] = cube[4][i]; cube1[5][i] = cube[5][i];
    }
    cube1[3][2] = cube[4][4]; cube1[3][4] = cube[4][3];
    cube1[4][4] = cube[1][3]; cube1[4][3] = cube[1][1];
    cube1[1][3] = cube[5][1]; cube1[1][1] = cube[5][2];
    cube1[5][1] = cube[3][2]; cube1[5][2] = cube[3][4];

    for (int i = 0; i < 6; i++){
        for (int j = 1; j < 5; j++){
            cube[i][j]=cube1[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        cube1[0][i] = cube[0][i]; cube1[1][i] = cube[1][i]; cube1[2][i] = cube[2][i];
        cube1[3][i] = cube[3][i]; cube1[4][i] = cube[4][i]; cube1[5][i] = cube[5][i];
    }
    cube1[2][1] = cube[2][2];
    cube1[2][3] = cube[2][1];
    cube1[2][4] = cube[2][3];
    cube1[2][2] = cube[2][4];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cube[i][j]=cube1[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        cube1[0][i] = cube[0][i]; cube1[1][i] = cube[1][i]; cube1[2][i] = cube[2][i];
        cube1[3][i] = cube[3][i]; cube1[4][i] = cube[4][i]; cube1[5][i] = cube[5][i];
    }
    cube1[2][1] = cube[2][2];
    cube1[2][3] = cube[2][1];
    cube1[2][4] = cube[2][3];
    cube1[2][2] = cube[2][4];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cube[i][j]=cube1[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        cube1[0][i] = cube[0][i]; cube1[1][i] = cube[1][i]; cube1[2][i] = cube[2][i];
        cube1[3][i] = cube[3][i]; cube1[4][i] = cube[4][i]; cube1[5][i] = cube[5][i];
    }
    cube1[2][1] = cube[2][2];
    cube1[2][3] = cube[2][1];
    cube1[2][4] = cube[2][3];
    cube1[2][2] = cube[2][4];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cube[i][j]=cube1[i][j];
        }
    }
}

void main(){
    //rollA2();
    //rollB2();
    //pitchB2();
    for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            printf("%d,",cube[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    pitchB2();
    for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            printf("%d,",cube[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}