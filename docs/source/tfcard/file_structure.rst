.. _tfcard-file-structure:

======================
文件夹结构和文件格式
======================

概述
====

首次将格式化好的 TF 卡插入游戏机时,系统会自动创建模拟器文件夹结构。您只需要将游戏文件放入对应的文件夹中即可。

.. note::
   系统会在首次启动时自动创建所需的文件夹,无需手动创建。

自动生成的文件夹结构
==================

TF 卡根目录结构
---------------

首次插入 TF 卡并开机后,系统会自动创建以下文件夹:

.. code-block:: text

   /
   ├── NES/              # Nintendo Entertainment System
   ├── SNES/             # Super Nintendo Entertainment System
   ├── GB/               # Game Boy
   ├── GBC/              # Game Boy Color
   ├── GW/               # Game & Watch
   ├── SG1000/           # Sega SG-1000
   ├── SMS/              # Sega Master System
   ├── MD/               # Sega Mega Drive / Genesis
   ├── GG/               # Sega Game Gear
   ├── COLECO/           # ColecoVision
   ├── PCE/              # PC Engine / TurboGrafx-16
   ├── LYNX/             # Atari Lynx
   └── DOOM/             # DOOM

文件夹说明
----------

每个文件夹对应一个游戏平台的模拟器:

.. list-table::
   :header-rows: 1
   :widths: 15 35 50

   * - 文件夹名称
     - 游戏平台
     - 说明
   * - NES
     - Nintendo Entertainment System
     - 任天堂红白机,1983 年发布
   * - SNES
     - Super Nintendo
     - 超级任天堂,1990 年发布
   * - GB
     - Game Boy
     - 任天堂 Game Boy,1989 年发布
   * - GBC
     - Game Boy Color
     - 任天堂 Game Boy Color,1998 年发布
   * - GW
     - Game & Watch
     - 任天堂 Game & Watch 系列
   * - SG1000
     - Sega SG-1000
     - 世嘉 SG-1000,1983 年发布
   * - SMS
     - Sega Master System
     - 世嘉 Master System,1985 年发布
   * - MD
     - Mega Drive / Genesis
     - 世嘉 Mega Drive(日本/欧洲)/ Genesis(美国),1988 年发布
   * - GG
     - Game Gear
     - 世嘉 Game Gear,1990 年发布
   * - COLECO
     - ColecoVision
     - ColecoVision,1982 年发布
   * - PCE
     - PC Engine / TurboGrafx-16
     - NEC PC Engine,1987 年发布
   * - LYNX
     - Atari Lynx
     - 雅达利 Lynx,1989 年发布
   * - DOOM
     - DOOM
     - 经典 FPS 游戏 DOOM

支持的文件格式
==============

各平台支持的 ROM 文件格式
-------------------------

.. list-table::
   :header-rows: 1
   :widths: 15 25 60

   * - 平台
     - 文件扩展名
     - 说明
   * - NES
     - .nes
     - Nintendo Entertainment System ROM 文件
   * - SNES
     - .smc, .sfc
     - Super Nintendo ROM 文件(.smc 和 .sfc 格式均支持)
   * - GB
     - .gb
     - Game Boy ROM 文件
   * - GBC
     - .gbc
     - Game Boy Color ROM 文件(也可以放 .gb 文件)
   * - GW
     - .gw
     - Game & Watch ROM 文件
   * - SG1000
     - .sg
     - Sega SG-1000 ROM 文件
   * - SMS
     - .sms
     - Sega Master System ROM 文件
   * - MD
     - .md, .bin, .gen
     - Mega Drive / Genesis ROM 文件(支持多种格式)
   * - GG
     - .gg
     - Game Gear ROM 文件
   * - COLECO
     - .col
     - ColecoVision ROM 文件
   * - PCE
     - .pce
     - PC Engine ROM 文件
   * - LYNX
     - .lnx
     - Atari Lynx ROM 文件
   * - DOOM
     - .wad
     - DOOM WAD 文件(游戏数据文件)

.. note::
   ROM 文件扩展名不区分大小写,例如 .NES 和 .nes 都可以识别。

文件命名建议
------------

为了更好地管理游戏文件,建议遵循以下命名规范:

- 使用英文或拼音命名,避免使用特殊字符
- 文件名不要过长(建议不超过 50 个字符)
- 可以在文件名中包含地区信息,如 ``(USA)``、``(Japan)``、``(Europe)``
- 示例: ``Super_Mario_Bros_3_(USA).nes``

.. tip::
   如果游戏名称包含中文,建议在文件名中使用拼音或英文,以确保兼容性。

准备游戏文件
============

步骤 1: 获取游戏文件
--------------------

.. warning::
   请确保您拥有游戏的合法使用权!请遵守当地法律法规,不要下载或使用盗版游戏文件。

您可以通过以下合法途径获取游戏文件:

1. **从实体卡带提取**: 使用专用设备从您拥有的游戏卡带中提取 ROM
2. **自制游戏**: 使用开源的自制游戏(Homebrew)
3. **公有领域游戏**: 使用已进入公有领域的游戏

步骤 2: 复制游戏文件到 TF 卡
----------------------------

