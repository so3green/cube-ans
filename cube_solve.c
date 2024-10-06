#include <stdio.h>
#define RUBIK_CUBE_MODE_ON

#define Dimension2_2
//#define Dimension3_3

#define Arduino_PINA 33
#define Arduino_PINB 25
#define Arduino_PINC 26
#define Arduino_PIND 14
#define Arduino_PINE 27
#define Arduino_PINF 12

#define LED_Color1  0x040001 //red
#define LED_Color2  0x000600 //green
#define LED_Color3  0x060300 //orange
#define LED_Color4  0x040400 //yellow
#define LED_Color5  0x000005 //blue
#define LED_Color6  0x050505 //white
#define LED_Color7  0x250505
#define LED_Color8  0x042500
#define LED_Color9  0x250515

#define BLACK      0x000000

#define LED_R  0x040000 
#define LED_G  0x000600 
#define LED_B  0x000008 
#define LED_RG 0x040600 
#define LED_GB 0x000608 
#define LED_BR 0x040008

#define LED_Pos1  1
#define LED_Pos2  2
#define LED_Pos3  3
#define LED_Pos4  4
#define LED_Pos5  5
#define LED_Pos6  6
#define LED_Pos9  9

#define sideA_Color	1
#define sideB_Color	2
#define sideC_Color	3
#define sideD_Color	4
#define sideE_Color	5
#define sideF_Color	6

#define side1_A1 0
#define side1_A2 1
#define side1_A3 2
#define side1_A4 3
#define side1_A5 4
#define side1_A6 5
#define side1_A7 6
#define side1_A8 7
#define side1_A9 8

#define side2_A1 0
#define side2_A2 1
#define side2_A3 2
#define side2_A4 3
#define side2_A5 4
#define side2_A6 5
#define side2_A7 6
#define side2_A8 7
#define side2_A9 8

#define side3_A1 0
#define side3_A2 1
#define side3_A3 2
#define side3_A4 3
#define side3_A5 4
#define side3_A6 5
#define side3_A7 6
#define side3_A8 7
#define side3_A9 8

#define side4_A1 0
#define side4_A2 1
#define side4_A3 2
#define side4_A4 3
#define side4_A5 4
#define side4_A6 5
#define side4_A7 6
#define side4_A8 7
#define side4_A9 8

#define side5_A1 0
#define side5_A2 1
#define side5_A3 2
#define side5_A4 3
#define side5_A5 4
#define side5_A6 5
#define side5_A7 6
#define side5_A8 7
#define side5_A9 8

#define side6_A1 0
#define side6_A2 1
#define side6_A3 2
#define side6_A4 3
#define side6_A5 4
#define side6_A6 5
#define side6_A7 6
#define side6_A8 7
#define side6_A9 8

#define RotNum_min 15
#define RotNum_max 30
#define LED_COUNT 4
void arraysetA(char *);
void arraysetB(char *);
void arraysetC(char *);
void arraysetD(char *);
void arraysetE(char *);
void arraysetF(char *);
void rollA2(void);
void rollB2(void);
void pitchA2(void);
void pitchB2(void);
void yawA2(void);
void yawB2(void);
/*
char tp1[LED_COUNT] = {1, 1, 1, 1};
char tp2[LED_COUNT] = {2, 2, 2, 2};
char tp3[LED_COUNT] = {3, 3, 3, 3};
char tp4[LED_COUNT] = {4, 4, 4, 4};
char tp5[LED_COUNT] = {5, 5, 5, 5};
char tp6[LED_COUNT] = {6, 6, 6, 6};
*/

char tp1[LED_COUNT] = {3,4,3,1};
char tp2[LED_COUNT] = {2,6,6,6};
char tp3[LED_COUNT] = {1,5,5,1};
char tp4[LED_COUNT] = {5,2,5,4};
char tp5[LED_COUNT] = {4,2,4,1};
char tp6[LED_COUNT] = {3,6,2,3};

char sideA[LED_COUNT] ; char sideB[LED_COUNT] ; char sideC[LED_COUNT] ;
char sideD[LED_COUNT] ; char sideE[LED_COUNT] ; char sideF[LED_COUNT] ;

