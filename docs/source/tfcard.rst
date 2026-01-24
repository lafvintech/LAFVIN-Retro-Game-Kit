.. _tfcard:

=====================
TF 卡准备(ok,缺图片)
=====================

LAFVIN Retro Game Kit 使用 TF 卡(也称为 MicroSD 卡)来存储游戏文件。TF 卡通过 LAFVIN TFCard 模块读取,为游戏机提供大容量的游戏存储空间。

套件附带一张1GB的SD卡(你也可以使用自己的内存卡)

.. tip::
   实际可存储的游戏数量取决于游戏文件的大小。早期平台(如 NES、GB)的游戏文件较小,而后期平台(如 SNES、MD)的游戏文件较大。

准备步骤
========
在使用 TF 卡之前,您需要完成以下步骤:

Format SD card
^^^^^^^^^^^^^^^^^^
Before starting the tutorial, we need to create a drive letter for the blank SD 
card and format it. This step requires a card reader and SD card. Please prepare 
them in advance. Below we will guide you to do it on different computer systems. 
You can choose the guide that matches your computer. 

**Windows**

1. Insert the SD card into the card reader, then insert the card reader into the 
computer. In the Windows search box, enter "Disk Management" and select "Create 
and format hard disk partitions".

.. image:: img/other/format1.png

2. In the new pop-up window, find an unallocated volume close to 1G in size.

.. image:: img/other/format2.png

3. Click to select the volume, right-click and select "New Simple Volume".

.. image:: img/other/format3.png

4. Click Next.

.. image:: img/other/format4.png

.. image:: img/other/format5.png

5. You can choose the drive letter on the right, or you can choose the default. By 
default, just click Next.

.. image:: img/other/format6.png

6. File system is FAT(or FAT32). The Allocation unit size is 16K, and the Volume 
label can be set to any name. After setting, click Next.(注意,如果你的卡大于2G,推荐使用FAT32格式化)

.. image:: img/other/format7.png

7. Click Finish. Wait for the SD card initialization to complete.

.. image:: img/other/format8.png

8. At this point, you can see the SD card in This PC.

.. image:: img/other/format9.png

**MAC**

1. Insert the SD card into the card reader, then insert the card reader into the 
computer. Some computers will prompt the following information, please click to 
ignore it.

.. image:: img/other/format_mac1.png

2. Find "Disk Utility" in the MAC system and click to open it.

.. image:: img/other/format_mac2.png

3. Select "Generic MassStorageClass Media", note that its size is about 1G. Please 
do not choose wrong item. Click "Erase".

.. image:: img/other/format_mac3.png

4. Select the configuration as shown in the figure below, and then click "Erase".

.. image:: img/other/format_mac4.png

5. Wait for the formatting to complete. When finished, it will look like the picture 
below. At this point, you can see a new disk on the desktop named "SD".

.. image:: img/other/format_mac5.png

将游戏文件导入SD卡
^^^^^^^^^^^^^^^^^^
1. 使用读卡器打开SD卡,你可以将之前下载解压的压缩包文件,打开其中的SDCardFiles文件夹,并将所有文件复制到SD卡根目录

.. image:: path

[这里放下载到本地文件夹中的SD卡文件]

.. note:: 我们已经将相关的文件夹结构都整理好了,你只需要将自己的rom文件添加到对应平台的文件夹就可以运行


常见问题
========

TF 卡无法识别怎么办?
--------------------

如果游戏机无法识别 TF 卡,请检查:

1. TF 卡是否正确插入 TFCard 模块
2. TF 卡是否格式化为 FAT32 文件系统
3. TF 卡是否有物理损坏
4. TFCard 模块与 ESP32S3 的连接是否正确

详细的故障排除方法请参考 :doc:`Appendix/Troubleshooting/troubleshooting` 。

游戏文件从哪里获取?
----------------------

.. note::
   用户需要自行准备合法的游戏文件。请确保您拥有游戏的合法使用权。

您可以:

- 从您拥有的游戏卡带中提取 ROM 文件
- 使用自制游戏(Homebrew)
- 使用开源游戏

出于版权尊重，本设备预装了开源的游戏和测试固件。如果您想获取更多游戏，推荐访问 itch.io Retro区 或 PDROMS 下载合法的 Homebrew 游戏。
