// Target definition

// 窄esp32s3开发板+ST7789屏幕+自有MAX98357音频+SD卡配置文件

#define RG_TARGET_NAME             "ESP32-S3-DEVKIT"

// Storage
#define RG_STORAGE_ROOT             "/sd"
#define RG_STORAGE_SDSPI_HOST       SPI3_HOST
#define RG_STORAGE_SDSPI_SPEED      SDMMC_FREQ_DEFAULT
// #define RG_STORAGE_SDMMC_HOST       SDMMC_HOST_SLOT_1
// #define RG_STORAGE_SDMMC_SPEED      SDMMC_FREQ_DEFAULT
// #define RG_STORAGE_FLASH_PARTITION  "vfs"

// Audio
#define RG_AUDIO_USE_INT_DAC        0   // 0 = Disable, 1 = GPIO25, 2 = GPIO26, 3 = Both
#define RG_AUDIO_USE_EXT_DAC        1   // 0 = Disable, 1 = Enable

// Video
#define RG_SCREEN_DRIVER            0   // 0 = ILI9341 (using same driver for ST7789)
#define RG_SCREEN_HOST              SPI2_HOST
#define RG_SCREEN_SPEED             SPI_MASTER_FREQ_40M // SPI_MASTER_FREQ_80M
#define RG_SCREEN_BACKLIGHT         1
#define RG_SCREEN_WIDTH             320  // Physical width (landscape)
#define RG_SCREEN_HEIGHT            240  // Physical height (landscape)
#define RG_SCREEN_ROTATE            0
#define RG_SCREEN_MARGIN_TOP        0
#define RG_SCREEN_MARGIN_BOTTOM     0
#define RG_SCREEN_MARGIN_LEFT       0
#define RG_SCREEN_MARGIN_RIGHT      0

// ST7789 initialization sequence (320x240 landscape)
#define RG_SCREEN_INIT()                                                                                           \
    ILI9341_CMD(0x20);                       /* Display Inversion ON - Fix inverted colors */ \
    ILI9341_CMD(0x36, 0x60);                 /* Memory Access Control - 0x60 for landscape (RGB order) */ \
    ILI9341_CMD(0xB2, 0x0C, 0x0C, 0x00, 0x33, 0x33); /* Porch Setting */                                          \
    ILI9341_CMD(0xB7, 0x35);                 /* Gate Control */                                                   \
    ILI9341_CMD(0xBB, 0x19);                 /* VCOM Setting */                                                   \
    ILI9341_CMD(0xC0, 0x2C);                 /* LCM Control */                                                    \
    ILI9341_CMD(0xC2, 0x01);                 /* VDV and VRH Command Enable */                                     \
    ILI9341_CMD(0xC3, 0x12);                 /* VRH Set */                                                        \
    ILI9341_CMD(0xC4, 0x20);                 /* VDV Set */                                                        \
    ILI9341_CMD(0xC6, 0x0F);                 /* Frame Rate Control in Normal Mode */                             \
    ILI9341_CMD(0xD0, 0xA4, 0xA1);           /* Power Control 1 */                                                \
    ILI9341_CMD(0xE0, 0xD0, 0x04, 0x0D, 0x11, 0x13, 0x2B, 0x3F, 0x54, 0x4C, 0x18, 0x0D, 0x0B, 0x1F, 0x23); /* Positive Voltage Gamma */ \
    ILI9341_CMD(0xE1, 0xD0, 0x04, 0x0C, 0x11, 0x13, 0x2C, 0x3F, 0x44, 0x51, 0x2F, 0x1F, 0x1F, 0x20, 0x23); /* Negative Voltage Gamma */

