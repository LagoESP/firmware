#define USE_SSD1306
#define RESET_OLED 21

// Relevant Battery Settings
#define BATTERY_PIN 1
#define ADC_CHANNEL ADC1_GPIO1_CHANNEL
#define ADC_MULTIPLIER 103.0 // Calibrated for my board
#define ADC_ATTENUATION ADC_ATTEN_DB_0
#define ADC_CTRL 37
#define ADC_CTRL_ENABLED LOW // Or 0

#define I2C_SDA 18 // I2C pins for this board
#define I2C_SCL 17

#define LED_PIN 35   // If defined we will blink this LED
#define BUTTON_PIN 0 // If defined, this will be used for user button presses,
#define BUTTON_NEED_PULLUP

#define USE_LR1121

#define LORA_SCK 9
#define LORA_MISO 11
#define LORA_MOSI 10
#define LORA_CS 8
#define LORA_RESET 12

// LR1121
#ifdef USE_LR1121
#define LR1121_IRQ_PIN 14 // DIO9
#define LR1121_NRESET_PIN LORA_RESET
#define LR1121_BUSY_PIN 13
#define LR1121_SPI_NSS_PIN LORA_CS
#define LR1121_SPI_SCK_PIN LORA_SCK
#define LR1121_SPI_MOSI_PIN LORA_MOSI
#define LR1121_SPI_MISO_PIN LORA_MISO
#define LR11X0_DIO3_TCXO_VOLTAGE 3.3
#define LR11X0_DIO_AS_RF_SWITCH
#endif