char sideA2[LED_COUNT] ; char sideB2[LED_COUNT] ; char sideC2[LED_COUNT] ;
char sideD2[LED_COUNT] ; char sideE2[LED_COUNT] ; char sideF2[LED_COUNT] ;
const unsigned char LEDPos1[5] = {0, (char)side1_A1, (char)side1_A2, (char)side1_A3, (char)side1_A4};
const unsigned char LEDPos2[5] = {0, (char)side2_A1, (char)side2_A2, (char)side2_A3, (char)side2_A4};
const unsigned char LEDPos3[5] = {0, (char)side3_A1, (char)side3_A2, (char)side3_A3, (char)side3_A4};
const unsigned char LEDPos4[5] = {0, (char)side4_A1, (char)side4_A2, (char)side4_A3, (char)side4_A4};
const unsigned char LEDPos5[5] = {0, (char)side5_A1, (char)side5_A2, (char)side5_A3, (char)side5_A4};
const unsigned char LEDPos6[5] = {0, (char)side6_A1, (char)side6_A2, (char)side6_A3, (char)side6_A4};
const char LEDColA[LED_COUNT] = {1, 2, 3, 4};
void rollA2(void) {
char tempA1[LED_COUNT], tempA2[LED_COUNT] , tempA3[LED_COUNT] ;
char tempA4[LED_COUNT], tempA5[LED_COUNT] , tempA6[LED_COUNT] ;
char tempB1[LED_COUNT] , tempB2[LED_COUNT] , tempB3[LED_COUNT] ;
char tempB4[LED_COUNT] , tempB5[LED_COUNT] , tempB6[LED_COUNT] ;

unsigned char i;

    for (i = 0; i < LED_COUNT; i++) {
        tempA1[i] = sideA[i]; tempA2[i] = sideB[i]; tempA3[i] = sideC[i];
        tempA4[i] = sideD[i]; tempA5[i] = sideE[i]; tempA6[i] = sideF[i];
        tempB1[i] = sideA[i]; tempB2[i] = sideB[i]; tempB3[i] = sideC[i];
        tempB4[i] = sideD[i]; tempB5[i] = sideE[i]; tempB6[i] = sideF[i];
    }

  tempA1[LEDPos1[1]] = tempB2[LEDPos2[1]];  tempA1[LEDPos1[2]] = tempB2[LEDPos2[2]];
  tempA2[LEDPos2[1]] = tempB3[LEDPos3[1]];  tempA2[LEDPos2[2]] = tempB3[LEDPos3[2]];
  tempA3[LEDPos3[1]] = tempB4[LEDPos4[1]];  tempA3[LEDPos3[2]] = tempB4[LEDPos4[2]];
  tempA4[LEDPos4[1]] = tempB1[LEDPos1[1]];  tempA4[LEDPos4[2]] = tempB1[LEDPos1[2]];

  arraysetA(tempA1); arraysetB(tempA2); arraysetC(tempA3);
  arraysetD(tempA4); arraysetE(tempA5); arraysetF(tempA6);
}
void rollB2(void) {
  char tempA1[LED_COUNT] , tempA2[LED_COUNT] , tempA3[LED_COUNT] ;
  char tempA4[LED_COUNT] , tempA5[LED_COUNT] , tempA6[LED_COUNT] ;

  char tempB1[LED_COUNT] , tempB2[LED_COUNT] , tempB3[LED_COUNT] ;
  char tempB4[LED_COUNT] , tempB5[LED_COUNT] , tempB6[LED_COUNT] ;

  unsigned char i;
  for (i = 0; i < LED_COUNT; i++) {
    tempA1[i] = sideA[i]; tempA2[i] = sideB[i];    tempA3[i] = sideC[i];
    tempA4[i] = sideD[i]; tempA5[i] = sideE[i];    tempA6[i] = sideF[i];
    tempB1[i] = sideA[i]; tempB2[i] = sideB[i];    tempB3[i] = sideC[i];
    tempB4[i] = sideD[i]; tempB5[i] = sideE[i];    tempB6[i] = sideF[i];
  }

  tempA1[LEDPos1[3]] = tempB2[LEDPos2[3]];  tempA1[LEDPos2[4]] = tempB2[LEDPos2[4]];
  tempA2[LEDPos2[3]] = tempB3[LEDPos3[3]];  tempA2[LEDPos2[4]] = tempB3[LEDPos3[4]];
  tempA3[LEDPos3[3]] = tempB4[LEDPos4[3]];  tempA3[LEDPos3[4]] = tempB4[LEDPos4[4]];
  tempA4[LEDPos4[3]] = tempB1[LEDPos1[3]];  tempA4[LEDPos4[4]] = tempB1[LEDPos1[4]];

  arraysetA(tempA1);  arraysetB(tempA2); arraysetC(tempA3);
  arraysetD(tempA4);  arraysetE(tempA5); arraysetF(tempA6);
}

