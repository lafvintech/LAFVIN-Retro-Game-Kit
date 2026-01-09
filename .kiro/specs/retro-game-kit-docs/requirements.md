# 需求文档

## 简介

为 LAFVIN Retro Game Kit 产品创建一套完整的中文 Readthedocs 文档,帮助用户了解产品、组装硬件、烧录固件、使用游戏机。

## 术语表

- **System**: 文档系统
- **User**: 使用文档的用户(购买了 LAFVIN Retro Game Kit 的客户)
- **Retro_Game_Kit**: LAFVIN 复古游戏机套件产品
- **ESP32S3N16R8**: 主控模块(ESP32S3芯片,16MB Flash, 8MB PSRAM)
- **TFT_Screen**: 2.8英寸 TFT 显示屏
- **TFCard_Module**: LAFVIN TF卡模块,用于读取游戏文件
- **Amplifier_Module**: LAFVIN 功放模块,用于音频输出
- **Extension_Board**: LAFVIN Retro game 扩展底板
- **Game_Emulator**: 游戏模拟器(支持NES、SNES、GB、GBC、SMS、GG等多个平台)
- **Firmware**: 开源固件,需要用户烧录到ESP32S3
- **ReadTheDocs**: 文档托管平台
- **RST_Format**: reStructuredText 格式

## 需求

### 需求 1: 产品介绍文档

**用户故事:** 作为用户,我想了解 Retro Game Kit 的基本信息和特性,以便决定如何使用它。

#### 验收标准

1. THE System SHALL 提供产品的整体介绍,包括 ESP32S3N16R8 主控、2.8英寸TFT屏幕、功能特性
2. THE System SHALL 展示产品的主图片
3. THE System SHALL 列出产品的主要特性(主控规格、显示屏、音频输出、TF卡存储、支持的游戏平台)
4. THE System SHALL 列出支持的所有游戏平台(NES、SNES、GB、GBC、Game & Watch、SG-1000、SMS、MD/Genesis、GG、Colecovision、PC Engine、Lynx、DOOM)
5. THE System SHALL 说明产品的应用场景(复古游戏娱乐、编程学习、DIY收藏)
6. THE System SHALL 提供完整的物料清单,包含所有14项组件

### 需求 2: 组件清单文档

**用户故事:** 作为用户,我想查看套件包含的所有组件,以便确认收到的物品是否完整。

#### 验收标准

1. THE System SHALL 以表格形式列出所有14项组件及数量
2. THE System SHALL 列出以下组件:ESP32S3N16R8主控模块、TFCard模块、功放模块、扩展底板、2.8英寸TFT屏幕、小按钮(10个)、大按钮(4个)、按钮帽(4个)、280面包板(2个)、硬质跳线、软质公对公跳线
3. THE System SHALL 为每个主要组件提供图片或占位符
4. THE System SHALL 标注电源供电方式(Type-C供电)
5. THE System SHALL 说明每个组件的作用

### 需求 3: 组装教程文档

**用户故事:** 作为用户,我想按照步骤组装游戏机,以便正确完成硬件组装。

#### 验收标准

1. THE System SHALL 提供分步骤的组装说明,包括面包板连接、模块安装、按键安装
2. WHEN 描述每个组装步骤 THEN THE System SHALL 包含对应的图片或视频占位符
3. THE System SHALL 说明如何连接 ESP32S3 主控、TFCard模块、功放模块、TFT屏幕
4. THE System SHALL 说明如何在面包板上安装10个小按钮和4个大按钮
5. THE System SHALL 说明跳线的连接方式和引脚对应关系
6. THE System SHALL 标注组装过程中的注意事项(如引脚方向、连接顺序)
7. THE System SHALL 提供组装完成后的检查清单

### 需求 4: TF卡准备文档

**用户故事:** 作为用户,我想准备好 TF 卡,以便在游戏机上使用。

#### 验收标准

1. THE System SHALL 说明 TF 卡的容量要求和推荐规格
2. THE System SHALL 说明如何格式化 TF 卡(FAT32格式)
3. THE System SHALL 说明首次插入 TF 卡时系统会自动创建模拟器文件夹
4. THE System SHALL 列出各个模拟器支持的文件格式(如 .nes、.gb、.gbc、.sms、.gg、.md 等)
5. THE System SHALL 说明如何将 TF 卡插入 TFCard 模块
6. THE System SHALL 说明用户需自行准备游戏文件并放入对应模拟器文件夹

