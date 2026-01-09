# 实施计划: LAFVIN Retro Game Kit 文档

## 概述

本实施计划将设计文档转化为具体的文档编写任务。每个任务专注于创建或更新特定的 RST 文档文件,按照从基础到高级的顺序组织。

## 任务

- [x] 1. 更新 Sphinx 配置和首页
  - 更新 `docs/source/conf.py` 配置项目信息
  - 更新 `docs/source/index.rst` 添加中文导航和快速开始指南
  - _需求: 8.1, 8.2, 9.1_

- [x] 2. 编写产品介绍文档
  - 更新 `docs/source/about_this_kit.rst` 为中文内容
  - 添加产品主图占位符
  - 列出 ESP32S3N16R8 规格和特性
  - 列出支持的所有游戏平台(NES、SNES、GB、GBC等13个平台)
  - 添加应用场景说明
  - _需求: 1.1, 1.2, 1.3, 1.4, 1.5_

- [x] 3. 编写组件清单文档
  - 更新 `docs/source/component_list.rst` 为中文内容
  - 添加组件大合照占位符
  - 创建14项组件清单表格
  - 说明每个组件的作用
  - 标注 Type-C 供电方式
  - _需求: 2.1, 2.2, 2.3, 2.4, 2.5_

- [x] 4. 编写组装教程文档
  - 创建 `docs/source/assembly.rst`
  - 编写组装概述和所需工具
  - 编写步骤1:面包板准备
  - 编写步骤2:模块安装(ESP32S3、TFCard、功放、TFT屏幕)
  - 编写步骤3:按键安装(10个小按钮、4个大按钮)
  - 编写步骤4:跳线连接和引脚对应表格
  - 编写步骤5:组装完成检查清单
  - 添加图片占位符和注意事项
  - _需求: 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7_

- [x] 5. 编写 TF 卡准备文档
  - [x] 5.1 创建 TF 卡主页
    - 创建 `docs/source/tfcard/tfcard.rst`
    - 编写 TF 卡概述和容量要求
    - _需求: 4.1_

  - [x] 5.2 编写格式化说明
    - 创建 `docs/source/tfcard/format.rst`
    - 说明如何格式化为 FAT32
    - 添加不同操作系统的格式化步骤
    - _需求: 4.2_

  - [x] 5.3 编写文件结构说明
    - 创建 `docs/source/tfcard/file_structure.rst`
    - 说明自动生成的文件夹结构
    - 列出各模拟器支持的文件格式表格
    - 说明如何将 TF 卡插入模块
    - _需求: 4.3, 4.4, 4.5, 4.6_

- [ ] 6. 编写固件烧录文档
  - [x] 6.1 创建固件主页
    - 创建 `docs/source/firmware/firmware.rst`
    - 编写固件烧录概述
    - _需求: 5.1_

  - [x] 6.2 编写固件下载说明
    - 创建 `docs/source/firmware/download.rst`
    - 提供固件下载链接占位符
    - 说明固件版本信息
    - _需求: 5.1_

  - [x] 6.3 编写烧录工具使用说明
    - 创建 `docs/source/firmware/flash_tool.rst`
    - 说明如何连接 ESP32S3(Type-C线)
    - 说明如何选择 COM 端口
    - 提供烧录工具使用步骤(esptool 或 Flash Download Tool)
    - 添加烧录参数设置说明
    - 添加截图占位符
    - _需求: 5.2, 5.3, 5.4, 5.5_

  - [x] 6.4 编写烧录问题排查
    - 创建 `docs/source/firmware/troubleshooting.rst`
    - 列出常见烧录问题和解决方法
    - 说明如何验证烧录成功
    - _需求: 5.6, 5.7_