void pitchA2(void) {
  char tempA1[LED_COUNT] , tempA2[LED_COUNT] , tempA3[LED_COUNT] ;
  char tempA4[LED_COUNT] , tempA5[LED_COUNT] , tempA6[LED_COUNT] ;

  char tempB1[LED_COUNT] , tempB2[LED_COUNT] , tempB3[LED_COUNT] ;
  char tempB4[LED_COUNT] , tempB5[LED_COUNT] , tempB6[LED_COUNT] ;

  unsigned char i;
  for (i = 0; i < LED_COUNT; i++) {
    tempA1[i] = sideA[i]; tempA2[i] = sideB[i];    tempA3[i] = sideC[i];
    tempA4[i] = sideD[i]; tempA5[i] = sideE[i];    tempA6[i] = sideF[i];
    tempB1[i] = sideA[i]; tempB2[i] = sideB[i];    tempB3[i] = sideC[i];
    tempB4[i] = sideD[i]; tempB5[i] = sideE[i];    tempB6[i] = sideF[i];
  }

  tempA1[LEDPos1[2]] = tempB6[LEDPos6[2]];  tempA1[LEDPos1[4]] = tempB6[LEDPos6[4]];
  tempA5[LEDPos5[2]] = tempB1[LEDPos1[2]];  tempA5[LEDPos5[4]] = tempB1[LEDPos1[4]];
  tempA3[LEDPos3[3]] = tempB5[LEDPos5[2]];  tempA3[LEDPos3[1]] = tempB5[LEDPos5[4]];
  tempA6[LEDPos6[2]] = tempB3[LEDPos3[3]];  tempA6[LEDPos6[4]] = tempB3[LEDPos3[1]];

  arraysetA(tempA1);  arraysetB(tempA2); arraysetC(tempA3);
  arraysetD(tempA4);  arraysetE(tempA5); arraysetF(tempA6);
}
void pitchB2(void) {
  char tempA1[LED_COUNT] , tempA2[LED_COUNT] , tempA3[LED_COUNT] ;
  char tempA4[LED_COUNT] , tempA5[LED_COUNT] , tempA6[LED_COUNT] ;

  char tempB1[LED_COUNT] , tempB2[LED_COUNT] , tempB3[LED_COUNT] ;
  char tempB4[LED_COUNT] , tempB5[LED_COUNT] , tempB6[LED_COUNT] ;

  unsigned char i;
  for (i = 0; i < LED_COUNT; i++) {
    tempA1[i] = sideA[i]; tempA2[i] = sideB[i];    tempA3[i] = sideC[i];
    tempA4[i] = sideD[i]; tempA5[i] = sideE[i];    tempA6[i] = sideF[i];
    tempB1[i] = sideA[i]; tempB2[i] = sideB[i];    tempB3[i] = sideC[i];
    tempB4[i] = sideD[i]; tempB5[i] = sideE[i];    tempB6[i] = sideF[i];
  }

  tempA1[LEDPos1[1]] = tempB6[LEDPos6[1]];  tempA1[LEDPos1[3]] = tempB6[LEDPos6[3]];
  tempA5[LEDPos5[1]] = tempB1[LEDPos1[1]];  tempA5[LEDPos5[3]] = tempB1[LEDPos1[3]];
  tempA3[LEDPos3[4]] = tempB5[LEDPos5[1]];  tempA3[LEDPos3[2]] = tempB5[LEDPos5[3]];
  tempA6[LEDPos6[1]] = tempB3[LEDPos3[4]];  tempA6[LEDPos6[3]] = tempB3[LEDPos3[2]];

  arraysetA(tempA1);  arraysetB(tempA2); arraysetC(tempA3);
  arraysetD(tempA4);  arraysetE(tempA5); arraysetF(tempA6);
}

