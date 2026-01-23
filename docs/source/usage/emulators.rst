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
     - 支持文件格式
   * - 任天堂红白机
     - NES (Nintendo Entertainment System)
     - 8 位经典游戏机
     - .nes
   * - 超级任天堂
     - SNES (Super Nintendo)
     - 16 位游戏机
     - .sfc
   * - Game Boy
     - GB (Game Boy)
     - 任天堂掌机
     - .gb
   * - Game Boy Color
     - GBC (Game Boy Color)
     - 彩色掌机
     - .gbc
   * - Game & Watch
     - Game & Watch
     - 任天堂早期掌机
     - .gw
   * - 世嘉 Master System
     - SMS (Sega Master System)
     - 世嘉 8 位游戏机
   * - Game Gear
     - GG (Game Gear)
     - 世嘉彩色掌机
     - .gg
   * - 世嘉 MD/Genesis
     - MD/Genesis (Mega Drive)
     - 世嘉 16 位游戏机
     - .md, .bin
   * - Colecovision
     - Colecovision
     - 早期家用游戏机
     - .col
   * - PC Engine
     - PCE (PC Engine)
     - NEC 16 位游戏机
     - .pce
   * - Atari Lynx
     - Lynx
     - Atari 彩色掌机
     - .lnx
   * - DOOM
     - DOOM
     - 经典第一人称射击游戏
     - .wad
   * - MSX
     - MSX
     - MSX个人电脑
     - .rom

TF 卡文件夹结构
===============

游戏文件存储在 TF 卡的对应文件夹中。在SD卡的章节可以将下载的文件夹复制进去内存卡

.. code-block:: text

   /
   ├── nes/          # 任天堂红白机游戏
   ├── snes/         # 超级任天堂游戏
   ├── gb/           # Game Boy 游戏
   ├── gbc/          # Game Boy Color 游戏
   ├── gw/           # Game & Watch 游戏
   ├── sms/          # Master System 游戏
   ├── gg/           # Game Gear 游戏
   ├── md/           # Mega Drive/Genesis 游戏
   ├── col/          # Colecovision 游戏
   ├── pce/          # PC Engine 游戏
   ├── lnx/          # Atari Lynx 游戏
   ├── doom/         # DOOM WAD 文件
   └── msx/          # MSX 游戏

.. note::
   请将游戏文件放入对应的文件夹中,系统会自动识别并显示在游戏库中。

.. warning::
   请确保您拥有游戏文件的合法使用权。本产品只提供开源游戏 ROM 文件。

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

游戏存档
========

手动存档
--------

在游戏中按 **Menu 键**,选择 **SAVE & Continue**:

1. 选择存档槽位(通常有 4 个槽位)
2. 按 A 键确认保存
3. 系统会显示保存成功提示

加载存档
--------

在游戏中按 **Menu 键**,选择 **Load Game**:

1. 选择要加载的存档槽位
2. 按 A 键确认加载
3. 游戏会从存档点继续

.. note::
   不是所有游戏都支持存档功能,具体取决于游戏本身和模拟器的支持情况。

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
