#ifndef __MACH_GPIO_U1_H
#define __MACH_GPIO_U1_H __FILE__

#if defined(CONFIG_MACH_U1_BD)

#define GPIO_XMMC0_CDn		EXYNOS4_GPK0(2)

#define GPIO_PS_ALS_SDA		EXYNOS4_GPK2(2)
#define GPIO_PS_ALS_SCL		EXYNOS4_GPK3(2)

#define GPIO_GYRO_INT		EXYNOS4_GPX0(0)
#define GPIO_GYRO_FIFOP_INT	EXYNOS4_GPX0(1)
#define GPIO_PS_ALS_INT		EXYNOS4_GPX0(2)

#define GPIO_BUCK1_EN_A		EXYNOS4_GPX0(5)
#define GPIO_BUCK1_EN_B		EXYNOS4_GPX0(6)
#define GPIO_BUCK2_EN		EXYNOS4_GPL0(0)
#define GPIO_PMIC_IRQ		EXYNOS4_GPX0(7)

#define GPIO_VOL_UP		EXYNOS4_GPX2(0)
#define GPIO_VOL_DOWN		EXYNOS4_GPX2(1)
#define GPIO_nPOWER		EXYNOS4_GPX2(7)
#define	GPIO_OK_KEY			EXYNOS4_GPX3(5)

#define VT_CAM_SDA_18V		EXYNOS4_GPC1(0)
#define VT_CAM_SCL_18V		EXYNOS4_GPC1(2)

#define CODEC_VT_SDA_18V	EXYNOS4_GPC1(3)
#define CODEC_VT_SCL_18V	EXYNOS4_GPC1(4)

#define GPIO_ISP_RESET		EXYNOS4_GPY3(7)
#define GPIO_FUEL_SDA		EXYNOS4_GPY4(0)
#define GPIO_FUEL_SCL		EXYNOS4_GPY4(1)
#define GPIO_FUEL_ALERT		EXYNOS4_GPX2(3)

#define GPIO_USB_SDA		EXYNOS4210_GPE1(0)
#define GPIO_USB_SCL		EXYNOS4210_GPE1(1)
#define GPIO_MASSMEM_EN		EXYNOS4_GPL1(1)
#define GPIO_MASSMEM_EN_LEVEL	0
#define GPIO_TSP_INT		EXYNOS4_GPX0(4)

#define GPIO_CAM_IO_EN		EXYNOS4210_GPE2(1)
#define GPIO_CAM_SENSOR_CORE	EXYNOS4210_GPE2(5)
#define GPIO_TSP_LDO_ON		EXYNOS4_GPL0(3)

#if !defined (CONFIG_MACH_C1_KDDI_REV00)
#define GPIO_USB_SEL		EXYNOS4_GPL0(6)
#endif

#define GPIO_UART_SEL		EXYNOS4_GPY4(7)

#define GPIO_3_TOUCH_SCL	EXYNOS4_GPK1(0)
#define GPIO_8M_AF_EN		EXYNOS4_GPK1(1)
#define GPIO_3_TOUCH_SDA	EXYNOS4_GPK1(2)
#define GPIO_3_TOUCH_INT	EXYNOS4_GPL0(5)

#define GPIO_VT_CAM_15V	EXYNOS4210_GPE2(2)

#define GPIO_CAM_MCLK		EXYNOS4210_GPJ1(3)

#define GPIO_CAM_VGA_nSTBY	EXYNOS4_GPL2(0)
#define GPIO_CAM_VGA_nRST	EXYNOS4_GPL2(1)

#define GPIO_DET_35		EXYNOS4_GPX3(2)
#define GPIO_DET_35_AF		0xF

#define GPIO_EAR_SEND_END	EXYNOS4_GPX3(6)
#define GPIO_EAR_SEND_END_AF	0xF

