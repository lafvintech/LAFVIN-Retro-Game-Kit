.. _component-list:

组件清单(OK,缺图片)
============================

套件组件总览
----------------------------

.. image:: ./img/components/all_components.jpg
   :alt: 套件所有组件合照
   :align: center
   :width: 800px

[占位符:需要所有组件的合照,展示套件中包含的所有14项组件]

组件清单表
----------------------------

以下是 LAFVIN Retro Game Kit 套件中包含的所有组件:

.. list-table::
   :header-rows: 1
   :widths: 10 40 15 35

   * - 序号
     - 组件名称
     - 数量
     - 说明
   * - 1
     - ESP32S3模块 (确认)
     - 1
     - 主控芯片,16MB Flash + 8MB PSRAM
   * - 2
     - LAFVIN TFCard Module (确认)
     - 1
     - TF 卡读取模块,用于存储游戏文件
   * - 3
     - LAFVIN Amplifier Module (确认)
     - 1
     - 音频输出模块,驱动扬声器
   * - 4
     - LAFVIN Retro Game Hub (确认)
     - 1
     - 专用扩展板,简化连接
   * - 5
     - 2.4 Inch TFT-SPI Screen (确认)
     - 1
     - 彩色显示屏,分辨率 320x240
   * - 6
     - Button(6x6mm) (确认)
     - 10
     - 游戏控制按键(方向键、功能键等)
   * - 7
     - Button(12x12mm) (确认)
     - 4
     - 面包板AB按键
   * - 8
     - Button Cap (确认)
     - 4
     - 大按钮的按键帽,提升手感
   * - 9
     - 830 面包板 (确认)
     - 2
     - 用于组装电路
   * - 10
     - Jumper Wires Box (确认)
     - 若干
     - 固定长度跳线,用于模块连接
   * - 11
     - 65 Jumper Wire (确认)
     - 若干
     - 灵活跳线,用于按键连接
   * - 12
     - Type C Cable (确认)
     - 1
     - 用于供电和固件烧录
   * - 13
     - 8Ω2W Speaker (确认)
     - 1
     - 音频输出设备
   * - 14
     - Memory Card (确认)
     - 1
     - 用于存储游戏 ROM 文件
   * - 15
     - Memory Card Reader (确认)
     - 1
     - 用于存储游戏 ROM 文件
   * - 16
     - M2x4mm Screw Set (确认)
     - 2
     - includes screws, pillars & nuts

主要组件详细说明
----------------------------

ESP32S3N16R8 主控模块
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

.. image:: ./img/components/esp32s3.png
   :align: center
   :width: 120px

**主要特性:**

- 芯片型号: ESP32-S3
- Flash 容量: 16MB
- PSRAM 容量: 8MB
- 双核处理器,主频高达 240MHz
- 支持 Wi-Fi 和 BLE 5.0
- 丰富的 GPIO 接口

**作用:** 作为游戏机的核心处理器,负责运行游戏模拟器、处理图形渲染、音频输出和用户输入。

LAFVIN TFCard 模块
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

.. image:: ./img/components/tfcard_module.jpg
   :align: center
   :width: 400px

[占位符:TFCard 模块图片]

**主要特性:**

- 支持标准 TF 卡(Micro SD 卡)
- 支持 FAT32 文件系统
- SPI 接口通信
- 支持热插拔

**作用:** 读取 TF 卡中存储的游戏 ROM 文件,为模拟器提供游戏数据。

LAFVIN 功放模块
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

.. image:: ./img/components/amplifier.jpg
   :align: center
   :width: 400px

[占位符:功放模块图片]

**主要特性:**

- 内置音频功放芯片
- 支持单声道输出
- 可调节音量
- 低功耗设计

**作用:** 放大音频信号并驱动扬声器,提供游戏音效和背景音乐输出。

2.4 英寸 TFT 显示屏
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

.. image:: ./img/components/tft_screen.jpg
   :align: center
   :width: 400px

[占位符:TFT 显示屏图片]

**主要特性:**

- 尺寸: 2.4 英寸
- 分辨率: 320x240 像素
- 彩色显示,支持 65K 色
- SPI 接口
- 可视角度大

**作用:** 显示游戏画面、菜单界面和系统信息。

LAFVIN Retro game 扩展底板
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

.. image:: ./img/components/extension_board.jpg
   :align: center
   :width: 400px

[占位符:扩展底板图片]

**主要特性:**

- 专为 Retro Game Kit 设计
- 预留标准接口
- 简化模块连接
- 提供稳定的电源分配

**作用:** 作为各个模块的连接枢纽,简化组装过程,提供稳定的电气连接。

按键组件
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

.. image:: img/components/button.png
   :align: center
   :width: 400px

[占位符:按键组件图片,包括小按钮和大按钮]

**小按钮 (6x6mm):**

- 数量: 10 个
- 用途: 用于面包板搭建方向键(上、下、左、右)、Menu、Option、Start、Select 等功能键
- 轻触式按键,手感清脆

**大按钮 (12x12mm):**

- 数量: 4 个
- 用途: 用于面包板搭建A、B按键
- 配有按键帽,提升操作手感

**作用:** 提供用户输入接口,控制游戏角色和系统菜单。

供电说明
----------------------------

.. note::
   本套件通过 **Type-C 接口** 供电,无需外部电池。

**供电方式:**

- 使用标准 Type-C 数据线连接到 ESP32S3 主控模块
- 推荐使用 5V/2A 或更高功率的 USB 电源适配器
- 也可以通过电脑 USB 接口供电(需确保供电充足)

**供电注意事项:**

.. warning::
   - 请使用质量可靠的 Type-C 数据线和电源适配器
   - 供电不足可能导致屏幕闪烁、音频异常或系统不稳定
   - 请勿在通电状态下插拔模块,以免损坏硬件

检查清单
----------------------------

收到套件后,请按照以下清单检查组件是否齐全:

.. tip::
   如发现组件缺失或损坏,请及时联系售后服务。

下一步
----------------------------

确认组件齐全后,您可以继续:

- :ref:`下载文件 <download_code>` - 下载代码和相关文件
- :ref:`组装教程 <assembly>` - 学习如何组装游戏机
- :ref:`TF 卡准备 <tfcard>` - 准备 TF 卡和游戏文件
- :ref:`固件烧录 <firmware>` - 烧录固件到 ESP32S3