void yawA2(void) {
    char tempA1[LED_COUNT] , tempA2[LED_COUNT] , tempA3[LED_COUNT] ;
    char tempA4[LED_COUNT] , tempA5[LED_COUNT] , tempA6[LED_COUNT] ;
  char tempB1[LED_COUNT] , tempB2[LED_COUNT] , tempB3[LED_COUNT] ;
  char tempB4[LED_COUNT] , tempB5[LED_COUNT] , tempB6[LED_COUNT] ;

  unsigned char i;
  for (i = 0; i < LED_COUNT; i++) {
    tempA1[i] = sideA[i]; tempA2[i] = sideB[i];    tempA3[i] = sideC[i];
    tempA4[i] = sideD[i]; tempA5[i] = sideE[i];    tempA6[i] = sideF[i];
    tempB1[i] = sideA[i]; tempB2[i] = sideB[i];    tempB3[i] = sideC[i];
    tempB4[i] = sideD[i]; tempB5[i] = sideE[i];    tempB6[i] = sideF[i];
  }

  tempA4[LEDPos4[1]] = tempB5[LEDPos5[2]]; tempA4[LEDPos4[3]] = tempB5[LEDPos5[1]];
  tempA5[LEDPos5[2]] = tempB2[LEDPos2[4]]; tempA5[LEDPos5[1]] = tempB2[LEDPos2[2]];
  tempA2[LEDPos2[4]] = tempB6[LEDPos6[3]]; tempA2[LEDPos2[2]] = tempB6[LEDPos6[4]];
  tempA6[LEDPos6[3]] = tempB4[LEDPos4[1]]; tempA6[LEDPos6[4]] = tempB4[LEDPos4[3]];

  arraysetA(tempA1);  arraysetB(tempA2); arraysetC(tempA3);
  arraysetD(tempA4);  arraysetE(tempA5); arraysetF(tempA6);
}
void yawB2(void) {
  char tempA1[LED_COUNT] , tempA2[LED_COUNT] , tempA3[LED_COUNT] ;
  char tempA4[LED_COUNT] , tempA5[LED_COUNT] , tempA6[LED_COUNT] ;

  char tempB1[LED_COUNT] , tempB2[LED_COUNT] , tempB3[LED_COUNT] ;
  char tempB4[LED_COUNT] , tempB5[LED_COUNT] , tempB6[LED_COUNT] ;

  unsigned char i;
  for (i = 0; i < LED_COUNT; i++) {
    tempA1[i] = sideA[i]; tempA2[i] = sideB[i];    tempA3[i] = sideC[i];
    tempA4[i] = sideD[i]; tempA5[i] = sideE[i];    tempA6[i] = sideF[i];
    tempB1[i] = sideA[i]; tempB2[i] = sideB[i];    tempB3[i] = sideC[i];
    tempB4[i] = sideD[i]; tempB5[i] = sideE[i];    tempB6[i] = sideF[i];
  }

  tempA4[LEDPos4[2]] = tempB5[LEDPos5[4]]; tempA4[LEDPos4[4]] = tempB5[LEDPos5[3]];
  tempA5[LEDPos5[4]] = tempB2[LEDPos2[3]]; tempA5[LEDPos5[3]] = tempB2[LEDPos2[1]];
  tempA2[LEDPos2[3]] = tempB6[LEDPos6[1]]; tempA2[LEDPos2[1]] = tempB6[LEDPos6[2]];
  tempA6[LEDPos6[1]] = tempB4[LEDPos4[2]]; tempA6[LEDPos6[2]] = tempB4[LEDPos4[4]];

  arraysetA(tempA1);  arraysetB(tempA2); arraysetC(tempA3);
  arraysetD(tempA4);  arraysetE(tempA5); arraysetF(tempA6);
}
void arraysetA(char* A) {
  unsigned char i;
  for (i = 0; i < LED_COUNT; i++) {
    sideA[i] = A[i];
  }
}
void arraysetB(char* A) {
  unsigned char i;
  for (i = 0; i < LED_COUNT; i++) {
    sideB[i] = A[i];
  }
}
void arraysetC(char* A) {
  unsigned char i;
  for (i = 0; i < LED_COUNT; i++) {
    sideC[i] = A[i];
  }
}
void arraysetD(char* A) {
  unsigned char i;
  for (i = 0; i < LED_COUNT; i++) {
    sideD[i] = A[i];
  }
}
void arraysetE(char* A) {
  unsigned char i;
  for (i = 0; i < LED_COUNT; i++) {
    sideE[i] = A[i];
  }
}
void arraysetF(char* A) {
  unsigned char i;
  for (i = 0; i < LED_COUNT; i++) {
    sideF[i] = A[i];
  }
}
void RotSideA2(void) {
  char tempA1[LED_COUNT];
  char tempB1[LED_COUNT];
  unsigned char i;
  if (1==1) {
    for (i = 0; i < LED_COUNT; i++) {
      tempA1[i] = sideA[i];
      tempB1[i] = sideA[i];
    }
    tempA1[LEDPos1[1]] = tempB1[LEDPos1[2]];
    tempA1[LEDPos1[3]] = tempB1[LEDPos1[1]];
    tempA1[LEDPos1[4]] = tempB1[LEDPos1[3]];
    tempA1[LEDPos1[2]] = tempB1[LEDPos1[4]];

    arraysetA(tempA1);
  }
}
void RotSideB2(void) {
  char tempA2[LED_COUNT];
  char tempB2[LED_COUNT];
  unsigned char i;
  if (1==1) {
    for (i = 0; i < LED_COUNT; i++) {
      tempA2[i] = sideB[i];
      tempB2[i] = sideB[i];
    }

    tempA2[LEDPos2[1]] = tempB2[LEDPos2[2]];
    tempA2[LEDPos2[3]] = tempB2[LEDPos2[1]];
    tempA2[LEDPos2[4]] = tempB2[LEDPos2[3]];
    tempA2[LEDPos2[2]] = tempB2[LEDPos2[4]];

    arraysetB(tempA2);
  }
}
void RotSideC2(void) {
  char tempA3[LED_COUNT];
  char tempB3[LED_COUNT];
  unsigned char i;
  if (1==1) {
    for (i = 0; i < LED_COUNT; i++) {
      tempA3[i] = sideC[i];
      tempB3[i] = sideC[i];
    }
    tempA3[LEDPos3[1]] = tempB3[LEDPos3[2]];
    tempA3[LEDPos3[3]] = tempB3[LEDPos3[1]];
    tempA3[LEDPos3[4]] = tempB3[LEDPos3[3]];
    tempA3[LEDPos3[2]] = tempB3[LEDPos3[4]];

    arraysetC(tempA3);
  }
}
void RotSideD2(void) {
  char tempA4[LED_COUNT];
  char tempB4[LED_COUNT];
  unsigned char i;
  if (1==1) {
    for (i = 0; i < LED_COUNT; i++) {
      tempA4[i] = sideD[i];
      tempB4[i] = sideD[i];
    }
    tempA4[LEDPos4[1]] = tempB4[LEDPos4[2]];
    tempA4[LEDPos4[3]] = tempB4[LEDPos4[1]];
    tempA4[LEDPos4[4]] = tempB4[LEDPos4[3]];
    tempA4[LEDPos4[2]] = tempB4[LEDPos4[4]];

    arraysetD(tempA4);
  }
}
void RotSideE2(void) {
  char tempA5[LED_COUNT];
  char tempB5[LED_COUNT];
  unsigned char i;
  if (1==1) {
    for (i = 0; i < LED_COUNT; i++) {
      tempA5[i] = sideE[i];
      tempB5[i] = sideE[i];
    }
    tempA5[LEDPos5[1]] = tempB5[LEDPos5[2]];
    tempA5[LEDPos5[3]] = tempB5[LEDPos5[1]];
    tempA5[LEDPos5[4]] = tempB5[LEDPos5[3]];
    tempA5[LEDPos5[2]] = tempB5[LEDPos5[4]];

    arraysetE(tempA5);
  }
}
void RotSideF2(void) {
  char tempA6[LED_COUNT];
  char tempB6[LED_COUNT];
  unsigned char i;
  if (1==1) {
    for (i = 0; i < LED_COUNT; i++) {
      tempA6[i] = sideF[i];
      tempB6[i] = sideF[i];
    }
    tempA6[LEDPos6[1]] = tempB6[LEDPos6[2]];
    tempA6[LEDPos6[3]] = tempB6[LEDPos6[1]];
    tempA6[LEDPos6[4]] = tempB6[LEDPos6[3]];
    tempA6[LEDPos6[2]] = tempB6[LEDPos6[4]];

    arraysetF(tempA6);
  }
}
void Rubikroll2(char i) {
  switch (i) {
    case 1:
      rollA2(); rollA2(); rollA2(); RotSideF2(); RotSideF2(); RotSideF2();
      break;
    case 2:
      rollB2(); rollB2(); rollB2(); RotSideE2();
      break;
    default:
      break;
  }
}
void Rubikpitch2(char i) {
  switch (i) {
    case 1:
      pitchA2(); RotSideD2();
      break;
    case 2:
      pitchB2(); RotSideB2(); RotSideB2(); RotSideB2();
      break;
    default:
      break;
  }
}
void Rubikyaw2(char i) {
  switch (i) {
    case 1:
      yawA2(); RotSideA2();
      break;
    case 2:
      yawB2(); RotSideC2(); RotSideC2(); RotSideC2();
      break;
    default:
      break;
  }
}
void ShowSide(char * side) {
      unsigned char i;
      for (i = 0; i < LED_COUNT; i++) {
        printf("%d,",side[i]);
      }
      printf("\n");
}
void Show(){
    ShowSide(sideA);
    ShowSide(sideB);
    ShowSide(sideC);
    ShowSide(sideD);
    ShowSide(sideE);
    ShowSide(sideF);
}

