.. _emulators:

============
模拟器说明
============

模拟器概述
==========

LAFVIN Retro Game Kit 内置了多个游戏平台的模拟器,支持运行经典的复古游戏。每个模拟器都针对 ESP32S3 进行了优化,提供流畅的游戏体验。

支持的游戏平台
==============

系统支持以下 13 个游戏平台:

.. list-table::
   :header-rows: 1
   :widths: 25 35 40

   * - 平台名称
     - 英文名称
     - 说明
   * - 任天堂红白机
     - NES (Nintendo Entertainment System)
     - 8 位经典游戏机
   * - 超级任天堂
     - SNES (Super Nintendo)
     - 16 位游戏机
   * - Game Boy
     - GB (Game Boy)
     - 任天堂掌机
   * - Game Boy Color
     - GBC (Game Boy Color)
     - 彩色掌机
   * - Game & Watch
     - Game & Watch
     - 任天堂早期掌机
   * - 世嘉 SG-1000
     - SG-1000
     - 世嘉 8 位游戏机
   * - 世嘉 Master System
     - SMS (Sega Master System)
     - 世嘉 8 位游戏机
   * - 世嘉 MD/Genesis
     - MD/Genesis (Mega Drive)
     - 世嘉 16 位游戏机
   * - Game Gear
     - GG (Game Gear)
     - 世嘉彩色掌机
   * - Colecovision
     - Colecovision
     - 早期家用游戏机
   * - PC Engine
     - PCE (PC Engine)
     - NEC 16 位游戏机
   * - Atari Lynx
     - Lynx
     - Atari 彩色掌机
   * - DOOM
     - DOOM
     - 经典第一人称射击游戏

TF 卡文件夹结构
===============

游戏文件存储在 TF 卡的对应文件夹中。首次插入 TF 卡时,系统会自动创建以下文件夹结构:

.. code-block:: text

   /
   ├── NES/          # 任天堂红白机游戏
   ├── SNES/         # 超级任天堂游戏
   ├── GB/           # Game Boy 游戏
   ├── GBC/          # Game Boy Color 游戏
   ├── GW/           # Game & Watch 游戏
   ├── SG1000/       # SG-1000 游戏
   ├── SMS/          # Master System 游戏
   ├── MD/           # Mega Drive/Genesis 游戏
   ├── GG/           # Game Gear 游戏
   ├── COLECO/       # Colecovision 游戏
   ├── PCE/          # PC Engine 游戏
   ├── LYNX/         # Atari Lynx 游戏
   └── DOOM/         # DOOM WAD 文件

.. note::
   请将游戏文件放入对应的文件夹中,系统会自动识别并显示在游戏库中。

支持的文件格式
==============

各模拟器支持的 ROM 文件格式:

.. list-table::
   :header-rows: 1
   :widths: 20 30 50

   * - 平台
     - 文件格式
     - 说明
   * - NES
     - .nes
     - Nintendo Entertainment System ROM
   * - SNES
     - .smc, .sfc
     - Super Nintendo ROM
   * - GB
     - .gb
     - Game Boy ROM
   * - GBC
     - .gbc
     - Game Boy Color ROM
   * - Game & Watch
     - .gw
     - Game & Watch ROM
   * - SG-1000
     - .sg
     - SG-1000 ROM
   * - SMS
     - .sms
     - Sega Master System ROM
   * - MD/Genesis
     - .md, .bin, .gen
     - Mega Drive / Genesis ROM
   * - Game Gear
     - .gg
     - Game Gear ROM
   * - Colecovision
     - .col
     - Colecovision ROM
   * - PC Engine
     - .pce
     - PC Engine ROM
   * - Atari Lynx
     - .lnx
     - Atari Lynx ROM
   * - DOOM
     - .wad
     - DOOM WAD 文件

.. warning::
   请确保您拥有游戏文件的合法使用权。本产品不提供任何游戏 ROM 文件。

基本操作说明
============

启动游戏
--------

1. 确保 TF 卡已正确插入并包含游戏文件
2. 在主菜单中选择 **游戏库**
3. 选择游戏平台
4. 浏览并选择要玩的游戏
5. 按 A 键启动游戏

