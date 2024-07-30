#ifndef I2C_H
#define I2C_H

#include "stm32f1xx_hal.h" // STM32F1 serisi için HAL kütüphanesi

// I2C cihaziyla ilgili temel yapilandirmalar ve fonksiyon prototipleri

// EEPROM yazma fonksiyonu
void _writeEEPROM(I2C_HandleTypeDef *hi2c, uint8_t device_address, uint16_t mem_address, uint8_t data);

// EEPROM okuma fonksiyonu
uint8_t _readEEPROM(I2C_HandleTypeDef *hi2c, uint8_t device_address, uint16_t mem_address);

#endif // I2C_H
