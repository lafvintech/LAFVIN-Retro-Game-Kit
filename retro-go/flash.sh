#!/bin/bash

# 1. 执行编译
echo "正在编译..."
python rg_tool.py --target esp32-s3-devkit build-img

# 2. 检查编译是否成功 ($? 获取上一个命令的退出状态)
if [ $? -eq 0 ]; then
    echo "编译成功，准备烧录..."
    
    # 3. 执行烧录
    # 注意：这里假设 retro-go_*.img 只会匹配到一个最新的文件
    esptool.py --chip esp32s3 --port /dev/ttyUSB0 --baud 921600 write_flash 0x0 retro-go_*.img
else
    echo "编译失败，取消烧录。"
    exit 1
fi