#define GPIO_GPS_PWR_EN		EXYNOS4210_GPE0(3)
#define GPIO_GPS_nRST		EXYNOS4210_GPE0(4)
#if defined (CONFIG_MACH_C1_KDDI_REV00)
#define GPIO_NFC_EN 		EXYNOS4_GPY3(1)
#define GPIO_NFC_FIRM 	EXYNOS4_GPY3(3)
#define GPIO_NFC_IRQ 		EXYNOS4_GPX3(3)
#define GPIO_NFC_SCL 		EXYNOS4_GPC0(2)
#define GPIO_NFC_SDA 	EXYNOS4_GPC0(0)
#endif
#if defined (CONFIG_MACH_C1_KDDI_REV00)
//Sajith
#define GPIO_TSP_SDA			EXYNOS4_GPA1(2)
#define GPIO_TSP_SCL			EXYNOS4_GPA1(3)

#define GPIO_OLED_DET		EXYNOS4_GPL0(7)
#define GPIO_LCD_EN			EXYNOS4_GPY4(3)
#define GPIO_MLCD_RST		EXYNOS4_GPY4(5)
#endif

#define GPIO_BT_RXD		EXYNOS4_GPA0(0)
#define GPIO_BT_RXD_AF		2

#define GPIO_BT_TXD		EXYNOS4_GPA0(1)
#define GPIO_BT_TXD_AF		2

#define GPIO_BT_CTS		EXYNOS4_GPA0(2)
#define GPIO_BT_CTS_AF		2

#define GPIO_BT_RTS		EXYNOS4_GPA0(3)
#define GPIO_BT_RTS_AF		2

#if !defined(CONFIG_MACH_U1_KOR_LGT) && !defined(CONFIG_MACH_C1_KDDI_REV00)
#define GPIO_GPS_RXD		EXYNOS4_GPA0(4)
#define GPIO_GPS_RXD_AF		2

#define GPIO_GPS_TXD		EXYNOS4_GPA0(5)
#define GPIO_GPS_TXD_AF		2

#define GPIO_GPS_CTS		EXYNOS4_GPA0(6)
#define GPIO_GPS_CTS_AF		2

#define GPIO_GPS_RTS		EXYNOS4_GPA0(7)
#define GPIO_GPS_RTS_AF		2
#endif

#define GPIO_2MIC_PWDN		EXYNOS4_GPL2(3)
#define GPIO_2MIC_RST		EXYNOS4_GPL2(4)
#define GPIO_2MIC_EN		EXYNOS4_GPL2(5)

#if defined(CONFIG_SMB328_CHARGER) &&  defined(CONFIG_MACH_C1_KDDI_REV00)
#define GPIO_CHG_EN		EXYNOS4_GPL2(2)
#define GPIO_CHG_ING_N		EXYNOS4_GPL2(4)
#if !defined(CONFIG_MACH_C1_KDDI_REV00)
#define GPIO_CHG_SDA		EXYNOS4_GPY0(4)
#define GPIO_CHG_SCL		EXYNOS4_GPY0(5)
#endif
#define GPIO_TA_nCONNECTED	EXYNOS4_GPL2(5)
#endif

#define GPIO_2MIC_SDA		EXYNOS4_GPC1(2)
#define GPIO_2MIC_SCL		EXYNOS4_GPC1(0)
/* GPIO's for SVC LED */
#define GPIO_SVC_LED_BLUE	EXYNOS4_GPA1(5)
#define GPIO_SVC_LED_RED	EXYNOS4_GPB(1)

