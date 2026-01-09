# 设计文档

## 概述

本设计文档描述了 LAFVIN Retro Game Kit 中文文档系统的整体架构和实现方案。文档系统基于 Sphinx 和 ReadTheDocs,使用 reStructuredText 格式编写,提供完整的产品介绍、组装指南、固件烧录、使用说明和故障排除等内容。

## 架构

### 文档结构

```
docs/
├── source/
│   ├── index.rst                    # 首页和导航
│   ├── conf.py                      # Sphinx 配置文件
│   ├── about_this_kit.rst           # 产品介绍
│   ├── component_list.rst           # 组件清单
│   ├── assembly.rst                 # 组装教程(单文件)
│   ├── tfcard/                      # TF卡准备目录
│   │   ├── tfcard.rst               # TF卡主页
│   │   ├── format.rst               # 格式化TF卡
│   │   └── file_structure.rst       # 文件夹结构和格式
│   ├── firmware/                    # 固件烧录目录
│   │   ├── firmware.rst             # 固件主页
│   │   ├── download.rst             # 下载固件
│   │   ├── flash_tool.rst           # 烧录工具使用
│   │   └── troubleshooting.rst      # 烧录问题排查
│   ├── usage/                       # 使用说明目录
│   │   ├── usage.rst                # 使用主页
│   │   ├── power_on.rst             # 开机和供电
│   │   ├── buttons.rst              # 按键说明
│   │   ├── menu.rst                 # 菜单系统
│   │   ├── settings.rst             # 设置调节
│   │   └── emulators.rst            # 模拟器说明
│   ├── advanced/                    # 高级功能目录
│   │   ├── advanced.rst             # 高级功能主页
│   │   ├── emulator_config.rst      # 模拟器配置
│   │   └── doom_mods.rst            # DOOM 模组
│   ├── troubleshooting/             # 故障排除目录
│   │   ├── troubleshooting.rst      # 故障排除主页
│   │   ├── hardware.rst             # 硬件问题
│   │   └── software.rst             # 软件问题
│   ├── img/                         # 图片目录
│   │   ├── product/                 # 产品图片
│   │   ├── components/              # 组件图片
│   │   ├── assembly/                # 组装图片
│   │   ├── firmware/                # 固件相关图片
│   │   └── usage/                   # 使用说明图片
│   ├── _static/                     # 静态资源
│   │   └── Logov2.png               # Logo
│   └── _templates/                  # 模板
│       └── layout.html              # 自定义布局
├── Makefile                         # Linux/Mac 构建脚本
├── make.bat                         # Windows 构建脚本
└── requirements.txt                 # Python 依赖
```

### 技术栈

- **文档生成器**: Sphinx 7.x
- **文档格式**: reStructuredText (.rst)
- **主题**: sphinx_rtd_theme (ReadTheDocs 主题)
- **扩展**:
  - `myst_parser`: 支持 Markdown 格式(可选)
  - `sphinx_copybutton`: 代码块复制按钮
  - `sphinxcontrib.video`: 视频嵌入支持
- **托管平台**: ReadTheDocs

## 组件和接口

### 1. 首页 (index.rst)

**功能**: 提供文档导航和快速开始指南

**内容结构**:
```restructuredtext
LAFVIN Retro Game Kit 中文文档
================================

欢迎使用 LAFVIN Retro Game Kit!

快速开始
--------
1. 查看 :ref:`组件清单 <component-list>` 确认套件完整性
2. 按照 :ref:`组装教程 <assembly>` 组装硬件
3. 准备 :ref:`TF卡 <tfcard>` 并格式化
4. 烧录 :ref:`固件 <firmware>` 到 ESP32S3
5. 阅读 :ref:`使用说明 <usage>` 开始使用

.. toctree::
   :maxdepth: 2
   :caption: 目录

   about_this_kit
   component_list
   assembly
   tfcard/tfcard
   firmware/firmware
   usage/usage
   advanced/advanced
   troubleshooting/troubleshooting
```

### 2. 产品介绍 (about_this_kit.rst)

**功能**: 介绍产品特性和规格

**内容结构**:
- 产品主图
- 产品简介
- 主要特性(主控、显示、音频、存储)
- 支持的游戏平台列表
- 应用场景
- 技术规格表

**验收标准映射**: 需求 1.1-1.6

### 3. 组件清单 (component_list.rst)

**功能**: 列出所有套件组件

**内容结构**:
- 组件大合照
- 组件清单表格(14项组件)
- 每个主要组件的说明和作用
- 电源供电说明

**验收标准映射**: 需求 2.1-2.5

### 4. 组装教程 (assembly.rst)

**功能**: 指导硬件组装

**内容结构**:
- 组装概述和注意事项
- 所需工具
- 步骤1:面包板准备
- 步骤2:模块安装(主控、TFCard模块、功放模块、TFT屏幕)
- 步骤3:按键安装(10个小按钮和4个大按钮)
- 步骤4:跳线连接和引脚对应
- 步骤5:组装完成检查清单

