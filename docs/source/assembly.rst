.. _assembly:

====================
Assembly Tutorial
====================

Welcome to the LAFVIN Retro Game Kit assembly tutorial! This guide provides two assembly methods - choose based on your needs and experience level.

Assembly Overview
=====================

The LAFVIN Retro Game Kit offers two assembly methods:

**Method 1: Quick Assembly Mode (Recommended for Beginners)** → :ref:`Jump to <quick-assembly>`

- Uses LAFVIN Retro Game Hub expansion board
- Plug-and-play modules, no wiring required
- Assembly time: approximately 15-20 minutes
- Ideal for quick start and immediate gaming

**Method 2: Breadboard Mode (Advanced Users)** → :ref:`Jump to <breadboard-assembly>`

- Uses standard breadboard with flexible layout
- Fully customizable hardware connections
- Assembly time: approximately 40-60 minutes
- Ideal for learning hardware principles, debugging, and modifications

.. list-table:: Comparison of Two Assembly Methods
   :header-rows: 1
   :widths: 20 40 40

   * - Comparison
     - Quick Assembly Mode
     - Breadboard Mode
   * - Difficulty
     - ⭐⭐ Simple
     - ⭐⭐⭐⭐ Advanced
   * - Assembly Time
     - 10-15 minutes
     - 40-60 minutes
   * - Wiring Amount
     - Minimal (uses expansion board)
     - Extensive (fully manual wiring)
   * - Flexibility
     - Fixed layout
     - Fully customizable
   * - Target Users
     - Quick experience
     - Hardware learning
   * - Debugging Difficulty
     - Low
     - Medium
   * - Modification Space
     - Limited
     - Flexible

**We recommend using the first assembly method for quick hardware verification and software familiarization**

.. warning::
   **Important Notice:**
   
   Regardless of which assembly method you choose, please note:
   
   - Ensure all modules are powered off during assembly
   - Do not plug or unplug modules while powered on - this may cause hardware damage
   - Carefully verify pin connections to avoid incorrect wiring that could damage components

Required Tools
==============

- Recommended: Tweezers (for organizing jumper wires)
- Good lighting environment
- Flat work surface

Component Checklist
===================

Before starting assembly, please confirm you have received all components. For detailed list, refer to :doc:`component_list`.

.. _quick-assembly:

Method 1: Quick Assembly Mode
==============================

This method uses the LAFVIN Retro Game expansion board. Most connections are already completed on the board - you simply need to insert the modules.

Step 1: Prepare the Expansion Board
------------------------------------

1.1 Inspect the Expansion Board
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Take out the LAFVIN Retro Game expansion board and check:

- Board surface is undamaged
- All sockets are intact
- Pin labels are clearly visible

.. image:: ./img/assembly/extension_board.jpg
   :alt: LAFVIN Retro Game 扩展底板
   :align: center
   :width: 600px

[占位符:需要扩展底板的整体图片,标注各个插槽位置]

Step 2: Install Core Modules
-----------------------------

2.1 Install ESP32S3 Controller Module
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

The ESP32S3N16R8 is the core controller of the entire gaming console.

**Installation Steps:**

1. Install the ESP32S3 module into the socket on the back of the board
2. Confirm module orientation: antenna direction should match the board silkscreen
3. Align the ESP32S3 module with the socket and gently press down
4. Ensure all pins are fully inserted and the module fits tightly against the board

.. image:: ./img/assembly/esp32s3_on_board.jpg
   :alt: ESP32S3 安装到扩展底板
   :align: center
   :width: 600px

[占位符:ESP32S3 模块安装到扩展底板的图片]

.. warning::
   Do not apply excessive force during installation to avoid damaging pins. If pins cannot be inserted smoothly, check if they are properly aligned.

2.2 Install TFT Display
^^^^^^^^^^^^^^^^^^^^^^^^

**Installation Steps:**

1. Locate the DISPLAY area on the front of the expansion board
2. Align the 2.4-inch TFT display's pin headers with the socket
3. Gently insert into the socket

.. image:: ./img/assembly/tft_on_board.jpg
   :alt: TFT 显示屏连接到扩展底板
   :align: center
   :width: 600px

[占位符:TFT 显示屏连接到扩展底板的图片]

2.3 Install TFCard Module
^^^^^^^^^^^^^^^^^^^^^^^^^^

**Installation Steps:**

1. Locate the socket labeled "TFCard Module" on the expansion board
2. Align the TFCard module's pin headers with the socket
3. Ensure the TF card slot faces outward for easy card insertion/removal
4. Gently press down to ensure pins are fully inserted

.. image:: ./img/assembly/tfcard_on_board.jpg
   :alt: TFCard 模块安装到扩展底板
   :align: center
   :width: 600px

[占位符:TFCard 模块安装到扩展底板的图片]

2.4 Install Amplifier Module
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

**Installation Steps:**

1. Locate the socket labeled "Amplifier Module" on the expansion board
2. Align the amplifier module's pin headers with the socket
3. Ensure the audio output interface faces outward
4. Gently press down to ensure pins are fully inserted, then connect the speaker to the amplifier module (keyed connector)

.. image:: ./img/assembly/amp_on_board.jpg
   :alt: 功放模块安装到扩展底板
   :align: center
   :width: 600px

[占位符:功放模块安装到扩展底板的图片]

Step 3: Install Button Caps
----------------------------

We provide button caps for the directional and A/B buttons. You can install the button caps onto the buttons.

.. image:: ./img/assembly/install_cap.jpg
   :alt: 安装按键帽
   :align: center
   :width: 600px

Quick Assembly Complete
-----------------------

.. image:: ./img/assembly/quick_assembly_done.jpg
   :alt: 快速组装完成效果
   :align: center
   :width: 600px

