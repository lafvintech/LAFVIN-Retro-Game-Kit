.. _doom-mods:

===========
DOOM 模组
===========

本章节介绍如何使用 LAFVIN Retro Game Kit 的 DOOM 模组功能,添加自定义 WAD 文件,体验更多 DOOM 内容。

DOOM 模组概述
=============

LAFVIN Retro Game Kit 内置了 DOOM 模拟器,支持运行原版 DOOM 以及各种社区制作的 DOOM 模组(MOD)。通过添加自定义 WAD 文件,您可以体验数千个由玩家社区创作的关卡、游戏模式和完全改造的游戏。

.. note::
   DOOM 是 id Software 开发的经典第一人称射击游戏。本系统使用开源的 DOOM 引擎实现。

什么是 WAD 文件
===============

WAD (Where's All the Data) 文件是 DOOM 游戏的数据文件格式,包含游戏的所有资源:

- **IWAD (Internal WAD)**: 完整的游戏数据文件,如 DOOM、DOOM II 的主文件
- **PWAD (Patch WAD)**: 补丁或模组文件,用于修改或扩展游戏内容

WAD 文件类型
------------

.. list-table::
   :header-rows: 1
   :widths: 30 70

   * - 类型
     - 说明
   * - IWAD
     - 完整游戏文件(如 doom.wad, doom2.wad)
   * - PWAD
     - 模组文件(新关卡、材质、音效等)
   * - TC (Total Conversion)
     - 完全改造模组(全新的游戏体验)

支持的 DOOM 版本
=================

系统支持以下 DOOM 游戏版本:

.. list-table::
   :header-rows: 1
   :widths: 30 40 30

   * - 游戏
     - IWAD 文件名
     - 说明
   * - DOOM (Shareware)
     - doom1.wad
     - 免费版本,包含第一章
   * - The Ultimate DOOM
     - doom.wad
     - 完整版,包含 4 章
   * - DOOM II
     - doom2.wad
     - DOOM 续作
   * - Final DOOM: TNT
     - tnt.wad
     - Final DOOM 扩展包
   * - Final DOOM: Plutonia
     - plutonia.wad
     - Final DOOM 扩展包
   * - FreeDoom
     - freedoom1.wad, freedoom2.wad
     - 开源免费替代版本

.. tip::
   如果您没有原版 DOOM 游戏,可以使用免费的 FreeDoom 作为替代。

添加 WAD 文件
=============

准备 WAD 文件
-------------

1. **获取 WAD 文件**
   
   - 从合法渠道购买原版 DOOM 游戏
   - 下载免费的 FreeDoom
   - 从 DOOM 社区网站下载模组(如 Doomworld、idgames Archive)

2. **检查文件格式**
   
   - 确保文件扩展名为 `.wad`
   - 文件名使用英文和数字,避免特殊字符

.. warning::
   请确保您拥有 WAD 文件的合法使用权。未经授权使用商业游戏文件可能违反版权法。

将 WAD 文件复制到 TF 卡
-----------------------

1. 将 TF 卡从游戏机中取出
2. 将 TF 卡插入电脑的读卡器
3. 打开 TF 卡,找到 `DOOM` 文件夹
4. 将 WAD 文件复制到 `DOOM` 文件夹中

文件夹结构示例:

.. code-block:: text

   /DOOM/
   ├── doom.wad              # IWAD: The Ultimate DOOM
   ├── doom2.wad             # IWAD: DOOM II
   ├── freedoom1.wad         # IWAD: FreeDoom Phase 1
   ├── freedoom2.wad         # IWAD: FreeDoom Phase 2
   ├── btsx_e1.wad           # PWAD: Back to Saturn X Episode 1
   ├── valiant.wad           # PWAD: Valiant
   └── ancient_aliens.wad    # PWAD: Ancient Aliens

.. note::
   IWAD 文件是必需的。PWAD 模组需要配合 IWAD 文件使用。

运行 DOOM 游戏
==============

启动 DOOM
---------

1. 将 TF 卡插回游戏机
2. 开机后进入主菜单
3. 选择 **DOOM** 图标
4. 系统会自动检测 DOOM 文件夹中的 WAD 文件

选择 WAD 文件
-------------

如果 DOOM 文件夹中有多个 WAD 文件:

1. 系统会显示 WAD 文件列表
2. 使用方向键选择要运行的 WAD 文件
3. 按 **A** 键确认启动

.. image:: ../img/usage/doom_wad_list.jpg
   :alt: DOOM WAD 文件列表
   :align: center
   :width: 600px

[占位符:需要 DOOM WAD 文件选择界面的截图]

加载 PWAD 模组
--------------

要运行 PWAD 模组:

1. 选择基础 IWAD 文件(如 doom2.wad)
2. 系统会询问是否加载 PWAD
3. 选择要加载的 PWAD 文件
4. 按 **Start** 键开始游戏

.. note::
   某些 PWAD 需要特定的 IWAD 才能运行。请查看模组说明。

DOOM 游戏控制
=============

基本操作
--------

.. list-table::
   :header-rows: 1
   :widths: 30 70

   * - 按键
     - 功能
   * - 方向键
     - 前进/后退/左转/右转
   * - A 键
     - 开火
   * - B 键
     - 使用/开门/激活开关
   * - Start 键
     - 暂停菜单
   * - Select 键
     - 切换武器
   * - Menu 键
     - 快速菜单

高级操作
--------

.. list-table::
   :header-rows: 1
   :widths: 30 70

   * - 按键组合
     - 功能
   * - Select + 上/下
     - 快速切换武器
   * - B 键(长按)
     - 奔跑
   * - Menu + A
     - 快速保存
   * - Menu + B
     - 快速加载

.. tip::
   在设置中可以自定义 DOOM 的按键映射,包括启用"自动奔跑"等选项。

推荐的 DOOM 模组
================

新手友好模组
------------

以下模组适合初次体验 DOOM 模组的玩家:

.. list-table::
   :header-rows: 1
   :widths: 30 70

   * - 模组名称
     - 说明
   * - FreeDoom
     - 完全免费的 DOOM 替代品,适合入门
   * - DOOM: The Way id Did
     - 原版风格的新关卡
   * - Eviternity
     - 高质量的 32 关卡包

经典模组
--------

DOOM 社区的经典作品:

.. list-table::
   :header-rows: 1
   :widths: 30 70

   * - 模组名称
     - 说明
   * - Alien Vendetta
     - 经典的 32 关卡包
   * - Scythe 1 & 2
     - 快节奏的关卡设计
   * - Hell Revealed 1 & 2
     - 高难度挑战

完全改造模组
------------

这些模组提供全新的游戏体验:

.. list-table::
   :header-rows: 1
   :widths: 30 70

   * - 模组名称
     - 说明
   * - Brutal DOOM
     - 增强版 DOOM,更血腥的战斗
   * - Castlevania: Simon's Destiny
     - 恶魔城主题的 DOOM 模组
   * - Adventures of Square
     - 独特的方块主角冒险

.. note::
   某些大型模组可能对性能有较高要求。如果遇到卡顿,请尝试调整设置或使用较小的模组。

DOOM 设置选项
=============

画面设置
--------

在 DOOM 游戏中按 **Menu** 键,选择 **Options** > **Display**:

- **分辨率**: 调整游戏分辨率
- **全屏/窗口**: 切换显示模式
- **视野角度 (FOV)**: 调整视野范围(70-120 度)
- **亮度**: 调整画面亮度

音频设置
--------

选择 **Options** > **Sound**:

- **音效音量**: 调整游戏音效音量
- **音乐音量**: 调整背景音乐音量
- **音乐格式**: 选择 MIDI 或 OPL 音乐

游戏设置
--------

选择 **Options** > **Gameplay**:

- **难度**: 选择游戏难度(I'm Too Young to Die ~ Nightmare)
- **自动瞄准**: 启用或禁用垂直自动瞄准
- **自由视角**: 启用鼠标视角(如果支持)
- **永久奔跑**: 启用后默认为奔跑状态

问题排查
========

WAD 文件无法识别
----------------

**症状**: 系统无法识别或加载 WAD 文件

**解决方法**:

1. 检查文件扩展名是否为 `.wad`(小写)
2. 确认文件没有损坏(尝试在电脑上验证)
3. 检查文件名是否包含特殊字符
4. 确保文件放在正确的 `DOOM` 文件夹中

PWAD 模组无法运行
-----------------

**症状**: PWAD 模组加载后游戏崩溃或显示错误

**解决方法**:

1. 检查 PWAD 是否需要特定的 IWAD
2. 确认 PWAD 文件完整且未损坏
3. 尝试只加载 IWAD,不加载 PWAD
4. 查看模组说明文件,确认兼容性

游戏运行缓慢
------------

**症状**: DOOM 游戏帧率低或卡顿

**解决方法**:

1. 降低游戏分辨率
2. 禁用某些视觉效果
3. 尝试使用较小的模组
4. 检查 TF 卡读取速度(建议使用 Class 10 或更高)

.. warning::
   某些大型 TC 模组可能超出系统性能限制。

获取更多模组
============

推荐的模组资源网站
------------------

- **Doomworld**: https://www.doomworld.com/
- **idgames Archive**: https://www.doomworld.com/idgames/
- **ModDB**: https://www.moddb.com/games/doom
- **ZDoom Forums**: https://forum.zdoom.org/

.. note::
   下载模组前请阅读模组说明,确认系统兼容性和所需的 IWAD。

模组安装指南
------------

大多数模组的安装步骤:

1. 下载模组的 `.wad` 文件
2. 阅读模组附带的说明文件(通常是 `.txt` 文件)
3. 确认所需的 IWAD 版本
4. 将 `.wad` 文件复制到 TF 卡的 `DOOM` 文件夹
5. 在游戏中选择对应的 IWAD 和 PWAD

相关章节
========

- :doc:`emulator_config` - 模拟器配置说明
- :ref:`TF 卡文件结构 <tfcard>` - TF 卡准备
- :ref:`故障排除 <troubleshooting>` - 常见问题解决

.. tip::
   DOOM 社区非常活跃,每年都有大量优秀的新模组发布。定期访问社区网站可以发现更多精彩内容!