**每个步骤包含**:
- 步骤说明文字
- 图片占位符(带描述)
- 注意事项(使用 `.. warning::` 或 `.. note::`)
- 引脚连接表格

**验收标准映射**: 需求 3.1-3.7

### 5. TF卡准备模块 (tfcard/)

**功能**: 指导用户准备TF卡

**文件组织**:
- `tfcard.rst`: TF卡概述
- `format.rst`: 格式化TF卡(FAT32)
- `file_structure.rst`: 文件夹结构和支持的文件格式

**file_structure.rst 内容**:
```restructuredtext
文件夹结构和文件格式
====================

自动生成的文件夹
----------------

首次将 TF 卡插入游戏机时,系统会自动创建以下文件夹:

.. code-block:: text

   /
   ├── NES/          # Nintendo Entertainment System
   ├── SNES/         # Super Nintendo
   ├── GB/           # Game Boy
   ├── GBC/          # Game Boy Color
   ├── SMS/          # Sega Master System
   ├── GG/           # Game Gear
   ├── MD/           # Mega Drive / Genesis
   ├── PCE/          # PC Engine
   ├── LYNX/         # Atari Lynx
   └── DOOM/         # DOOM

支持的文件格式
--------------

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
   * - SMS
     - .sms
     - Sega Master System ROM
   * - GG
     - .gg
     - Game Gear ROM
   * - MD
     - .md, .bin
     - Mega Drive / Genesis ROM
   * - PCE
     - .pce
     - PC Engine ROM
   * - LYNX
     - .lnx
     - Atari Lynx ROM
   * - DOOM
     - .wad
     - DOOM WAD 文件

.. note::
   用户需自行准备游戏文件并放入对应的文件夹中。
```

**验收标准映射**: 需求 4.1-4.6

### 6. 固件烧录模块 (firmware/)

**功能**: 指导用户烧录固件

**文件组织**:
- `firmware.rst`: 固件烧录概述
- `download.rst`: 固件下载链接和说明
- `flash_tool.rst`: 烧录工具使用(esptool / Flash Download Tool)
- `troubleshooting.rst`: 烧录问题排查

**flash_tool.rst 内容结构**:
- 工具下载链接
- 连接ESP32S3到电脑(Type-C线)
- 选择COM端口
- 烧录参数设置
- 烧录步骤(带截图占位符)
- 验证烧录成功

**验收标准映射**: 需求 5.1-5.7

### 7. 使用说明模块 (usage/)

**功能**: 指导用户使用游戏机

**文件组织**:
- `usage.rst`: 使用概述
- `power_on.rst`: 开机和供电
- `buttons.rst`: 按键说明
- `menu.rst`: 菜单系统
- `settings.rst`: 设置调节(音量、亮度、速度、语言)
- `emulators.rst`: 模拟器说明

**buttons.rst 内容**:
```restructuredtext
按键说明
========

按键布局
--------

.. image:: ../img/usage/buttons_layout.jpg
   :alt: 按键布局图
   :align: center

[占位符:需要按键布局图]

按键功能
--------

游戏控制按键
~~~~~~~~~~~~

.. list-table::
   :header-rows: 1
   :widths: 20 80

   * - 按键
     - 功能
   * - 方向键(上下左右)
     - 控制游戏角色移动或菜单选择
   * - A 键
     - 确认/跳跃/攻击
   * - B 键
     - 取消/返回/特殊功能
   * - Start 键
     - 开始游戏/暂停
   * - Select 键
     - 选择/切换

系统功能按键
~~~~~~~~~~~~

.. list-table::
   :header-rows: 1
   :widths: 20 80

   * - 按键
     - 功能
   * - Menu 键
     - 打开系统菜单
   * - Option 键
     - 打开选项设置
```

**验收标准映射**: 需求 7.1-7.8

### 8. 高级功能模块 (advanced/)

**功能**: 高级功能和自定义选项

**文件组织**:
- `advanced.rst`: 高级功能概述
- `emulator_config.rst`: 模拟器配置
- `doom_mods.rst`: DOOM 模组使用

**验收标准映射**: 需求 12.1-12.5

### 9. 故障排除模块 (troubleshooting/)

**功能**: 常见问题解决方案

**文件组织**:
- `troubleshooting.rst`: 故障排除概述
- `hardware.rst`: 硬件问题
- `software.rst`: 软件问题

**hardware.rst 内容结构**:
```restructuredtext
硬件问题排查
============

屏幕不显示
----------

**症状**: 开机后屏幕无显示或显示异常

**可能原因和解决方法**:

1. 检查供电
   
   - 确认 Type-C 线已正确连接
   - 尝试更换 USB 电源适配器(建议 5V/2A)
   - 检查 ESP32S3 上的电源指示灯是否亮起

2. 检查屏幕连接
   
   - 确认 TFT 屏幕排线已正确插入
   - 检查排线是否有损坏
   - 重新插拔屏幕排线

3. 检查固件
   
   - 重新烧录固件
   - 确认固件版本正确

.. warning::
   请勿在通电状态下插拔模块,可能导致硬件损坏!
```

