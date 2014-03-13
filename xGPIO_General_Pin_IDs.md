xGPIO document
======

xGPIO interrupt number config   {#xGPIO_Config_md}
================

aaaa
-----------
这个宏是提供给用户的，用户根据自己使用的GPIO中断情况来配置这个宏。
在CoX规范中，它是强制的，其形式 就是一个固定的宏名称：\ref xGPIO_INT_NUMBER

|xGPIO General Pin ID    |       CoX      |     all series         |
|-----------------------:|:--------------:|:-----------------------|
|xGPIO_INT_NUMBER        |    Mandatory   |  xGPIO_INT_NUMBER      |



xGPIO General Pin ID           {#xGPIO_General_Pin_IDs_md}
===========================

这组宏定义在CoX中是强制的，在每个系列中都必须实现这样一组宏。其强制的形式为xGPIO_PIN_n。
对于每个系列这个n的大小可以不同。
CoX 支持了以下的系列，这个参数在各个系列的实现情况如下表所示：

表格一
----------

|  xGPIO General Pin ID    |  CoX     | LPC17xx          |STM32F1xx         |NUC1xx/NUC2xx/NUC122/NUC123|Mini51/M051|Freescale       |Holtek            |
|:------------------------:|---------:|:-------------:   |:----------:      |:----------:      |:----------:      |:-----------     :|:-----------:     |
|  xGPIO_PIN_0             |Mandatory | xGPIO_PIN_0      |xGPIO_PIN_0       |xGPIO_PIN_0       |xGPIO_PIN_0       |xGPIO_PIN_0       |xGPIO_PIN_0       |
|  xGPIO_PIN_1             |          | xGPIO_PIN_1      |xGPIO_PIN_1       |xGPIO_PIN_1       |xGPIO_PIN_1       |xGPIO_PIN_1       |xGPIO_PIN_1       |
|    ...                   |          |   ...            |...               |...               |...               |...               |...               |
|                          |          | xGPIO_PIN_30     |xGPIO_PIN_14      |xGPIO_PIN_14      |xGPIO_PIN_6       |xGPIO_PIN_30      |xGPIO_PIN_14      |
|  xGPIO_PIN_n             |          | **xGPIO_PIN_31** | **xGPIO_PIN_15** | **xGPIO_PIN_15** | **xGPIO_PIN_7**  | **xGPIO_PIN_31** | **xGPIO_PIN_15** |


表格二
----------

|xGPIO General Pin ID | xGPIO_PIN_n|
|:------:|:------:|
|CoX  |Mandatory|
|LPC17xx| xGPIO_PIN_0<br>...<br> **xGPIO_PIN_31** |
|STM32F1xx|xGPIO_PIN_0<br>...<br> **xGPIO_PIN_15** |
|NUVOTON|xGPIO_PIN_0<br>...<br> **xGPIO_PIN_15** |
|Freescale|xGPIO_PIN_0<br>...<br> **xGPIO_PIN_31** |
|Holtek|xGPIO_PIN_0<br>...<br> **xGPIO_PIN_15** |

表格三
------------

|xGPIO General Pin ID | xGPIO_PIN_0|....|xGPIO_PIN_n|
|:------:|:------:|:------:|:------:|
|CoX  |Mandatory| | |
|LPC17xx| xGPIO_PIN_0|...| **xGPIO_PIN_31** |
|STM32F1xx|xGPIO_PIN_0|...| **xGPIO_PIN_15** |
|NUVOTON|xGPIO_PIN_0|...| **xGPIO_PIN_15** |
|Freescale|xGPIO_PIN_0|...| **xGPIO_PIN_31** |
|Holtek|xGPIO_PIN_0|...| **xGPIO_PIN_15** |

xGPIO Dir Mode  {#xGPIO_Dir_Mode_md}
========

这组宏用来表示 GPIO方向的模式，CoX抽出了以下5种：输入、输出、准双端、开漏输出、作为外设管脚
不一定所有的芯片都具备这5种功能，以下表格列举了五种模式在各个系列的实现情况：

|  xGPIO Dir Mode       |       CoX       | LPC17xx|STM32F1xx|M051 |Mini51 |NUC1xx |NUC122 |NUC123 |NUC2xx |KLx    |HT32F125x| HT32F175x| 
|:---------------------:|:---------------:|:------:|:-------:|:---:|:-----:|:-----:|:-----:|:-----:|:-----:|:-----:|:-------:|:--------:|
|  xGPIO_DIR_MODE_IN    |    Mandatory    |    **Y**   |    **Y**    | **Y**   |   **Y**   |   **Y**   |   **Y**   |   **Y**   |   **Y**   |   **Y**   |   **Y**     |   **Y**     |
|  xGPIO_DIR_MODE_OUT   |    Mandatory    |    **Y**   |    **Y**    | **Y**   |   **Y**   |   **Y**   |   **Y**   |   **Y**   |   **Y**   |   **Y**   |   **Y**     |   **Y**     |
|  xGPIO_DIR_MODE_HW    |    Mandatory    |    *N*   |    **Y**    | *N*   |   *N*   |   **Y**   |   **Y**   |   **Y**   |   **Y**   |   *N*   |   **Y**     |   **Y**     |
|  xGPIO_DIR_MODE_QB    |  Non-Mandatory  |    *N*   |    **Y**    | **Y**   |   **Y**   |   **Y**   |   **Y**   |   **Y**   |   **Y**   |   *N*   |   *N*     |   *N*     |
|  xGPIO_DIR_MODE_OD    |  Non-Mandatory  |    **Y**   |    **Y**    | **Y**   |   **Y**   |   **Y**   |   **Y**   |   **Y**   |   **Y**   |   *N*   |   **Y**     |   **Y**     |

>\note 对于强制参数，有的系列是No，也就是没有这个功能时，我们一般空实现一个。

xGPIO Int Type  {#xGPIO_Int_Type_md}
===========
|  xGPIO Int Type       |       CoX      | LPC17xx |
|-----------------------|----------------|---------|
|  xGPIO_FALLING_EDGE   |    Mandatory   |  **Y**  |
|  xGPIO_RISING_EDGE    |    Mandatory   |  **Y**  |
|  xGPIO_LOW_LEVEL      |    Mandatory   |   *N*   |
|  xGPIO_HIGH_LEVEL     |    Mandatory   |   *N*   |
|  xGPIO_BOTH_LEVEL     |  Non-Mandatory |   *N*   |
|  xGPIO_BOTH_EDGES     |  Non-Mandatory |  **Y**  |




xGPIO Pad Config Strength {#xGPIO_Pad_Config_Strength_md}
=============


