
#ifndef PLATFORM_H
#define PLATFORM_H


#include "stdint.h"
#include "../../Drivers/STM32H7xx_HAL_Driver/Inc/stm32h7xx_hal_gpio.h"


typedef struct { 
    void *hbus;
    uint8_t i2c_address;
    GPIO_TypeDef *cs_port;
    uint16_t cs_pin;
} sensbus_t; 

/// @brief Platform specific imu write HAL function
/// @param handle handle to imu context struct
/// @param reg register address
/// @param bufp pointer to write buffer
/// @param len length of data to be written
/// @return 
int32_t platform_write_imu(void* handle, uint8_t reg, const uint8_t* bufp, uint16_t len);


/// @brief Platform specific imu read HAL function
/// @param handle handle to imu context struct
/// @param reg register address
/// @param bufp pointer to read buffer
/// @param len length of data to be read
/// @return 
int32_t platform_read_imu(void* handle, uint8_t reg, uint8_t* bufp, uint16_t len);






#endif // PLATFORM_H