#define GPIO_CAM_PCLK			EXYNOS4210_GPJ0(0)
#define GPIO_CAM_VSYNC			EXYNOS4210_GPJ0(1)
#define GPIO_CAM_HSYNC			EXYNOS4210_GPJ0(2)
#define GPIO_CAM_D0			EXYNOS4210_GPJ0(3)
#define GPIO_CAM_D1			EXYNOS4210_GPJ0(4)
#define GPIO_CAM_D2			EXYNOS4210_GPJ0(5)
#define GPIO_CAM_D3			EXYNOS4210_GPJ0(6)
#define GPIO_CAM_D4			EXYNOS4210_GPJ0(7)
#define GPIO_CAM_D5			EXYNOS4210_GPJ1(0)
#define GPIO_CAM_D6			EXYNOS4210_GPJ1(1)
#define GPIO_CAM_D7			EXYNOS4210_GPJ1(2)
#define GPIO_CP_DUMP_INT	EXYNOS4_GPX1(2)
#define GPIO_ISP_INT		EXYNOS4_GPX1(5)
#define GPIO_KEYPAD_LED_EN	EXYNOS4_GPB(5)

#ifdef CONFIG_USBHUB_USB3803
#define GPIO_USB_RESET_N	EXYNOS4210_GPE1(5)
#define GPIO_USB_BYPASS_N	EXYNOS4_GPX1(7)
#define GPIO_USB_CLOCK_EN       EXYNOS4_GPA1(4)
#define GPIO_USB_I2C_SDA        EXYNOS4_GPY1(1)
#define GPIO_USB_I2C_SCL        EXYNOS4_GPY1(0)
#endif /* CONFIG_USBHUB_USB3803 */
#define GPIO_WIMAX_USB_EN	EXYNOS4_GPB(4)

/*GPIOs for IDPRAM driver -Dhi*/
#define S5PV310_GPE0_0_MDM_WEn          EXYNOS4210_GPE0(0)
#define S5PV310_GPE0_1_MDM_CSn          EXYNOS4210_GPE0(1)
#define S5PV310_GPE0_2_MDM_Rn           EXYNOS4210_GPE0(2)
#define S5PV310_GPE0_3_MDM_IRQn         EXYNOS4210_GPE0(3)
#define S5PV310_GPE0_4_MDM_ADVN         EXYNOS4210_GPE0(4)

#define S5PV310_GPE3_0_MDM_DATA_0       EXYNOS4210_GPE3(0)
#define S5PV310_GPE3_1_MDM_DATA_1       EXYNOS4210_GPE3(1)
#define S5PV310_GPE3_2_MDM_DATA_2       EXYNOS4210_GPE3(2)
#define S5PV310_GPE3_3_MDM_DATA_3       EXYNOS4210_GPE3(3)
#define S5PV310_GPE3_4_MDM_DATA_4       EXYNOS4210_GPE3(4)
#define S5PV310_GPE3_5_MDM_DATA_5       EXYNOS4210_GPE3(5)
#define S5PV310_GPE3_6_MDM_DATA_6       EXYNOS4210_GPE3(6)
#define S5PV310_GPE3_7_MDM_DATA_7       EXYNOS4210_GPE3(7)

#define S5PV310_GPE4_0_MDM_DATA_8       EXYNOS4210_GPE4(0)
#define S5PV310_GPE4_1_MDM_DATA_9       EXYNOS4210_GPE4(1)
#define S5PV310_GPE4_2_MDM_DATA_10      EXYNOS4210_GPE4(2)
#define S5PV310_GPE4_3_MDM_DATA_11      EXYNOS4210_GPE4(3)
#define S5PV310_GPE4_4_MDM_DATA_12      EXYNOS4210_GPE4(4)
#define S5PV310_GPE4_5_MDM_DATA_13      EXYNOS4210_GPE4(5)
#define S5PV310_GPE4_6_MDM_DATA_14      EXYNOS4210_GPE4(6)
#define S5PV310_GPE4_7_MDM_DATA_15      EXYNOS4210_GPE4(7)

#define S5PV310_MDM_IF_SEL              2

#define GPIO_QSC_PHONE_ON               EXYNOS4_GPC1(1)
#define GPIO_QSC_PHONE_RST              EXYNOS4_GPX1(4)
#define GPIO_CP_REQ_RESET				EXYNOS4_GPY4(6)
#define GPIO_QSC_PHONE_ACTIVE           EXYNOS4_GPX1(6)
#define IRQ_QSC_PHONE_ACTIVE			GPIO_QSC_PHONE_ACTIVE
#define GPIO_C210_DPRAM_INT_N           EXYNOS4_GPX1(0)