[占位符:使用扩展底板组装完成的整体效果图]

Congratulations! You have completed the quick assembly. The expansion board greatly simplifies the wiring process. You can now proceed to :ref:`firmware flashing <firmware>` for quick testing.

.. _breadboard-assembly:

Method 2: Breadboard Mode
==========================

This method uses a standard breadboard and requires manual completion of all wiring. Suitable for advanced users who want to deeply understand hardware connection principles.

Step 1: Breadboard Preparation
-------------------------------

1.1 Connect Two Breadboards
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

**You can refer to our installation diagram or design your own layout. The connection diagram and IO-module reference table are as follows:**

.. image:: ./img/assembly/breadboard_connect.png
   :align: center
   :width: 600px

**TFT Display Pin Connections**

.. list-table:: TFT Display Pin Mapping
   :header-rows: 1
   :widths: 25 25 50

   * - TFT Pin
     - ESP32S3 Pin
     - Description
   * - BL
     - GPIO 6
     - Backlight control
   * - CS
     - GPIO 7
     - Chip select signal
   * - DC
     - GPIO 15
     - Data/command select
   * - RES
     - GPIO 16
     - Reset signal
   * - SDA
     - GPIO 17
     - SPI data output
   * - SCL
     - GPIO 18
     - SPI clock
   * - VCC
     - 5V
     - Power supply
   * - GND
     - GND
     - Ground

**TFCard Module Pin Connections**

.. list-table:: TFCard Module Pin Mapping
   :header-rows: 1
   :widths: 25 25 50

   * - TFCard Pin
     - ESP32S3 Pin
     - Description
   * - VCC
     - 3V3
     - Power supply
   * - GND
     - GND
     - Ground
   * - DO2
     - NC
     - (Not connected)
   * - CS
     - GPIO 1
     - Chip select signal
   * - CLK
     - GPIO 2
     - SPI clock
   * - MOSI
     - GPIO 42
     - SPI data output
   * - MISO
     - GPIO 41
     - SPI data input
   * - DO1
     - NC
     - (Not connected)

**Amplifier Module Pin Connections**

.. list-table:: Amplifier Module Pin Mapping
   :header-rows: 1
   :widths: 25 25 50

   * - Amplifier Pin
     - ESP32S3 Pin
     - Description
   * - VCC
     - 5V
     - Power supply (Note: 5V!)
   * - GND
     - GND
     - Ground
   * - SD
     - VCC (shorted to amplifier VCC)
     - Amplifier enable (shutdown control)
   * - DIN
     - GPIO 8
     - I2S data input
   * - GAIN
     - NC
     - Gain control (not connected)
   * - BCLK
     - GPIO 9
     - I2S bit clock
   * - LRCLK
     - GPIO 10
     - I2S left/right channel clock

**Button Pin Connections**

.. list-table:: Button Pin Mapping
   :header-rows: 1
   :widths: 30 25 45

   * - Button
     - ESP32S3 Pin
     - Description
   * - D-pad - Up
     - GPIO 11
     - Direction control - Up
   * - D-pad - Down
     - GPIO 12
     - Direction control - Down
   * - D-pad - Left
     - GPIO 13
     - Direction control - Left
   * - D-pad - Right
     - GPIO 14
     - Direction control - Right
   * - A Button
     - GPIO 21
     - Game button A (Confirm/Jump)
   * - B Button
     - GPIO 47
     - Game button B (Cancel/Attack)
   * - Start Button
     - GPIO 39
     - Start/Pause game
   * - Select Button
     - GPIO 40
     - Select function
   * - Menu Button
     - GPIO 5
     - Open system menu
   * - Option Button
     - GPIO 4
     - Option settings


Each button has one end connected to the corresponding GPIO pin and the other end connected to GND (ground). The ESP32S3 will enable internal pull-up resistors, and the pin level becomes low when the button is pressed.

.. warning::
   **Power connections are critical!**
   Incorrect power and ground connections may cause short circuits and hardware damage

.. tip::
   **Wiring Tips:**
   
   - Connect one module at a time, complete it before moving to the next
   - Use different colored jumper wires to distinguish different functions
   - Take photos of the wiring process for later reference
   - Use tweezers to adjust jumper wire positions

Breadboard Mode Assembly Complete
----------------------------------

Congratulations! You have completed the breadboard mode assembly. Although this method is more complex, it gives you complete mastery of hardware connection principles.

.. image:: ./img/assembly/breadboard_connect_done.jpg
   :alt: 面包板模式组装完成效果
   :align: center
   :width: 800px

**Final Verification Before Power-On (Applies to Both Methods)**

.. danger::
   **Before powering on for the first time, please complete the following final checks:**
   
   1. ✓ Power connections are correct
   2. ✓ No short circuits (power and ground lines not touching)
   3. ✓ All modules are securely installed
   4. ✓ Pin connections verified against tables
   5. ✓ TFT display cable connections are correct
   
   **If you have any doubts, do not power on! Check connections first!**

Assembly Complete
=================

Regardless of which assembly method you chose, the hardware portion is now complete.

.. image:: ./img/assembly/breadboard_completed.png
   :align: center
   :width: 600px

Next Steps
==========

After hardware assembly is complete, you need to:

1. :doc:`tfcard` - Prepare and format the TF card
2. :doc:`firmware` - Flash firmware to ESP32S3
3. :doc:`usage/usage` - Learn how to use the gaming console

If you encounter problems during assembly, please refer to :doc:`troubleshooting/troubleshooting`.

Having Issues?
==============

If you encounter difficulties during assembly, please check :ref:`assembly-troubleshooting` for detailed troubleshooting guides.

You can also:

- Visit the LAFVIN official website for more resources
- Contact the technical support team

Wishing you smooth assembly and happy gaming!
