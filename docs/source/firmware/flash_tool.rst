.. _firmware-flash-tool:

====================
使用烧录工具
====================

本章节介绍如何使用烧录工具将固件写入 ESP32S3 主控模块。我们提供两种烧录方法:使用 esptool 命令行工具(适合所有操作系统)和使用 ESP Flash Download Tool 图形界面工具(仅 Windows)。

方法一:使用 esptool (推荐)
===========================

esptool 是 Espressif 官方提供的命令行烧录工具,支持 Windows、macOS 和 Linux 系统。

安装 esptool
------------

**使用 pip 安装** (推荐):

.. code-block:: bash

   pip install esptool

**验证安装**:

.. code-block:: bash

   esptool.py version

.. note::
   如果您的系统没有安装 Python,请先安装 Python 3.7 或更高版本。

连接 ESP32S3
------------

1. 使用 Type-C 数据线将 ESP32S3 主控模块连接到电脑
2. 确保使用的是支持数据传输的线缆(不能只是充电线)
3. 连接后,ESP32S3 上的电源指示灯应该亮起

.. image:: ../img/firmware/connect_esp32s3.jpg
   :alt: 连接 ESP32S3 到电脑
   :align: center
   :width: 600px

[占位符:需要 ESP32S3 通过 Type-C 线连接到电脑的图片]

.. warning::
   请使用质量可靠的 Type-C 数据线,劣质线缆可能导致烧录失败或数据传输错误!


查找 COM 端口
-------------

**Windows 系统**:

1. 打开"设备管理器"
2. 展开"端口(COM 和 LPT)"
3. 找到类似"USB-SERIAL CH340 (COM3)"的设备
4. 记下端口号(如 COM3)

.. image:: ../img/firmware/windows_device_manager.jpg
   :alt: Windows 设备管理器
   :align: center
   :width: 500px

[占位符:需要 Windows 设备管理器显示 COM 端口的截图]

**macOS 系统**:

.. code-block:: bash

   ls /dev/cu.*

通常显示为 ``/dev/cu.usbserial-XXXX`` 或 ``/dev/cu.wchusbserial-XXXX``

**Linux 系统**:

.. code-block:: bash

   ls /dev/ttyUSB*

通常显示为 ``/dev/ttyUSB0`` 或 ``/dev/ttyUSB1``

.. tip::
   如果找不到 COM 端口,可能需要安装 CH340 驱动程序。请参考 :doc:`troubleshooting` 章节。

烧录固件
--------

**基本烧录命令**:

.. code-block:: bash

   esptool.py --chip esp32s3 --port COM3 --baud 921600 write_flash 0x0 firmware.bin

**参数说明**:

.. list-table::
   :header-rows: 1
   :widths: 25 75

   * - 参数
     - 说明
   * - ``--chip esp32s3``
     - 指定芯片型号为 ESP32S3
   * - ``--port COM3``
     - 指定 COM 端口(根据实际情况修改)
   * - ``--baud 921600``
     - 设置波特率为 921600(可选:115200、460800、921600)
   * - ``write_flash``
     - 执行写入 Flash 操作
   * - ``0x0``
     - 烧录起始地址
   * - ``firmware.bin``
     - 固件文件路径

**完整烧录命令示例** (包含所有文件):

.. code-block:: bash

   esptool.py --chip esp32s3 --port COM3 --baud 921600 \
     --before default_reset --after hard_reset \
     write_flash -z --flash_mode dio --flash_freq 80m --flash_size 16MB \
     0x0 bootloader.bin \
     0x8000 partition-table.bin \
     0x10000 firmware.bin

.. note::
   如果固件包只包含单个 ``firmware.bin`` 文件,使用基本烧录命令即可。

**macOS/Linux 端口示例**:

.. code-block:: bash

   # macOS
   esptool.py --chip esp32s3 --port /dev/cu.usbserial-XXXX --baud 921600 write_flash 0x0 firmware.bin

   # Linux
   esptool.py --chip esp32s3 --port /dev/ttyUSB0 --baud 921600 write_flash 0x0 firmware.bin

烧录过程
--------

执行烧录命令后,您将看到类似以下的输出:

.. code-block:: text

   esptool.py v4.6
   Serial port COM3
   Connecting....
   Chip is ESP32-S3 (revision v0.1)
   Features: WiFi, BLE
   Crystal is 40MHz
   MAC: xx:xx:xx:xx:xx:xx
   Uploading stub...
   Running stub...
   Stub running...
   Configuring flash size...
   Flash will be erased from 0x00000000 to 0x00xxxxxx...
   Compressed 12345678 bytes to 6789012...
   Writing at 0x00000000... (10 %)
   Writing at 0x00010000... (20 %)
   ...
   Writing at 0x00100000... (100 %)
   Wrote 12345678 bytes (6789012 compressed) at 0x00000000 in 123.4 seconds
   Hash of data verified.
   
   Leaving...
   Hard resetting via RTS pin...

.. tip::
   烧录过程通常需要 1-3 分钟,请耐心等待。不要在烧录过程中断开连接或关闭程序!

方法二:使用 ESP Flash Download Tool (仅 Windows)
================================================

ESP Flash Download Tool 是 Espressif 提供的图形界面烧录工具,操作更直观,适合不熟悉命令行的用户。

下载工具
--------

1. 访问 Espressif 官方网站
2. 下载 Flash Download Tools
3. 解压缩到本地文件夹

.. note::
   [占位符:需要提供 Flash Download Tool 下载链接]
   
   下载地址: ``https://www.espressif.com/en/support/download/other-tools``