#define GPIO_DPRAM_INT_CP_N             S5PV310_GPE0_3_MDM_IRQn

#define GPIO_PDA_ACTIVE				EXYNOS4_GPY4(2)
/*End*/
#define IRQ_PHONE_ACTIVE	IRQ_EINT14
#define IRQ_SUSPEND_REQUEST	IRQ_EINT11
#define IRQ_IPC_HOST_WAKEUP	IRQ_EINT9

#define GPIO_WLAN_EN		EXYNOS4_GPL1(2)
#define GPIO_WLAN_EN_AF		1

#define GPIO_BT_EN		EXYNOS4_GPL0(4)
#define GPIO_BT_nRST		EXYNOS4_GPL1(0)

#define GPIO_WLAN_HOST_WAKE	EXYNOS4_GPX2(5)
#define GPIO_WLAN_HOST_WAKE_AF	0xF

#define GPIO_BT_HOST_WAKE	EXYNOS4_GPX2(6)
#define GPIO_BT_HOST_WAKE_AF	0xF
#define IRQ_BT_HOST_WAKE	IRQ_EINT(22)

#define GPIO_BT_WAKE		EXYNOS4_GPX3(1)

#define GPIO_WLAN_SDIO_CLK      EXYNOS4_GPK2(0)
#define GPIO_WLAN_SDIO_CLK_AF   2

#define GPIO_WLAN_SDIO_CMD      EXYNOS4_GPK2(1)
#define GPIO_WLAN_SDIO_CMD_AF   2

#define GPIO_WLAN_SDIO_D0       EXYNOS4_GPK2(3)
#define GPIO_WLAN_SDIO_D0_AF    2

#define GPIO_WLAN_SDIO_D1       EXYNOS4_GPK2(4)
#define GPIO_WLAN_SDIO_D1_AF    2

#define GPIO_WLAN_SDIO_D2       EXYNOS4_GPK2(5)
#define GPIO_WLAN_SDIO_D2_AF    2

#define GPIO_WLAN_SDIO_D3       EXYNOS4_GPK2(6)
#define GPIO_WLAN_SDIO_D3_AF    2

#define GPIO_HW_REV0		EXYNOS4210_GPE1(0)
#define GPIO_HW_REV1		EXYNOS4210_GPE1(1)
#define GPIO_HW_REV2		EXYNOS4210_GPE1(2)
#define GPIO_HW_REV3		EXYNOS4210_GPE1(3)

#define GPIO_MHL_RST		EXYNOS4_GPF3(4)
#define GPIO_MHL_INT		EXYNOS4_GPF3(5)
#define GPIO_MHL_INT_AF		S3C_GPIO_SFN(0xF)
#define GPIO_MHL_WAKE_UP	EXYNOS4210_GPJ1(4)
#define	GPIO_MHL_WAKE_UP_AF	S3C_GPIO_SFN(0xF)
#define GPIO_MHL_SEL		EXYNOS4_GPL0(1)

#define GPIO_BOOT_MODE		EXYNOS4_GPX0(3)

#define GPIO_MSENSE_INT		EXYNOS4_GPX2(2)
#ifdef CONFIG_MACH_C1_NA_SPR_EPIC2_REV00
#define GPIO_SLIDE_INT		EXYNOS4_GPX2(4)
#else
#define GPIO_HDMI_EN		EXYNOS4_GPX2(4)
#endif
#define GPIO_HDMI_EN_REV07	EXYNOS4_GPL1(1)
#define GPIO_ACC_INT		EXYNOS4_GPX3(0)
#define GPIO_USB_OTG_EN		EXYNOS4_GPX3(3)
#define GPIO_HDMI_HPD           EXYNOS4_GPX3(7)