1. 将 TF 卡通过读卡器连接到电脑
2. 打开 TF 卡,找到对应平台的文件夹
3. 将游戏 ROM 文件复制到对应的文件夹中

   例如:
   
   - NES 游戏文件放入 ``NES/`` 文件夹
   - Game Boy 游戏文件放入 ``GB/`` 文件夹
   - SNES 游戏文件放入 ``SNES/`` 文件夹

4. 安全弹出 TF 卡

.. tip::
   您可以在每个文件夹中创建子文件夹来分类管理游戏,例如按游戏类型或字母顺序分类。

步骤 3: 验证文件
----------------

复制完成后,建议检查:

- 文件是否完整复制(检查文件大小)
- 文件扩展名是否正确
- 文件名是否包含特殊字符

插入 TF 卡
==========

硬件连接
--------

将准备好的 TF 卡插入 LAFVIN TFCard 模块:

1. 确保游戏机处于关机状态
2. 找到 TFCard 模块上的 TF 卡插槽
3. 将 TF 卡金属触点朝下,轻轻推入插槽
4. 听到"咔哒"一声,表示 TF 卡已正确插入

.. image:: ../img/usage/tfcard_insert.jpg
   :alt: TF 卡插入示意图
   :align: center
   :width: 500px

[占位符:需要 TF 卡插入 TFCard 模块的照片]

.. warning::
   请勿在通电状态下插拔 TF 卡,可能导致数据损坏或硬件损坏!

取出 TF 卡
----------

如需取出 TF 卡:

1. 确保游戏机已关机
2. 轻轻按压 TF 卡,听到"咔哒"一声后松手
3. TF 卡会自动弹出,取出即可

验证 TF 卡识别
==============

首次使用检查
------------

插入 TF 卡并开机后,系统会:

1. 自动检测 TF 卡
2. 创建必要的文件夹结构(如果不存在)
3. 扫描游戏文件
4. 显示游戏列表

.. note::
   首次启动时,系统扫描游戏文件可能需要几秒到几十秒,具体时间取决于游戏数量。

检查游戏列表
------------

开机后,在主菜单中:

1. 使用方向键浏览不同的游戏平台
2. 进入某个平台,查看游戏列表
3. 如果看到您复制的游戏,说明 TF 卡工作正常

.. tip::
   如果某个平台文件夹中没有游戏文件,该平台可能不会显示在菜单中。

示例:完整的 TF 卡结构
=====================

以下是一个包含游戏文件的 TF 卡结构示例:

.. code-block:: text

   /
   ├── NES/
   │   ├── Action/
   │   │   ├── Super_Mario_Bros.nes
   │   │   ├── Contra.nes
   │   │   └── Mega_Man_2.nes
   │   ├── RPG/
   │   │   ├── Final_Fantasy.nes
   │   │   └── Dragon_Quest.nes
   │   └── Puzzle/
   │       └── Tetris.nes
   ├── SNES/
   │   ├── Super_Mario_World.smc
   │   ├── The_Legend_of_Zelda_ALTTP.smc
   │   └── Chrono_Trigger.smc
   ├── GB/
   │   ├── Pokemon_Red.gb
   │   ├── Tetris.gb
   │   └── Super_Mario_Land.gb
   ├── GBC/
   │   ├── Pokemon_Crystal.gbc
   │   └── The_Legend_of_Zelda_Links_Awakening_DX.gbc
   ├── MD/
   │   ├── Sonic_the_Hedgehog.md
   │   ├── Streets_of_Rage_2.md
   │   └── Phantasy_Star_IV.md
   └── DOOM/
       ├── DOOM.wad
       └── DOOM2.wad

常见问题
========

游戏文件不显示?
---------------

**可能原因**:

1. 文件扩展名不正确
2. 文件放在了错误的文件夹中
3. 文件已损坏
4. TF 卡未正确插入

**解决方法**:

1. 检查文件扩展名是否与平台匹配
2. 确认文件放在正确的文件夹中
3. 尝试重新下载或提取游戏文件
4. 重新插入 TF 卡

游戏无法运行?
-------------

**可能原因**:

1. ROM 文件已损坏
2. ROM 文件格式不兼容
3. 游戏文件不完整

**解决方法**:

1. 尝试其他版本的 ROM 文件
2. 检查 ROM 文件的 MD5 或 SHA1 校验值
3. 确保 ROM 文件完整下载

TF 卡读取速度慢?
----------------

**可能原因**:

1. TF 卡速度等级较低
2. TF 卡碎片化严重
3. 游戏文件过多

**解决方法**:

1. 使用 Class 10 或更高速度等级的 TF 卡
2. 重新格式化 TF 卡并重新复制文件
3. 减少不常玩的游戏数量

可以使用压缩文件吗?
------------------

.. note::
   目前系统不支持压缩格式(如 .zip、.7z、.rar)。所有游戏文件必须解压后使用。

如果您的游戏文件是压缩包:

1. 在电脑上解压文件
2. 将解压后的 ROM 文件复制到 TF 卡
3. 删除压缩包文件(节省空间)

下一步
======

TF 卡准备完成后,请继续阅读:

- :doc:`../firmware/firmware` - 了解如何烧录固件
- :doc:`../usage/usage` - 了解如何使用游戏机
- :doc:`../troubleshooting/troubleshooting` - 遇到问题时查看故障排除指南