启动工具
--------

1. 运行 ``flash_download_tool_x.x.x.exe``
2. 选择芯片类型: **ESP32-S3**
3. 选择工作模式: **Developer Mode**
4. 点击 **OK**

.. image:: ../img/firmware/flash_tool_start.jpg
   :alt: Flash Download Tool 启动界面
   :align: center
   :width: 400px

[占位符:需要 Flash Download Tool 启动界面的截图]

配置烧录参数
------------

在主界面中配置以下参数:

**1. 添加固件文件**:

.. list-table::
   :header-rows: 1
   :widths: 10 40 30 20

   * - 勾选
     - 文件路径
     - 烧录地址
     - 说明
   * - ☑
     - ``bootloader.bin``
     - ``0x0``
     - 引导加载程序(可选)
   * - ☑
     - ``partition-table.bin``
     - ``0x8000``
     - 分区表(可选)
   * - ☑
     - ``firmware.bin``
     - ``0x10000``
     - 主固件文件

.. note::
   如果只有单个 ``firmware.bin`` 文件,烧录地址设置为 ``0x0``

**2. SPI 配置**:

.. list-table::
   :header-rows: 1
   :widths: 30 70

   * - 参数
     - 设置值
   * - SPI SPEED
     - 80 MHz
   * - SPI MODE
     - DIO
   * - FLASH SIZE
     - 16 MB

**3. COM 端口设置**:

- **COM**: 选择正确的 COM 端口(如 COM3)
- **BAUD**: 选择波特率 921600

.. image:: ../img/firmware/flash_tool_config.jpg
   :alt: Flash Download Tool 配置界面
   :align: center
   :width: 700px

[占位符:需要 Flash Download Tool 配置完成的截图,显示文件路径、地址和参数设置]

开始烧录
--------

1. 确认所有参数配置正确
2. 点击 **START** 按钮开始烧录
3. 等待烧录完成

烧录进度显示:

- 绿色进度条显示烧录进度
- 底部状态栏显示当前操作
- 完成后显示 **FINISH** 绿色提示

.. image:: ../img/firmware/flash_tool_progress.jpg
   :alt: Flash Download Tool 烧录进度
   :align: center
   :width: 700px

[占位符:需要 Flash Download Tool 烧录过程的截图,显示进度条]

.. warning::
   烧录过程中请勿断开 USB 连接或关闭程序,否则可能导致固件损坏!

验证烧录成功
============

方法一:查看烧录工具输出
------------------------

**esptool 成功标志**:

- 显示 ``Hash of data verified.``
- 显示 ``Leaving...``
- 显示 ``Hard resetting via RTS pin...``
- 没有错误信息

**Flash Download Tool 成功标志**:

- 显示绿色 **FINISH** 提示
- 进度条达到 100%
- 状态栏显示 ``完成``

方法二:测试设备启动
--------------------

1. 断开 ESP32S3 与电脑的连接
2. 将 ESP32S3 安装到游戏机上
3. 连接 TFT 屏幕和其他组件
4. 通过 Type-C 供电
5. 观察屏幕是否显示启动画面或菜单

.. note::
   如果屏幕显示正常,说明固件烧录成功。如果没有显示或显示异常,请参考 :doc:`troubleshooting` 章节。

方法三:读取固件信息
--------------------

使用 esptool 读取芯片信息:

.. code-block:: bash

   esptool.py --port COM3 flash_id

输出应显示 Flash 大小为 16MB,说明固件已正确写入。

常见烧录参数说明
================

波特率选择
----------

.. list-table::
   :header-rows: 1
   :widths: 20 40 40

   * - 波特率
     - 烧录速度
     - 稳定性
   * - 115200
     - 慢(约 5-8 分钟)
     - 最稳定,推荐用于排查问题
   * - 460800
     - 中等(约 2-3 分钟)
     - 较稳定
   * - 921600
     - 快(约 1-2 分钟)
     - 稳定,推荐日常使用

.. tip::
   如果烧录过程中出现错误,可以尝试降低波特率到 115200 重试。

Flash 模式说明
--------------

.. list-table::
   :header-rows: 1
   :widths: 20 80

   * - 模式
     - 说明
   * - QIO
     - Quad I/O,最快速度,需要 4 条数据线
   * - QOUT
     - Quad Output,快速读取
   * - DIO
     - Dual I/O,推荐使用,兼容性好
   * - DOUT
     - Dual Output,兼容性最好

.. note::
   ESP32S3N16R8 推荐使用 **DIO** 模式,兼容性和性能平衡最佳。

烧录地址说明
------------

.. list-table::
   :header-rows: 1
   :widths: 30 20 50

   * - 文件
     - 地址
     - 说明
   * - bootloader.bin
     - 0x0
     - 引导加载程序,位于 Flash 起始位置
   * - partition-table.bin
     - 0x8000
     - 分区表,定义 Flash 布局
   * - firmware.bin
     - 0x10000
     - 主固件,应用程序代码
   * - 单文件固件
     - 0x0
     - 包含所有内容的完整固件

.. warning::
   烧录地址必须正确,否则设备无法启动!如果不确定,请使用固件包提供的说明。

下一步
======

固件烧录成功后,请继续:

1. 完成硬件组装(如果尚未完成):参考 :doc:`../assembly`
2. 准备 TF 卡:参考 :doc:`../tfcard/tfcard`
3. 开始使用游戏机:参考 :doc:`../usage/usage`

如果烧录过程中遇到问题,请查看 :doc:`troubleshooting` 章节。