- [ ] 7. 编写使用说明文档
  - [x] 7.1 创建使用主页
    - 创建 `docs/source/usage/usage.rst`
    - 编写使用概述
    - _需求: 6.1_

  - [x] 7.2 编写开机和供电说明
    - 创建 `docs/source/usage/power_on.rst`
    - 说明 Type-C 供电方式
    - 说明开机步骤
    - _需求: 6.1_

  - [x] 7.3 编写按键说明
    - 创建 `docs/source/usage/buttons.rst`
    - 添加按键布局图占位符
    - 创建按键功能表格(方向键、A/B、Start/Select、Menu/Option)
    - _需求: 6.2_

  - [x] 7.4 编写菜单系统说明
    - 创建 `docs/source/usage/menu.rst`
    - 说明如何使用菜单系统
    - 说明如何浏览和选择内容
    - 添加菜单界面截图占位符
    - _需求: 6.3_

  - [x] 7.5 编写设置调节说明
    - 创建 `docs/source/usage/settings.rst`
    - 说明如何调节音量
    - 说明如何调节亮度
    - 说明如何调节游戏速度
    - 说明如何切换语言(英语、德语、法语)
    - _需求: 6.4, 6.5_

  - [x] 7.6 编写模拟器说明
    - 创建 `docs/source/usage/emulators.rst`
    - 说明 TF 卡文件夹结构
    - 列出各模拟器支持的文件格式
    - 提供基本操作说明
    - _需求: 6.6, 6.7, 6.8_

- [x] 8. 编写高级功能文档
  - [x] 8.1 创建高级功能主页
    - 创建 `docs/source/advanced/advanced.rst`
    - 编写高级功能概述
    - _需求: 11.1_

  - [x] 8.2 编写模拟器配置说明
    - 创建 `docs/source/advanced/emulator_config.rst`
    - 说明如何配置模拟器高级选项
    - 说明如何调整不同平台的设置
    - 说明如何使用快捷键
    - _需求: 11.1, 11.3, 11.5_

  - [x] 8.3 编写 DOOM 模组说明
    - 创建 `docs/source/advanced/doom_mods.rst`
    - 说明如何使用 DOOM 模组功能
    - 说明如何添加自定义 WAD 文件
    - _需求: 11.2_

- [x] 9. 编写故障排除文档
  - [x] 9.1 创建故障排除主页
    - 创建 `docs/source/troubleshooting/troubleshooting.rst`
    - 编写故障排除概述
    - _需求: 7.1_

  - [x] 9.2 编写硬件问题排查
    - 创建 `docs/source/troubleshooting/hardware.rst`
    - 列出常见硬件问题(屏幕不显示、无声音、按键无响应、无法识别TF卡)
    - 提供硬件排查步骤(检查连接、供电、跳线)
    - 添加警告提示
    - _需求: 7.1, 7.2_

  - [x] 9.3 编写软件问题排查
    - 创建 `docs/source/troubleshooting/software.rst`
    - 列出常见软件问题
    - 提供软件排查步骤(重新烧录固件、检查TF卡格式)
    - 提供技术支持联系方式
    - _需求: 7.1, 7.3, 7.4_

- [x] 10. 创建图片目录结构
  - 创建 `docs/source/img/product/` 目录
  - 创建 `docs/source/img/components/` 目录
  - 创建 `docs/source/img/assembly/` 目录
  - 创建 `docs/source/img/firmware/` 目录
  - 创建 `docs/source/img/usage/` 目录
  - 在每个目录添加 `.gitkeep` 文件
  - _需求: 9.1, 9.2, 9.3, 9.4, 9.5_

- [ ] 11. 测试文档构建
  - 运行 `make clean` 清理旧文件
  - 运行 `make html` 构建文档
  - 检查构建日志是否有错误
  - 在浏览器中打开生成的 HTML 文件
  - 验证所有链接可以正常跳转
  - 验证中文显示正常
  - _需求: 8.3, 8.4, 10.1, 10.2, 10.3_

- [ ] 12. 最终检查和优化
  - 检查所有文档的中文排版规范
  - 检查标题层级一致性
  - 检查占位符是否都有清晰描述
  - 检查表格格式是否正确
  - 检查注释框(note、warning、tip)使用是否恰当
  - 更新 `docs/requirements.txt` 确保依赖完整
  - _需求: 10.1, 10.2, 10.3, 10.4, 10.5, 10.6_

## 注意事项

- 所有文档使用 UTF-8 编码
- 遵循 reStructuredText 格式规范
- 中英文之间添加空格
- 使用中文标点符号
- 图片占位符格式: `.. image:: ./img/xxx.jpg` 并添加 `[占位符:描述]`
- 引脚表格使用 `list-table` 指令
- 重要提示使用 `.. note::`、`.. warning::`、`.. tip::`
- **重要**: 完成每个任务后不要运行 `make html`,等所有任务完成后再统一构建和检查
