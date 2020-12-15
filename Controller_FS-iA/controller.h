/**
  ******************************************************************************
  * �ļ�����: controller.h
  * ��    ��: Jason_xy
  * ���˲��ͣ�https://jason-xy.cn
  * ��    ��: V1.0
  * ��д����: 2020-11-15
  * ��    ��: ���ջ�ģ������
  ******************************************************************************
  * ˵����
  * 1.��Ҫ�����TIM�ĳ�ʼ����
  * 2.����ǰ����ʱ��Ƶ��100MHz�������Լ��İ����趨�������ҵ�Psc = 99������ͨ��ÿһ������1us��
  * 
  * ���ܣ�
  * 1.���ջ����ݲɼ���
  * 2.���ݲɼ����ݸı�����ת�١�
  ******************************************************************************
  */

#ifndef __CONTROLLER_H__
#define __CONTROLLER_H__

#include "stm32f4xx_hal.h"
#include "tim.h"
#include "motor.h"

void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim);
void Input_Capture_Init(void);

#endif /* __CONTROLLER_H__ */