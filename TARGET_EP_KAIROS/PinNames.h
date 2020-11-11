/* mbed Microcontroller Library
 * Copyright (c) 2006-2013 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "cmsis.h"

#ifdef __cplusplus
extern "C" {
#endif

/* If this macro is defined, then constexpr utility functions for pin-map seach can be used. */
#define STATIC_PINMAP_READY 1

typedef enum {
    PIN_INPUT,
    PIN_OUTPUT
} PinDirection;

#define PORT_SHIFT  5

typedef enum {
    P0_0 = (0 << PORT_SHIFT | 0),
    P0_1 = (0 << PORT_SHIFT | 1),
    P0_2 = (0 << PORT_SHIFT | 2),
    P0_3 = (0 << PORT_SHIFT | 3),
    P0_4 = (0 << PORT_SHIFT | 4),
    P0_5 = (0 << PORT_SHIFT | 5),
    P0_6 = (0 << PORT_SHIFT | 6),
    P0_7 = (0 << PORT_SHIFT | 7),
    P0_8 = (0 << PORT_SHIFT | 8),
    P0_9 = (0 << PORT_SHIFT | 9),
    P0_10 = (0 << PORT_SHIFT | 10),
    P0_11 = (0 << PORT_SHIFT | 11),
    P0_12 = (0 << PORT_SHIFT | 12),
    P0_13 = (0 << PORT_SHIFT | 13),
    P0_14 = (0 << PORT_SHIFT | 14),
    P0_15 = (0 << PORT_SHIFT | 15),
    P0_16 = (0 << PORT_SHIFT | 16),
    P0_17 = (0 << PORT_SHIFT | 17),
    P0_18 = (0 << PORT_SHIFT | 18),
    P0_19 = (0 << PORT_SHIFT | 19),
    P0_20 = (0 << PORT_SHIFT | 20),
    P0_21 = (0 << PORT_SHIFT | 21),
    P0_22 = (0 << PORT_SHIFT | 22),
    P0_23 = (0 << PORT_SHIFT | 23),
    P0_24 = (0 << PORT_SHIFT | 24),
    P0_25 = (0 << PORT_SHIFT | 25),
    P0_26 = (0 << PORT_SHIFT | 26),
    P0_27 = (0 << PORT_SHIFT | 27),
    P0_28 = (0 << PORT_SHIFT | 28),
    P0_29 = (0 << PORT_SHIFT | 29),
    P0_30 = (0 << PORT_SHIFT | 30),
    P0_31 = (0 << PORT_SHIFT | 31),

    P1_0 = (1 << PORT_SHIFT | 0),
    P1_1 = (1 << PORT_SHIFT | 1),
    P1_2 = (1 << PORT_SHIFT | 2),
    P1_3 = (1 << PORT_SHIFT | 3),
    P1_4 = (1 << PORT_SHIFT | 4),
    P1_5 = (1 << PORT_SHIFT | 5),
    P1_6 = (1 << PORT_SHIFT | 6),
    P1_7 = (1 << PORT_SHIFT | 7),
    P1_8 = (1 << PORT_SHIFT | 8),
    P1_9 = (1 << PORT_SHIFT | 9),
    P1_10 = (1 << PORT_SHIFT | 10),
    P1_11 = (1 << PORT_SHIFT | 11),
    P1_12 = (1 << PORT_SHIFT | 12),
    P1_13 = (1 << PORT_SHIFT | 13),
    P1_14 = (1 << PORT_SHIFT | 14),
    P1_15 = (1 << PORT_SHIFT | 15),
    P1_16 = (1 << PORT_SHIFT | 16),
    P1_17 = (1 << PORT_SHIFT | 17),
    P1_18 = (1 << PORT_SHIFT | 18),
    P1_19 = (1 << PORT_SHIFT | 19),
    P1_20 = (1 << PORT_SHIFT | 20),
    P1_21 = (1 << PORT_SHIFT | 21),
    P1_22 = (1 << PORT_SHIFT | 22),
    P1_23 = (1 << PORT_SHIFT | 23),
    P1_24 = (1 << PORT_SHIFT | 24),
    P1_25 = (1 << PORT_SHIFT | 25),
    P1_26 = (1 << PORT_SHIFT | 26),
    P1_27 = (1 << PORT_SHIFT | 27),
    P1_28 = (1 << PORT_SHIFT | 28),
    P1_29 = (1 << PORT_SHIFT | 29),
    P1_30 = (1 << PORT_SHIFT | 30),
    P1_31 = (1 << PORT_SHIFT | 31),

    P2_0 = (2 << PORT_SHIFT | 0),
    P2_1 = (2 << PORT_SHIFT | 1),
    P2_2 = (2 << PORT_SHIFT | 2),
    P2_3 = (2 << PORT_SHIFT | 3),
    P2_4 = (2 << PORT_SHIFT | 4),
    P2_5 = (2 << PORT_SHIFT | 5),
    P2_6 = (2 << PORT_SHIFT | 6),
    P2_7 = (2 << PORT_SHIFT | 7),
    P2_8 = (2 << PORT_SHIFT | 8),
    P2_9 = (2 << PORT_SHIFT | 9),
    P2_10 = (2 << PORT_SHIFT | 10),
    P2_11 = (2 << PORT_SHIFT | 11),
    P2_12 = (2 << PORT_SHIFT | 12),
    P2_13 = (2 << PORT_SHIFT | 13),
    P2_14 = (2 << PORT_SHIFT | 14),
    P2_15 = (2 << PORT_SHIFT | 15),
    P2_16 = (2 << PORT_SHIFT | 16),
    P2_17 = (2 << PORT_SHIFT | 17),
    P2_18 = (2 << PORT_SHIFT | 18),
    P2_19 = (2 << PORT_SHIFT | 19),
    P2_20 = (2 << PORT_SHIFT | 20),
    P2_21 = (2 << PORT_SHIFT | 21),
    P2_22 = (2 << PORT_SHIFT | 22),
    P2_23 = (2 << PORT_SHIFT | 23),
    P2_24 = (2 << PORT_SHIFT | 24),
    P2_25 = (2 << PORT_SHIFT | 25),
    P2_26 = (2 << PORT_SHIFT | 26),
    P2_27 = (2 << PORT_SHIFT | 27),
    P2_28 = (2 << PORT_SHIFT | 28),
    P2_29 = (2 << PORT_SHIFT | 29),
    P2_30 = (2 << PORT_SHIFT | 30),
    P2_31 = (2 << PORT_SHIFT | 31),

    P3_0 = (3 << PORT_SHIFT | 0),
    P3_1 = (3 << PORT_SHIFT | 1),
    P3_2 = (3 << PORT_SHIFT | 2),
    P3_3 = (3 << PORT_SHIFT | 3),
    P3_4 = (3 << PORT_SHIFT | 4),
    P3_5 = (3 << PORT_SHIFT | 5),

    // mbed original LED naming
    LED1 = P0_1, // Unused pin
    LED_RED = LED1,
    // LED2 = P1_7,
    // LED3 = LED_RED,
    // LED4 = LED_RED,

    // Arduino Headers
    D0 = P1_24,
    D1 = P0_27,
    D2 = P0_15,
    D3 = P1_6,
    D4 = P1_7,
    D5 = P1_4,
    D6 = P1_10,
    D7 = P1_9,
    D8 = P1_8,
    D9 = P1_5,
    D10 = P1_1,
    D11 = P0_26,
    D12 = P1_3,
    D13 = P1_2,
    D14 = P1_21,
    D15 = P1_20,

    A0 = P0_16,
    A1 = P0_23,
    A2 = P0_0,
    A3 = P1_31,
    A4 = P0_13,
    A5 = P0_14,

    // Debug UART
    TE_DEBUG_RX         = P0_29,
    TE_DEBUG_TX         = P0_30,

    // Host UART (FC6)
    FC6_RX              = P1_13,
    FC6_TX              = P1_16,
    FC6_RTS             = P1_17,
    FC6_CTS             = P0_15,

    // Tectonic Edge UART
    TE_TX               = P1_20,
    TE_RX               = P1_21,
    TE_RTS              = P1_15,
    TE_CTS              = P1_9,

    // Cell
    GPIO_CELL_PWR_EN    = P0_0,
    GPIO_CELL_ON_OFF    = P1_5,
    CELL_RESETN         = P0_31,
    GPIO_PWRMON         = P1_8,
    GPIO_RING           = P0_21,
    GPIO_CELL_LED       = P1_0,
    USB0_VBUS           = P0_22,
    GPIO_DTR            = P1_23,
    FC2_RX              = P1_24,
    FC2_TX              = P1_25,
    FC2_CTS             = P1_26,
    FC2_RTS             = P1_27,
    FC7_TX              = P0_19,
    FC7_RX              = P0_27,

    // Tectonic Edge QSPI / HS-SPI
    TE_QSPI_IO0         = P0_26,
    TE_QSPI_IO1         = P1_3,
    TE_QSPI_CSN         = P1_1,
    TE_QSPI_CLK         = P1_2,

    // SPI
    TE_MISO             = P0_2,
    TE_MOSI             = P0_3,
    TE_CS               = P0_4,
    TE_SCLK             = P0_6,

    // I2C
    TE_SDA              = P0_13,
    TE_SCL              = P0_14,

    // SWD
    TE_SWO              = P0_10,
    TE_SWCLK            = P0_11,
    TE_SWDIO            = P0_12,

    // Miscellaneous I/O
    SWITCH1             = P0_5,
    TE_GPIO05           = P0_7,
    TE_GPIO03           = P0_8,
    TE_GPIO04           = P0_9,
    TE_GPIO02           = P0_16,
    TE_GPIO01           = P0_23,

    //Push buttons
    SW1 = SWITCH1,

    // Mbed I2C Pins configuration
    I2C_SCL = TE_SCL,
    I2C_SDA = TE_SDA,

    // Mbed SPI Pins configuration
    SPI_MOSI    = TE_QSPI_IO0,
    SPI_MISO    = TE_QSPI_IO1,
    SPI_SCK     = TE_QSPI_CLK,
    SPI_CS      = TE_QSPI_CSN,

    // Mbed onboard modem pins
    MDMTXD = FC2_TX,
    MDMRXD = FC2_RX,
    MDMCTS = FC2_CTS,
    // MDMDCD = NC,
    // MDMDSR = NC,
    MDMDTR = GPIO_DTR,
    MDMRTS = FC2_RTS,

    // Mbed USB Pins
    USBTX = P0_30,
    USBRX = P0_29,

    // Not connected
    NC = (int)0xFFFFFFFF
} PinName;


typedef enum {
    PullNone = 0,
    PullDown = 1,
    PullUp   = 2,
    PullDefault = PullNone
} PinMode;

#ifdef __cplusplus
}
#endif

#endif