**验收标准映射**: 需求 8.1-8.4

## 数据模型

### 文档元数据

每个 RST 文件包含以下元数据:

```restructuredtext
.. _unique-reference-id:

=============
文档标题
=============

.. meta::
   :description: 文档描述
   :keywords: 关键词1, 关键词2
```

### 图片占位符格式

```restructuredtext
.. image:: ./img/category/placeholder.jpg
   :alt: 图片描述
   :align: center
   :width: 600px

[占位符:需要XXX的图片,显示XXX内容]
```

### 视频占位符格式

```restructuredtext
.. video:: ./video/assembly_step1.mp4
   :width: 600
   :height: 400

[占位符:需要XXX的视频,演示XXX过程]
```

### 交叉引用格式

```restructuredtext
详见 :ref:`组装教程 <assembly>`

参考 :doc:`firmware/flash_tool`
```

## 正确性属性

*属性是一个特征或行为,应该在系统的所有有效执行中保持为真——本质上是关于系统应该做什么的正式陈述。属性作为人类可读规范和机器可验证正确性保证之间的桥梁。*

### 属性 1: 文档完整性

*对于任何*需求中定义的验收标准,都应该存在对应的文档章节来满足该标准

**验证**: 需求 1-12

### 属性 2: 导航一致性

*对于任何*在 toctree 中引用的文档文件,该文件必须存在且可访问

**验证**: 需求 9.1-9.5

### 属性 3: 图片占位符标注

*对于任何*图片占位符,都应该包含清晰的描述说明需要什么内容

**验证**: 需求 10.1, 10.5

### 属性 4: 交叉引用有效性

*对于任何*文档中的交叉引用,引用的目标必须存在

**验证**: 需求 9.5

### 属性 5: RST 格式规范

*对于任何* RST 文件,都应该遵循一致的标题层级和格式规范

**验证**: 需求 11.1-11.6

### 属性 6: 中文排版规范

*对于任何*中文文档内容,都应该遵循中文排版规范(正确的标点符号、适当的空格)

**验证**: 需求 11.5

## 错误处理

### 构建错误

- **缺失文件**: Sphinx 构建时会报告缺失的引用文件
- **格式错误**: RST 语法错误会导致构建失败
- **断开的链接**: 使用 `make linkcheck` 检查外部链接

### 图片缺失

- 使用占位符图片,避免构建失败
- 在占位符处添加明确的说明文字

### 编码问题

- 所有文件使用 UTF-8 编码
- 在 conf.py 中设置: `source_encoding = 'utf-8'`

## 测试策略

### 文档构建测试

**目标**: 确保文档可以成功构建

**方法**:
```bash
cd docs
make clean
make html
```

**验证**:
- 构建过程无错误
- 生成的 HTML 文件可以正常打开
- 所有链接可以正常跳转

### 文档内容测试

**目标**: 确保文档内容完整且准确

**方法**:
- 人工审查每个章节
- 检查是否覆盖所有需求
- 验证技术信息的准确性

### 链接测试

**目标**: 确保所有链接有效

**方法**:
```bash
cd docs
make linkcheck
```

### 格式测试

**目标**: 确保 RST 格式规范

**方法**:
- 使用 RST 语法检查工具
- 检查标题层级一致性
- 验证中文排版规范

### ReadTheDocs 集成测试

**目标**: 确保文档可以在 ReadTheDocs 上正确构建和显示

**方法**:
- 推送到 GitHub
- 在 ReadTheDocs 上触发构建
- 检查构建日志
- 验证在线文档显示效果

## 实现注意事项

### 中文排版规范

1. **标点符号**: 使用中文标点(。,!?等)
2. **空格**: 中英文之间添加空格,例如:"使用 ESP32S3 主控"
3. **数字**: 数字与中文之间添加空格,例如:"2.8 英寸屏幕"
4. **专有名词**: 保持英文专有名词的原始大小写,例如:"Type-C"、"TF卡"

### 图片管理

1. 图片按类别存放在不同子目录
2. 图片文件名使用英文和下划线,例如:`assembly_step1.jpg`
3. 图片尺寸建议:宽度 600-800px
4. 图片格式:JPG(照片)、PNG(截图)

### 代码块格式

```restructuredtext
.. code-block:: bash

   cd docs
   make html
```

### 注释框使用

```restructuredtext
.. note::
   这是一个提示信息

.. warning::
   这是一个警告信息

.. tip::
   这是一个技巧提示
```

### 表格格式

使用 list-table 指令,更易维护:

```restructuredtext
.. list-table::
   :header-rows: 1
   :widths: 30 70

   * - 列标题1
     - 列标题2
   * - 内容1
     - 内容2
```
