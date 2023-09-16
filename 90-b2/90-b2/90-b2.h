/* 2151928 ÌÆÜ·Öñ ĞÅ12 */
#pragma once
#define line_x_array 8
#define line_y_array 10
#define highlight_yellow 14
#define black 0
#define white 7
void shuru(char* x, char* y, int array[][10], char array_ch[][10],  int line_x, int line_y);
void compare(char crd_x, char crd_y, int array[][10], char array_ch[][10], int line_x, int line_y);
void find(int sign, int array[][10], char array_ch[][10], int* n, int line_x, int line_y);
void panduan(int x, int y, int sign, int array[][10], char array_ch[][10], int line_x, int line_y);
void chupanduan(int x, int y, int sign, int array[][10], char array_ch[][10], int* n, int line_x, int line_y);
void array_draw(int array[][10], char array_ch[][10], int line_x, int line_y);
void print_array(int line_x, int line_y, int array[][10]);
void print_array_ch(int line_x, int line_y, char array_ch[][10]);
void falldown(char crd_x, char crd_y, int line_x, int line_y, int array[][10], char array_ch[][10]);
void guibing(char crd_x, char crd_y, int line_x, int line_y, int array[][10], char array_ch[][10], int* max);
int asr_make();
void my_end();
int my_score(char crd_x, char crd_y, int line_x, int line_y, int array[][10], char array_ch[][10],int order);
int whether_goal(int line_x, int line_y, int goal, int array[][10]);
void rand_make(int line_x, int line_y, int array[][10], int goal);
void again(char crd_x, char crd_y, int line_x, int line_y, int array[][10], char array_ch[][10], int *goal, int max, int score, int *score_all);
void guibing(char crd_x, char crd_y, int line_x, int line_y, int array[][10], char array_ch[][10], int* max);
void print_square(int x, int y, int base_x, int base_y, int array[][10],int order);
int xy_judge(int MX, int MY, int line_x, int line_y,int &p,int&q);
void HLIGHT_square(int p, int q, int base_x, int base_y, int array[][10]);
void CANCEL_HLIGHT_square(int p, int q, int base_x, int base_y, int array[][10]);
void squares_clean(int p, int q, int line_x, int line_y, int base_x, int base_y, int array[][10], char array_ch[][10]);