.. image:: ../img/usage/game_start.jpg
   :alt: 启动游戏界面
   :align: center
   :width: 600px

[占位符:需要游戏启动界面截图,显示游戏加载过程]

游戏中操作
----------

在游戏运行时:

- 使用 **方向键** 控制角色移动
- 使用 **A/B 键** 进行游戏操作
- 按 **Start 键** 暂停游戏
- 按 **Menu 键** 打开游戏菜单

退出游戏
--------

1. 按 **Menu 键** 打开游戏菜单
2. 选择 **返回主菜单**
3. 或长按 **Menu 键** 直接返回主菜单

.. tip::
   退出游戏前建议先保存进度,避免游戏进度丢失。

模拟器特定功能
==============

NES 模拟器
----------

- 支持 Mapper 0-255
- 支持 Zapper 光枪游戏(通过按键模拟)
- 支持 Game Genie 金手指代码

SNES 模拟器
-----------

- 支持 Mode 7 图形
- 支持 Super FX 芯片游戏
- 支持 SA-1 芯片游戏

Game Boy / GBC 模拟器
---------------------

- 支持 Game Boy 和 Game Boy Color 游戏
- 自动识别游戏类型
- 支持彩色调色板选择

MD/Genesis 模拟器
-----------------

- 支持 Mega Drive 和 Genesis 游戏
- 支持 32X 扩展(部分游戏)
- 支持 Sega CD 音频(部分游戏)

DOOM 模拟器
-----------

DOOM 模拟器支持运行 DOOM 及其 MOD:

- 支持 DOOM、DOOM II、Final DOOM
- 支持自定义 WAD 文件
- 详细说明请参考 :doc:`../advanced/doom_mods`

游戏存档
========

自动存档
--------

某些模拟器支持自动存档功能:

- 游戏会在特定时刻自动保存
- 存档文件保存在 TF 卡的 ``/SAVES/`` 文件夹中
- 下次启动游戏时会自动加载存档

手动存档
--------

在游戏中按 **Menu 键**,选择 **保存进度**:

1. 选择存档槽位(通常有 4 个槽位)
2. 按 A 键确认保存
3. 系统会显示保存成功提示

加载存档
--------

在游戏中按 **Menu 键**,选择 **加载进度**:

1. 选择要加载的存档槽位
2. 按 A 键确认加载
3. 游戏会从存档点继续

.. note::
   不是所有游戏都支持存档功能,具体取决于游戏本身和模拟器的支持情况。

模拟器设置
==========

每个模拟器都有独立的设置选项:

通用设置
--------

- **帧率显示**: 显示当前游戏帧率
- **音频同步**: 启用/禁用音频同步
- **视频滤镜**: 选择视频滤镜效果
- **纵横比**: 调整画面比例

高级设置
--------

更多高级设置选项请参考 :doc:`../advanced/emulator_config`

性能优化
========

如果游戏运行不流畅,可以尝试以下优化:

1. **降低音频质量**: 在模拟器设置中降低音频采样率
2. **禁用视频滤镜**: 关闭不必要的视频效果
3. **调整帧率限制**: 根据游戏调整帧率上限
4. **关闭帧率显示**: 减少 CPU 负担

.. tip::
   大部分游戏都能流畅运行,只有少数复杂游戏可能需要优化设置。

常见问题
========

游戏无法启动
------------

**可能原因**:

- ROM 文件格式不正确
- ROM 文件已损坏
- 模拟器不支持该游戏

**解决方法**:

1. 检查文件格式是否正确
2. 尝试重新下载 ROM 文件
3. 查看模拟器兼容性列表

游戏运行缓慢
------------

**可能原因**:

- 游戏对硬件要求较高
- 启用了过多的视频效果

**解决方法**:

1. 参考上面的性能优化建议
2. 尝试降低游戏速度倍率
3. 关闭不必要的功能

存档无法保存
------------

**可能原因**:

- TF 卡空间不足
- TF 卡写保护
- 游戏不支持存档

**解决方法**:

1. 检查 TF 卡剩余空间
2. 确认 TF 卡没有写保护
3. 查看游戏是否支持存档功能

.. note::
   如果遇到其他问题,请参考 :doc:`../troubleshooting/troubleshooting` 章节。
