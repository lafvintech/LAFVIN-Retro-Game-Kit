.. _emulators:

============
Emulator Guide
============

Emulator Overview
=================

The LAFVIN Retro Game Kit includes emulators for multiple gaming platforms, supporting classic retro games. Each emulator is optimized for ESP32S3 to provide smooth gaming experience.

Supported Gaming Platforms
===========================

The system supports the following 13 gaming platforms:

.. list-table:: Supported Gaming Platforms
   :header-rows: 1
   :widths: 35 40 15

   * - Platform
     - Description
     - File Format
   * - NES (Nintendo Entertainment System)
     - 8-bit classic console
     - .nes
   * - SNES (Super Nintendo)
     - 16-bit console
     - .sfc, .smc
   * - GB (Game Boy)
     - Nintendo handheld
     - .gb
   * - GBC (Game Boy Color)
     - Color handheld
     - .gbc
   * - GBA (Game Boy Advance)
     - Nintendo 32-bit handheld
     - .gba
   * - Game & Watch
     - Nintendo early handheld
     - .gw
   * - SMS (Sega Master System)
     - Sega 8-bit console
     - .sms
   * - GG (Game Gear)
     - Sega color handheld
     - .gg
   * - MD/Genesis (Mega Drive)
     - Sega 16-bit console
     - .md, .bin
   * - Colecovision
     - Early home console
     - .col
   * - PCE (PC Engine/TurboGrafx-16)
     - NEC 16-bit console
     - .pce
   * - Atari Lynx
     - Atari color handheld
     - .lnx
   * - DOOM
     - Classic FPS game
     - .wad
   * - MSX
     - MSX personal computer
     - .rom

TF Card Folder Structure
========================

Game files are stored in corresponding folders on the TF card. In the SD card section, you can copy the downloaded folders into the memory card.

.. code-block:: text

   /
   ├── nes/          # Nintendo Entertainment System games
   ├── snes/         # Super Nintendo games
   ├── gb/           # Game Boy games
   ├── gbc/          # Game Boy Color games
   ├── gw/           # Game & Watch games
   ├── sms/          # Master System games
   ├── gg/           # Game Gear games
   ├── md/           # Mega Drive/Genesis games
   ├── col/          # Colecovision games
   ├── pce/          # PC Engine games
   ├── lnx/          # Atari Lynx games
   ├── doom/         # DOOM WAD files
   └── msx/          # MSX games

.. note::
   Please place game files in the corresponding folders - the system will automatically recognize and display them in the game library.

Basic Operations
================

Starting a Game
---------------

1. Ensure TF card is properly inserted and contains game files
2. Select emulator platform from main menu
3. Select and enter emulator
4. Browse and select the game you want to play
5. Press A button to start game

.. image:: ../img/usage/game_start.jpg
   :alt: 启动游戏界面
   :align: center
   :width: 600pxaaaaa

[占位符:需要游戏启动界面截图,显示游戏加载过程]

In-Game Operations
------------------

During gameplay:

- Use **directional keys** to control character movement
- Use **A/B buttons** for game operations
- Press **Start button** to pause game
- Press **Menu button** to open game menu

Exiting a Game
--------------

1. Press **Menu button** to open game menu
2. Select **Quit**

.. tip::
   It's recommended to select "Save & Quit" before exiting to avoid losing game progress.

Game Saves
==========

Manual Save
-----------

Press **Menu button** during gameplay and select **SAVE & Continue**:

1. Select save slot (usually 4 slots available)
2. Press A button to confirm save
3. System will display save success message

Loading a Save
--------------

Press **Menu button** during gameplay and select **Load Game**:

1. Select the save slot you want to load
2. Press A button to confirm loading
3. Game will continue from save point

.. note::
   Not all games support save functionality - this depends on the game itself and emulator support.

Common Issues
=============

Game Won't Start
----------------

**Possible Causes:**

- ROM file format is incorrect
- ROM file is corrupted
- Emulator doesn't support this game

**Solutions:**

1. Check if file format is correct
2. Try re-downloading ROM file

Game Running Slow & Laggy
--------------------------

**Possible Causes:**

- Game has high hardware requirements


- For advanced features, see :doc:`../advanced`