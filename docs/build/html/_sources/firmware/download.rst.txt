.. _firmware-download:

================
下载固件
================

固件下载地址
============

LAFVIN Retro Game Kit 使用开源固件,您可以从以下渠道获取最新版本的固件文件:

官方下载链接
------------

.. note::
   [占位符:需要提供固件下载链接]

   - GitHub Release: ``https://github.com/[项目地址]/releases``
   - 官方网站: ``https://www.lafvin.com/[产品页面]``
   - 百度网盘: ``[链接地址]`` 提取码: ``[提取码]``

固件版本信息
============

当前固件版本
------------

.. list-table::
   :header-rows: 1
   :widths: 20 20 60

   * - 版本号
     - 发布日期
     - 主要特性
   * - v1.0.0
     - 2024-01-XX
     - - 支持 13 个游戏平台模拟器
       - 支持 TF 卡文件管理
       - 支持多语言界面(英语、德语、法语)
       - 支持音量、亮度、速度调节

.. note::
   [占位符:需要更新实际的版本号和发布日期]

版本历史
--------

**v1.0.0** (2024-01-XX)

- 初始版本发布
- 支持的模拟器:

  - NES (Nintendo Entertainment System)
  - SNES (Super Nintendo)
  - GB (Game Boy)
  - GBC (Game Boy Color)
  - Game & Watch
  - SG-1000
  - SMS (Sega Master System)
  - MD/Genesis (Mega Drive)
  - GG (Game Gear)
  - Colecovision
  - PC Engine
  - Lynx (Atari Lynx)
  - DOOM

固件文件说明
============

固件包内容
----------

下载的固件包通常包含以下文件:

.. code-block:: text

   retro-game-kit-firmware-v1.0.0/
   ├── firmware.bin              # 主固件文件
   ├── bootloader.bin            # 引导加载程序(可选)
   ├── partition-table.bin       # 分区表(可选)
   ├── README.txt                # 说明文件
   └── flash_instructions.txt    # 烧录说明

.. note::
   根据固件版本不同,文件内容可能有所差异。请以实际下载的文件为准。

固件文件类型
------------

.. list-table::
   :header-rows: 1
   :widths: 30 70

   * - 文件名
     - 说明
   * - firmware.bin
     - 主固件文件,包含所有游戏模拟器和系统功能
   * - bootloader.bin
     - ESP32S3 引导加载程序,通常已预装在芯片中
   * - partition-table.bin
     - Flash 分区表,定义存储空间的分配方式

文件大小参考
------------

- **firmware.bin**: 约 8-12 MB
- **bootloader.bin**: 约 24 KB
- **partition-table.bin**: 约 3 KB

.. warning::
   请确保下载的固件文件完整且未损坏。如果文件大小明显异常,请重新下载。

下载步骤
========

方法一:从 GitHub 下载
----------------------

1. 访问项目的 GitHub Release 页面
2. 找到最新版本的发布
3. 在 Assets 部分找到固件文件
4. 点击下载 ``.zip`` 或 ``.bin`` 文件
5. 解压缩文件(如果是压缩包)

方法二:从官方网站下载
----------------------

1. 访问 LAFVIN 官方网站
2. 进入 Retro Game Kit 产品页面
3. 找到"固件下载"或"资源下载"部分
4. 点击下载链接
5. 保存文件到本地

方法三:从网盘下载
------------------

1. 访问提供的网盘链接
2. 输入提取码
3. 下载固件文件
4. 保存到本地并解压缩

.. tip::
   建议将固件文件保存到容易找到的位置,例如桌面或专门的文件夹,方便后续烧录使用。

验证下载文件
============

校验文件完整性
--------------

为确保下载的固件文件完整且未被篡改,可以验证文件的 MD5 或 SHA256 校验值:

**Windows 系统**:

.. code-block:: powershell

   # 计算 MD5
   certutil -hashfile firmware.bin MD5

   # 计算 SHA256
   certutil -hashfile firmware.bin SHA256

**macOS/Linux 系统**:

.. code-block:: bash

   # 计算 MD5
   md5sum firmware.bin

   # 计算 SHA256
   sha256sum firmware.bin

.. note::
   [占位符:需要提供官方固件文件的校验值]

   官方 MD5: ``[MD5值]``
   
   官方 SHA256: ``[SHA256值]``

检查文件大小
------------

确认下载的 ``firmware.bin`` 文件大小在合理范围内(通常 8-12 MB)。如果文件过小(如只有几 KB),可能下载不完整,需要重新下载。

下一步
======

下载完成后,请继续阅读 :doc:`flash_tool` 了解如何使用烧录工具将固件写入 ESP32S3。

常见问题
========

下载速度慢怎么办?
------------------

- 尝试使用网盘下载
- 使用下载工具(如 IDM、迅雷)加速
- 选择网络状况较好的时间段下载

下载的文件无法解压?
--------------------

- 确认下载完整,检查文件大小
- 尝试使用不同的解压软件(7-Zip、WinRAR)
- 重新下载文件

找不到固件文件?
----------------

- 检查产品包装或说明书中的下载链接
- 联系 LAFVIN 技术支持获取下载地址
- 查看产品官方论坛或社区

.. tip::
   如果您在下载过程中遇到问题,可以联系 LAFVIN 技术支持获取帮助。
