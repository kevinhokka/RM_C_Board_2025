#ifndef SWEEP_H
#define SWEEP_H
#include "headfile.h"


extern float t_0; /* t0 �źŷ�������ʼ������ʱ��, ��λ ms */
extern float t_01; /* �� t0 �� t1 ��ʱ����, ��λ ms */

extern float f0; /* ʱ�� t0 ��Ӧ��Ƶ�ʣ� ��λ hz */
extern float f1; /* ʱ�� t1 ��Ӧ��Ƶ�ʣ� ��λ hz */
extern float k; /* ָ�������ĵ��� */
extern float p; /* ϵ�� p */
extern float A; /* ɨƵ�źŵķ�ֵ */
extern float Y ;//ɨƵ�ź�
extern float t_now ;
extern int N;
void init_my_sweep(void);
void run_my_sweep(void);
#endif