int checkside(char * side){
    for(int i=0;i<LED_COUNT;i++){
        if(side[0]!=side[i]){
            return 0;
        }
    }
    return 1;
}

int Check(){
  if(checkside(sideA)==1){
    if (checkside(sideB)==1){
      if(checkside(sideC)==1){
        if(checkside(sideD)==1){
          if(checkside(sideE)==1){
            if(checkside(sideF)==1){
              return 1;
            }
          }
        }
      }
    }
  }
}
void Set(){
  arraysetA(tp1);
  arraysetB(tp2);
  arraysetC(tp3);
  arraysetD(tp4);
  arraysetE(tp5);
  arraysetF(tp6);
}

void solve(int a,int b,int c,int d,int e,int f,int g){
    Set();
    if(a==0){
    }
    else if(a==1){
        Rubikroll2(1);
    }
    else if(a==2){
        Rubikroll2(2);
    }
    else if(a==3){
        Rubikpitch2(1);
    }
    else if(a==4){
        Rubikpitch2(2);
    }
    else if(a==5){
        Rubikyaw2(1);
    }
    else if(a==6){
        Rubikyaw2(2);
    }
    if(b==0){
    }
    else if(b==1){
        Rubikroll2(1);
    }
    else if(b==2){
        Rubikroll2(2);
    }
    else if(b==3){
        Rubikpitch2(1);
    }
    else if(b==4){
        Rubikpitch2(2);
    }
    else if(b==5){
        Rubikyaw2(1);
    }
    else if(b==6){
        Rubikyaw2(2);
    }
    if(c==0){
    }
    else if(c==1){
        Rubikroll2(1);
    }
    else if(c==2){
        Rubikroll2(2);
    }
    else if(c==3){
        Rubikpitch2(1);
    }
    else if(c==4){
        Rubikpitch2(2);
    }
    else if(c==5){
        Rubikyaw2(1);
    }
    else if(c==6){
        Rubikyaw2(2);
    }
    if(d==0){
    }
    else if(d==1){
        Rubikroll2(1);
    }
    else if(d==2){
        Rubikroll2(2);
    }
    else if(d==3){
        Rubikpitch2(1);
    }
    else if(d==4){
        Rubikpitch2(2);
    }
    else if(d==5){
        Rubikyaw2(1);
    }
    else if(d==6){
        Rubikyaw2(2);
    }
    if(e==0){
    }
    else if(e==1){
        Rubikroll2(1);
    }
    else if(e==2){
        Rubikroll2(2);
    }
    else if(e==3){
        Rubikpitch2(1);
    }
    else if(e==4){
        Rubikpitch2(2);
    }
    else if(e==5){
        Rubikyaw2(1);
    }
    else if(e==6){
        Rubikyaw2(2);
    }
    if(f==0){
    }
    else if(f==1){
        Rubikroll2(1);
    }
    else if(f==2){
        Rubikroll2(2);
    }
    else if(f==3){
        Rubikpitch2(1);
    }
    else if(f==4){
        Rubikpitch2(2);
    }
    else if(f==5){
        Rubikyaw2(1);
    }
    else if(f==6){
        Rubikyaw2(2);
    }
    if(g==0){
    }
    else if(g==1){
        Rubikroll2(1);
    }
    else if(g==2){
        Rubikroll2(2);
    }
    else if(g==3){
        Rubikpitch2(1);
    }
    else if(g==4){
        Rubikpitch2(2);
    }
    else if(g==5){
        Rubikyaw2(1);
    }
    else if(g==6){
        Rubikyaw2(2);
    }
}