#define GPIO_UART_SEL1          EXYNOS4_GPB(0)
#define GPIO_MSENSOR_MHL_SDA_28V	EXYNOS4_GPD0(2)
#define	GPIO_MSENSOR_MHL_SDA_AF		0x3
#define GPIO_MSENSOR_MHL_SCL_28V	EXYNOS4_GPD0(3)
#define	GPIO_MSENSOR_MHL_SCL_AF		0x3
#define GPIO_MHL_SDA_18V		EXYNOS4_GPY3(0)
#define GPIO_MHL_SCL_18V		EXYNOS4_GPY3(2)

#define GPIO_AP_HDMI_SDA	GPIO_MSENSOR_MHL_SDA_28V
#define	GPIO_AP_HDMI_SDA_AF	GPIO_MSENSOR_MHL_SDA_AF
#define GPIO_AP_HDMI_SCL	GPIO_MSENSOR_MHL_SCL_28V
#define	GPIO_AP_HDMI_SCL_AF	GPIO_MSENSOR_MHL_SCL_AF
#define GPIO_AP_SDA_18V		GPIO_MHL_SDA_18V
#define GPIO_AP_SCL_18V		GPIO_MHL_SCL_18V

#define MHL_INT_IRQ		gpio_to_irq(GPIO_MHL_INT)
#define MHL_WAKEUP_IRQ		gpio_to_irq(GPIO_MHL_WAKE_UP)

#define GPIO_MIC_BIAS_EN	EXYNOS4210_GPE1(4)
#define GPIO_SUB_MIC_BIAS_EN	EXYNOS4210_GPE2(0)
#define GPIO_EAR_MIC_BIAS_EN	EXYNOS4210_GPE2(4)

#define GPIO_TDMB_EN            EXYNOS4_GPC0(1)
#define GPIO_TDMB_INT           EXYNOS4_GPB(4)
#define GPIO_TDMB_INT_AF        0xf
#ifdef CONFIG_FM_SI4709_MODULE
#define GPIO_FM_RST		EXYNOS4_GPB(0)
#define GPIO_FM_INT		EXYNOS4_GPB(1)
#define GPIO_FM_INT_REV07	EXYNOS4_GPX2(4)
#define GPIO_FM_SDA_28V		EXYNOS4_GPB(2)
#define GPIO_FM_SCL_28V		EXYNOS4_GPB(3)
#endif
#define GPIO_WIMAX_EN		EXYNOS4210_GPE1(7)
#define GPIO_WIMAX_RESET_N	EXYNOS4_GPA0(5)
#define GPIO_WIMAX_USB_EN	EXYNOS4_GPB(4)
#define GPIO_WIMAX_WAKEUP	EXYNOS4_GPX1(3)
#define	GPIO_WIMAX_IF_MODE0	EXYNOS4_GPY3(5)
#define GPIO_WIMAX_IF_MODE1	EXYNOS4_GPY3(6)
#define GPIO_WIMAX_CON0		EXYNOS4_GPL2(6)
#define GPIO_WIMAX_CON1		EXYNOS4_GPL2(7)
#define GPIO_WIMAX_CON2		EXYNOS4210_GPE2(3)
#define	GPIO_WIMAX_INT		EXYNOS4_GPX1(1)
#define GPIO_WIMAX_I2C_CON	EXYNOS4210_GPE1(6)
#define GPIO_CMC_SCL_18V	EXYNOS4_GPY0(0)
#define GPIO_CMC_SDA_18V	EXYNOS4_GPY0(1)
#define GPIO_WIMAX_DBGEN_28V	EXYNOS4_GPA0(4)

#ifdef CONFIG_MACH_C1_NA_SPR_EPIC2_REV00
#define GPIO_HALL_SW	EXYNOS4_GPX2(4)
#define GPIO_KEY_INT	EXYNOS4_GPX3(5)
#endif
#endif
#endif /* __MACH_GPIO_U1_H */
