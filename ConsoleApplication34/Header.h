#pragma once
double fe(double *x, double *y);
double fa(double *x, double *y, double *x2, double *y2);
float x(float a, float b);
float x(float a, float b, float c, float z);
void swap(int* a, int* b);
int del2(int *a, int *b);
int del(int *a, int *b);
void masivRand(int *A, int *len);
void masivCout(int *A, int *len);
void maxMin(int *A, int *len);
void Masiv4x4(int *A, int *len, int(*B)[4], int *len2);

void Masiv4x4Cout(int(*B)[4], int *len2);
void masivChetNechet(int *A, int *len);
