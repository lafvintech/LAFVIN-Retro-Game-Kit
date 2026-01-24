.. _firmware:

==================
固件烧录(OK缺图片)
==================

LAFVIN Retro Game Kit 使用开源固件,需要用户将固件烧录到 ESP32S3 主控模块才能正常工作。本章节将指导您完成固件的下载、烧录和验证过程。

.. note::
   固件烧录是一次性操作,除非需要更新固件版本,否则无需重复烧录。

在烧录之前需要先安装CP210X的驱动,可以参考这个章节 :ref:`install_driver` 

Windows 系统固件烧录
====================

**如果你是 Windows 系统,你可以根据下面的教程来烧录固件到 ESP32S3**

1. Double-click to open Flash Download Tools, then select the options as shown below:

.. figure:: img/firmware/flashtool1.png
   :width: 60%

2. Follow these steps to upload the firmware:

A. Click the “Select File” button to choose your downloaded firmware file (.img format)
    
B. In the address input box after the bin file selection box, enter 0 or 0x0 (this means the firmware will be downloaded to the starting position of the development board’s memory)
    
C. Select the COM port corresponding to ESP32-S3 from the port selection dropdown menu (you can check it in Windows Device Manager)
    
D. Set the baud rate (we use 115200 here)
    
E. Click the “START” button to begin downloading the firmware to the ESP32-C6 development board

.. image:: img/firmware/flashtool2.png

下载完成后,按下开发板上的 RST 按钮。开发板将自动重启并进入模拟器选择界面。

.. _macos_firmware:

MacOS 系统固件烧录
==================

**如果你是 MacOS 用户,你可以参考下面的教程**

步骤 1: 准备固件文件
--------------------

1. 确保已经下载和解压固件到本地

2. We have stored the bin files in the Firmware folder

.. image:: 项目在macos下文件夹的图片

3. We need to prepare a Type-C to USB-A data cable to connect your Mac computer and the development board

4. 使用打开`Flash Tool <https://espressif.github.io/esp-launchpad/>`_  (这个网站是乐鑫官方的在线烧录工具)

.. image:: img/firmware/mac1.png

5. Click the Connect button at the top, and a window will pop up on the left side to select your device and connect

.. image:: img/firmware/mac2.png

6. After the connection is complete, you can see that the Connect button changes to Disconnect, indicating successful connection. We click the DIY button

.. image:: img/firmware/mac3.png

7. Fill in 0 in the Flash Address field, and select Firmware in the Selected File section

.. image:: img/firmware/mac4.png

.. image:: img/firmware/mac5.png

8. After selection is complete, click the Program button to start flashing

.. image:: img/firmware/mac5-1.png

.. image:: img/firmware/mac6.png

9.  After flashing is complete, click the Reset Device button in the upper right corner to restart the device, and you will see the screen display normally

.. image:: img/firmware/mac7.png

.. image:: img/firmware/mac8.png