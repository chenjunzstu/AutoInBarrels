/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Addr_0_Pin GPIO_PIN_2
#define Addr_0_GPIO_Port GPIOE
#define Addr_1_Pin GPIO_PIN_3
#define Addr_1_GPIO_Port GPIOE
#define Addr_2_Pin GPIO_PIN_4
#define Addr_2_GPIO_Port GPIOE
#define Addr_3_Pin GPIO_PIN_5
#define Addr_3_GPIO_Port GPIOE
#define up_ADC0_Pin GPIO_PIN_0
#define up_ADC0_GPIO_Port GPIOC
#define up_ADC1_Pin GPIO_PIN_1
#define up_ADC1_GPIO_Port GPIOC
#define up_ADC2_Pin GPIO_PIN_2
#define up_ADC2_GPIO_Port GPIOC
#define up_ADC3_Pin GPIO_PIN_3
#define up_ADC3_GPIO_Port GPIOC
#define UART_R_T_Pin GPIO_PIN_1
#define UART_R_T_GPIO_Port GPIOA
#define up_KEY0_Pin GPIO_PIN_4
#define up_KEY0_GPIO_Port GPIOA
#define up_KEY1_Pin GPIO_PIN_5
#define up_KEY1_GPIO_Port GPIOA
#define up_KEY2_Pin GPIO_PIN_6
#define up_KEY2_GPIO_Port GPIOA
#define up_KEY3_Pin GPIO_PIN_7
#define up_KEY3_GPIO_Port GPIOA
#define up_KEY4_Pin GPIO_PIN_4
#define up_KEY4_GPIO_Port GPIOC
#define up_KEY5_Pin GPIO_PIN_5
#define up_KEY5_GPIO_Port GPIOC
#define up_IN0_Pin GPIO_PIN_0
#define up_IN0_GPIO_Port GPIOB
#define up_IN1_Pin GPIO_PIN_1
#define up_IN1_GPIO_Port GPIOB
#define MO_INC__Pin GPIO_PIN_7
#define MO_INC__GPIO_Port GPIOE
#define MO_INC_E8_Pin GPIO_PIN_8
#define MO_INC_E8_GPIO_Port GPIOE
#define Zero_det_Pin GPIO_PIN_10
#define Zero_det_GPIO_Port GPIOE
#define up_Ultra_R_T_Pin GPIO_PIN_15
#define up_Ultra_R_T_GPIO_Port GPIOE
#define up_Ultra_TX_Pin GPIO_PIN_10
#define up_Ultra_TX_GPIO_Port GPIOB
#define up_Ultra_RX_Pin GPIO_PIN_11
#define up_Ultra_RX_GPIO_Port GPIOB
#define up_OUT0_EM_Pin GPIO_PIN_12
#define up_OUT0_EM_GPIO_Port GPIOB
#define up_OUT2_EM_Pin GPIO_PIN_14
#define up_OUT2_EM_GPIO_Port GPIOB
#define up_OUT3_EM_Pin GPIO_PIN_15
#define up_OUT3_EM_GPIO_Port GPIOB
#define IN0_EM_Pin GPIO_PIN_8
#define IN0_EM_GPIO_Port GPIOD
#define IN1_EM_Pin GPIO_PIN_9
#define IN1_EM_GPIO_Port GPIOD
#define IN2_EM_Pin GPIO_PIN_10
#define IN2_EM_GPIO_Port GPIOD
#define IN3_EM_Pin GPIO_PIN_11
#define IN3_EM_GPIO_Port GPIOD
#define MO_INA__Pin GPIO_PIN_12
#define MO_INA__GPIO_Port GPIOD
#define MO_INA_D13_Pin GPIO_PIN_13
#define MO_INA_D13_GPIO_Port GPIOD
#define MO_INB__Pin GPIO_PIN_14
#define MO_INB__GPIO_Port GPIOD
#define MO_INB_D15_Pin GPIO_PIN_15
#define MO_INB_D15_GPIO_Port GPIOD
#define up_Sens_0_Pin GPIO_PIN_6
#define up_Sens_0_GPIO_Port GPIOC
#define up_Sens_1_Pin GPIO_PIN_7
#define up_Sens_1_GPIO_Port GPIOC
#define up_Ctrl_Pin GPIO_PIN_8
#define up_Ctrl_GPIO_Port GPIOC
#define up_TX1_Pin GPIO_PIN_9
#define up_TX1_GPIO_Port GPIOA
#define up_RX1_Pin GPIO_PIN_10
#define up_RX1_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