// Input
// Refer to rg_input.h to see all available RG_KEY_* and RG_GAMEPAD_*_MAP types
// GPIO buttons - Adjust these GPIO numbers according to your actual hardware
#define RG_GAMEPAD_GPIO_MAP { \
    {RG_KEY_UP,     .num = GPIO_NUM_11,  .pullup = 1, .level = 0}, \
    {RG_KEY_DOWN,   .num = GPIO_NUM_12,  .pullup = 1, .level = 0}, \
    {RG_KEY_LEFT,   .num = GPIO_NUM_13,  .pullup = 1, .level = 0}, \
    {RG_KEY_RIGHT,  .num = GPIO_NUM_14,  .pullup = 1, .level = 0}, \
    {RG_KEY_SELECT, .num = GPIO_NUM_40, .pullup = 1, .level = 0}, \
    {RG_KEY_START,  .num = GPIO_NUM_39, .pullup = 1, .level = 0}, \
    {RG_KEY_MENU,   .num = GPIO_NUM_5, .pullup = 1, .level = 0}, \
    {RG_KEY_OPTION, .num = GPIO_NUM_4, .pullup = 1, .level = 0}, \
    {RG_KEY_A,      .num = GPIO_NUM_21, .pullup = 1, .level = 0}, \
    {RG_KEY_B,      .num = GPIO_NUM_47, .pullup = 1, .level = 0}, \
}

// Battery - DISABLED (No battery connected)
// #define RG_BATTERY_DRIVER           0
// #define RG_BATTERY_ADC_UNIT         ADC_UNIT_1
// #define RG_BATTERY_ADC_CHANNEL      ADC_CHANNEL_3
// #define RG_BATTERY_CALC_PERCENT(raw) (((raw) * 2.f - 3500.f) / (4200.f - 3500.f) * 100.f)
// #define RG_BATTERY_CALC_VOLTAGE(raw) ((raw) * 2.f * 0.001f)

// Status LED - DISABLED (Optional)
// #define RG_GPIO_LED                 GPIO_NUM_38

// SPI Display (ST7789 240x320)
// Standard SPI LCD pinout:
// - MOSI (SDA/DIN): Data input
// - CLK (SCK): Clock signal
// - CS: Chip select (can be NC if tied to GND)
// - DC (RS): Data/Command select
// - RST (RESET): Reset signal
// - BL (BCKL): Backlight control
#define RG_GPIO_LCD_MISO            GPIO_NUM_NC     // Not used (display is output only)
#define RG_GPIO_LCD_MOSI            GPIO_NUM_17     // MOSI (SDA/DIN) ok
#define RG_GPIO_LCD_CLK             GPIO_NUM_18     // CLK (SCK) ok
#define RG_GPIO_LCD_CS              GPIO_NUM_7     // CS (Chip Select) - Set to actual GPIO if connected
#define RG_GPIO_LCD_DC              GPIO_NUM_15      // DC (RS) - Data/Command ok
#define RG_GPIO_LCD_BCKL            GPIO_NUM_6     // BL (Backlight) ok
#define RG_GPIO_LCD_RST             GPIO_NUM_16     // RST (Reset) ok


// SPI SD Card
#define RG_GPIO_SDSPI_MISO          GPIO_NUM_41      // MISO
#define RG_GPIO_SDSPI_MOSI          GPIO_NUM_42     // MOSI
#define RG_GPIO_SDSPI_CLK           GPIO_NUM_2     // CLK
#define RG_GPIO_SDSPI_CS            GPIO_NUM_1     // CS

// // SDMMC SD Card (4-bit mode)
// #define RG_GPIO_SDMMC_CLK           GPIO_NUM_39  // CLK
// #define RG_GPIO_SDMMC_CMD           GPIO_NUM_38  // CMD
// #define RG_GPIO_SDMMC_D0            GPIO_NUM_40  // DATA0
// SDMMC ：1-bit 模式只需要 D0，4-bit 模式需要 D0-D3
// #define RG_GPIO_SDMMC_D1            GPIO_NUM_41  // DATA1
// #define RG_GPIO_SDMMC_D2            GPIO_NUM_42  // DATA2
// #define RG_GPIO_SDMMC_D3            GPIO_NUM_43  // DATA3

// External I2S DAC (MAX98357)
#define RG_GPIO_SND_I2S_BCK         9   // BCLK
#define RG_GPIO_SND_I2S_WS          10   // LRC (LRCLK)
#define RG_GPIO_SND_I2S_DATA        3    // DIN
// #define RG_GPIO_SND_AMP_ENABLE      46   // SD (Shutdown) - Enable audio output
