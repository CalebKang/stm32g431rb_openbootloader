/**
  ******************************************************************************
  * @file    interfaces_conf.h
  * @author  MCD Application Team
  * @brief   Contains Interfaces configuration
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Image license SLA0044,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                       www.st.com/SLA0044
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef INTERFACES_CONF_H
#define INTERFACES_CONF_H

#define MEMORIES_SUPPORTED                7U

#define USARTx                            USART2

#define RCC_USARTx_CLK_ENABLE             __HAL_RCC_USART2_CLK_ENABLE
#define RCC_USARTx_GPIOx_RX_CLK_ENABLE    __HAL_RCC_GPIOA_CLK_ENABLE
#define RCC_USARTx_GPIOx_TX_CLK_ENABLE    __HAL_RCC_GPIOA_CLK_ENABLE

#define USARTx_TX_PIN                     GPIO_PIN_2
#define USARTx_TX_GPIO_PORT               GPIOA
#define USARTx_RX_PIN                     GPIO_PIN_3
#define USARTx_RX_GPIO_PORT               GPIOA
#define USARTx_ALTERNATE                  GPIO_AF7_USART2

#endif /* INTERFACES_CONF_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