### 需求 5: 固件烧录文档

**用户故事:** 作为用户,我想将开源固件烧录到 ESP32S3,以便游戏机能够正常工作。

#### 验收标准

1. THE System SHALL 提供固件文件的下载链接或位置
2. THE System SHALL 说明如何使用烧录工具(如 esptool 或 Flash Download Tool)
3. THE System SHALL 说明如何将 ESP32S3 连接到电脑(Type-C 数据线)
4. THE System SHALL 说明如何选择正确的 COM 端口
5. THE System SHALL 提供固件烧录的详细步骤和参数设置
6. THE System SHALL 说明烧录过程中可能遇到的问题及解决方法
7. THE System SHALL 说明如何验证固件烧录成功

### 需求 6: 使用说明文档

**用户故事:** 作为用户,我想了解如何使用游戏机,以便开始使用。

#### 验收标准

1. THE System SHALL 说明如何通过 Type-C 接口供电和开机
2. THE System SHALL 说明所有按键的功能(方向键、A/B键、Select/Start键、Menu/Option键)
3. THE System SHALL 说明如何使用菜单系统浏览和选择内容
4. THE System SHALL 说明如何调节音量、亮度、游戏速度
5. THE System SHALL 说明如何切换界面语言(英语、德语、法语)
6. THE System SHALL 说明 TF 卡中自动生成的文件夹结构
7. THE System SHALL 列出各模拟器支持的文件格式
8. THE System SHALL 提供基本操作说明

### 需求 7: 故障排除文档

**用户故事:** 作为用户,当遇到问题时,我想查找解决方案,以便快速解决问题。

#### 验收标准

1. THE System SHALL 列出常见问题及解决方案(屏幕不显示、无声音、按键无响应、无法识别TF卡等)
2. THE System SHALL 提供硬件问题的排查步骤(检查连接、检查供电、检查跳线)
3. THE System SHALL 提供软件问题的排查步骤(重新烧录固件、检查TF卡格式)
4. THE System SHALL 提供联系技术支持的方式

### 需求 8: 文档结构和导航

**用户故事:** 作为用户,我想方便地浏览和查找文档内容,以便快速找到需要的信息。

#### 验收标准

1. THE System SHALL 使用清晰的目录结构组织文档
2. THE System SHALL 在首页提供文档导航和快速开始指南
3. THE System SHALL 使用 ReadTheDocs 主题提供侧边栏导航
4. THE System SHALL 为每个章节提供清晰的标题和子标题
5. THE System SHALL 支持文档内的交叉引用

### 需求 9: 多媒体内容

**用户故事:** 作为用户,我想通过图片和视频更直观地理解操作步骤,以便更容易完成任务。

#### 验收标准

1. WHEN 图片或视频暂时不可用 THEN THE System SHALL 使用占位符标注(如 `.. image:: ./img/placeholder.jpg`)
2. THE System SHALL 为所有图片提供替代文本(alt text)
3. THE System SHALL 确保图片尺寸适合文档显示
4. THE System SHALL 为视频提供嵌入支持(使用 sphinxcontrib.video 扩展)
5. THE System SHALL 在占位符处注明需要的图片内容描述

### 需求 10: 文档格式和样式

**用户故事:** 作为用户,我想阅读格式规范、易读的文档,以便更好地理解内容。

#### 验收标准

1. THE System SHALL 使用 reStructuredText 格式编写所有文档
2. THE System SHALL 使用一致的标题层级(=、-、~、^)
3. THE System SHALL 使用适当的列表、表格、代码块格式
4. THE System SHALL 使用注释框(.. note::、.. warning::、.. tip::)突出重要信息
5. THE System SHALL 确保中文排版规范(标点符号、空格使用)
6. THE System SHALL 为代码示例使用语法高亮

### 需求 11: 高级功能文档

**用户故事:** 作为高级用户,我想了解游戏机的高级功能和自定义选项,以便获得更好的使用体验。

#### 验收标准

1. THE System SHALL 说明如何配置模拟器的高级选项
2. THE System SHALL 说明如何使用 DOOM 模组功能
3. THE System SHALL 说明如何调整不同游戏平台的模拟器设置
4. THE System SHALL 说明如何保存和加载进度(如果支持)
5. THE System SHALL 说明如何使用快捷键和组合键
