#include <stdio.h>
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

#define LED_COUNT 4


char sideA[LED_COUNT] = {}; char sideB[LED_COUNT] = {}; char sideC[LED_COUNT] = {};
char sideD[LED_COUNT] = {}; char sideE[LED_COUNT] = {}; char sideF[LED_COUNT] = {};

char sideA2[LED_COUNT] = {}; char sideB2[LED_COUNT] = {}; char sideC2[LED_COUNT] = {};
char sideD2[LED_COUNT] = {}; char sideE2[LED_COUNT] = {}; char sideF2[LED_COUNT] = {};

const unsigned char LEDPos1[5] = {0, (char)side1_A1, (char)side1_A2, (char)side1_A3, (char)side1_A4};
const unsigned char LEDPos2[5] = {0, (char)side2_A1, (char)side2_A2, (char)side2_A3, (char)side2_A4};
const unsigned char LEDPos3[5] = {0, (char)side3_A1, (char)side3_A2, (char)side3_A3, (char)side3_A4};
const unsigned char LEDPos4[5] = {0, (char)side4_A1, (char)side4_A2, (char)side4_A3, (char)side4_A4};
const unsigned char LEDPos5[5] = {0, (char)side5_A1, (char)side5_A2, (char)side5_A3, (char)side5_A4};
const unsigned char LEDPos6[5] = {0, (char)side6_A1, (char)side6_A2, (char)side6_A3, (char)side6_A4};

  char tp1[LED_COUNT] = {1, 1, 1, 1};
  char tp2[LED_COUNT] = {2, 2, 2, 2};
  char tp3[LED_COUNT] = {3, 3, 3, 3};
  char tp4[LED_COUNT] = {4, 4, 4, 4};
  char tp5[LED_COUNT] = {5, 5, 5, 5};
  char tp6[LED_COUNT] = {6, 6, 6, 6};

char tempA1[LED_COUNT] = {}, tempA2[LED_COUNT] = {}, tempA3[LED_COUNT] = {};
  char tempA4[LED_COUNT] = {}, tempA5[LED_COUNT] = {}, tempA6[LED_COUNT] = {};

  char tempB1[LED_COUNT] = {}, tempB2[LED_COUNT] = {}, tempB3[LED_COUNT] = {};
  char tempB4[LED_COUNT] = {}, tempB5[LED_COUNT] = {}, tempB6[LED_COUNT] = {};
void rollA2(void) {

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
  
}

void main(){
    for (int i = 0; i < 4; i++)
    {
        sideA[i] = tp1[i];
        sideB[i] = tp2[i];
        sideC[i] = tp3[i];
        sideD[i] = tp4[i];
        sideE[i] = tp5[i];
        sideF[i] = tp6[i];
    }
    
    rollA2();
    for (int i = 0; i < 4; i++)
    {
        printf("%d,",tempA1[i]);
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d,",tempA2[i]);
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d,",tempA3[i]);
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d,",tempA4[i]);
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d,",tempA5[i]);
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d,",tempA6[i]);
    }
    printf("\n");
}