void main(){
    int depth = 0;
    for(int s=0;s<7;s++){
        if(s==0){
        }
        else if (s==1){
            if(depth<7){
                depth=7;
            }
        }
        else if (s==2){
        }
        else if (s==3){
        }
        else if (s==4){
        }
        else if (s==5){
        }
        else if (s==6){
        }
    
    for(int o=0;o<7;o++){
        if(o==0){
        }
        else if (o==1){
            if(depth<6){
                depth=6;
            }
        }
        else if (o==2){
        }
        else if (o==3){
        }
        else if (o==4){
        }
        else if (o==5){
        }
        else if (o==6){
        }
        for(int p=0;p<7;p++){
            if(p==0){
            }
            else if (p==1){
                if(depth<5){
                    depth=5;
                }
            }
            else if (p==2){
            }
            else if (p==3){
            }
            else if (p==4){
            }
            else if (p==5){
            }
            else if (p==6){
            }
            for(int k=0;k<7;k++){
                if(k==0){
                }
                else if (k==1){
                    if(depth<4){
                        depth=4;
                    }
                }
                else if (k==2){
                }
                else if (k==3){
                }
                else if (k==4){
                }
                else if (k==5){
                }
                else if (k==6){
                }
                for(int l=0;l<7;l++){
                    if(l==0){
                    }else if (l==1){
                        if(depth<3){
                            depth=3;
                        }
                    }
                    else if (l==2){
                    }
                    else if (l==3){
                    }
                    else if (l==4){
                    }
                    else if (l==5){
                    }
                    else if (l==6){
                    }
                    for(int m=0;m<7;m++){
                        if(m==0){
                        }
                        else if (m==1){
                            if(depth<=2){
                                depth=2;
                            }
                        }
                        else if (m==2){
                        }
                        else if (m==3){
                        }
                        else if (m==4){
                        }
                        else if (m==5){
                        }
                        else if (m==6){
                        }
                        for(int n=0;n<7;n++){
                            if(n==0){
                            }
                            else if (n==1){
                                if(depth<=1){
                                depth=1;
                            }
                            }
                            else if (n==2){
                            }
                            else if (n==3){
                            }
                            else if (n==4){
                            }
                            else if (n==5){
                            }
                            else if (n==6){
                            }
                            //ここに対応させた関数を置く
                            solve(s,o,p,k,l,m,n);
                            if (Check()==1){
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
    
    printf("nothing");
}
