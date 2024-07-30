#ifndef HEADER_H
#define HEADER_H

#include "stm32f1xx_hal.h" // Gerekli HAL kütüphanesi

// EEPROM'a veri yazan fonksiyonun prototipi
void _writeEEPROM(I2C_HandleTypeDef *hi2c, uint8_t device_address, uint16_t mem_address, uint8_t data);

// EEPROM'dan veri okuyan fonksiyonun prototipi
uint8_t _readEEPROM(I2C_HandleTypeDef *hi2c, uint8_t device_address, uint16_t mem_address);

// EEPROM'a veri yazan fonksiyon
void _writeEEPROM(I2C_HandleTypeDef *hi2c, uint8_t device_address, uint16_t mem_address, uint8_t data) {
    HAL_I2C_Mem_Write(hi2c, device_address, mem_address, I2C_MEMADD_SIZE_16BIT, &data, 1, 1000);
}

// EEPROM'dan veri okuyan fonksiyon
uint8_t _readEEPROM(I2C_HandleTypeDef *hi2c, uint8_t device_address, uint16_t mem_address) {
    uint8_t data;
    HAL_I2C_Mem_Read(hi2c, device_address, mem_address, I2C_MEMADD_SIZE_16BIT, &data, 1, 1000);
    return data;
}

#endif // HEADER_H
