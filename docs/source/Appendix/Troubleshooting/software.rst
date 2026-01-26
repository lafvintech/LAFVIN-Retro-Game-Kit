.. _software-troubleshooting:

================
Software Troubleshooting
================

This chapter lists common software issues and their solutions.

Firmware Flashing Failure
==========================

Symptoms
--------

- Flashing tool cannot connect to ESP32S3
- Errors occur during flashing process
- Flashing completes but device cannot start

Possible Causes and Solutions
------------------------------

1. **Cannot Recognize COM Port**

   **Symptoms**: Cannot find COM port in flashing tool

   **Solutions**:

   - Check if Type-C cable is correctly connected
   - Confirm using data cable, not charge-only cable
   - Install CH340 driver (if using CH340 chip)
   - Check if USB serial device is recognized in Device Manager
   - Try changing USB port or computer
   - Replug Type-C cable

2. **Flashing Process Interrupted**

   **Symptoms**: Flashing fails or interrupts halfway through

   **Solutions**:

   - Ensure Type-C cable connection is stable, don't move device
   - Use good quality Type-C cable
   - Close other programs that may occupy serial port
   - Reduce flashing baud rate (from 921600 to 115200)
   - Re-download firmware file, ensure file is complete

3. **Flashing Completes But Cannot Start**

   **Symptoms**: Flashing shows success, but device has no response after power on

   **Solutions**:

   - Confirm correct firmware version is flashed
   - Check if flashing address is set correctly
   - Try completely erasing Flash then reflashing
   - Use officially recommended flashing tool
   - Refer to :doc:`../firmware/troubleshooting` for detailed flashing issues

.. tip::
   If flashing fails multiple times, try using ESP32's official Flash Download Tool.

Games Cannot Load
=================

Symptoms
--------

- Game list is empty
- Cannot start after selecting game
- Game black screen or crashes during runtime

Possible Causes and Solutions
------------------------------

1. **TF Card Format Issue**

   **Solutions**:

   - Confirm TF card is formatted as FAT32
   - Reformat TF card (refer to :doc:`../tfcard/format`)
   - Ensure using correct allocation unit size (recommended 4096 bytes)

2. **Incorrect File Format**

   **Solutions**:

   - Check if game file extension is correct
   - Refer to :doc:`../tfcard/file_structure` for supported file formats for each platform
   - Confirm game file is not corrupted
   - Try using game files from other sources

3. **Incorrect Folder Structure**

   **Solutions**:

   - Confirm game files are placed in correct folders
   - Folder names must match emulator names (such as NES, GB, SNES, etc.)
   - Folder names are case-sensitive
   - When inserting TF card for first time, let system automatically create folder structure

4. **Game File Too Large**

   **Solutions**:

   - Some large games may not be supported
   - Try using smaller game files for testing
   - Check if firmware version supports the game

5. **ROM File Corrupted**

   **Solutions**:

   - Re-download game file
   - Use ROM verification tool to verify file integrity
   - Try other games to confirm if it's an individual file issue

.. note::
   Not all games can run perfectly - some games may have compatibility issues.

System Running Abnormally
==========================

Symptoms
--------

- System frequently freezes or restarts
- Screen stuttering or flickering
- Audio-video out of sync
- Slow operation response

Possible Causes and Solutions
------------------------------

1. **Firmware Version Issue**

   **Solutions**:

   - Check if using latest firmware version
   - Download and flash latest firmware
   - View firmware update log to understand fixed issues

2. **Slow TF Card Read Speed**

   **Solutions**:

   - Use Class 10 or UHS-I grade high-speed TF card
   - Replace with better quality TF card
   - Check if TF card has bad blocks

3. **Insufficient Power Supply**

   **Solutions**:

   - Use 5V/2A or higher specification power adapter
   - Avoid using computer USB port for power
   - Check power cable quality

4. **Improper System Settings**

   **Solutions**:

   - Restore default settings
   - Adjust game speed settings (refer to :doc:`../usage/settings`)
   - Lower volume or brightness to reduce power consumption

5. **Insufficient Memory**

   **Solutions**:

   - Close unnecessary background functions
   - Restart device to clear memory
   - Avoid running multiple large games simultaneously

.. warning::
   If system continues to be abnormal, recommend completely erasing Flash and reflashing firmware.

Settings Cannot Be Saved
=========================

Symptoms
--------

- Settings become invalid after restart
- Volume, brightness and other settings cannot be saved
- Language settings revert to default

Possible Causes and Solutions
------------------------------

1. **Configuration File Issue**

   **Solutions**:

   - Check if TF card has write protection
   - Confirm TF card has sufficient remaining space
   - Reformat TF card

2. **Firmware Issue**

   **Solutions**:

   - Update to latest firmware version
   - Reflash firmware
   - Check if firmware is complete

3. **TF Card Failure**

   **Solutions**:

   - Replace TF card
   - Test TF card read/write function on computer
   - Use disk check tool to repair TF card errors

.. tip::
   Some settings may require restart to take effect - please restart device after modifying settings.

Emulator-Specific Issues
=========================

NES Emulator Issues
-------------------

**Common Issues**:

- Some games cannot run
- Screen displays abnormally
- Audio has noise

**Solutions**:

- Confirm using .nes format ROM files
- Try different ROM versions (such as (U), (E), (J) versions)
- Check if ROM file is in iNES format
- Adjust emulator settings (refer to :doc:`../advanced/emulator_config`)

GB/GBC Emulator Issues
----------------------

**Common Issues**:

- Game running speed abnormal
- Colors display incorrectly
- Saves cannot be saved

**Solutions**:

- Confirm file extension is correct (.gb or .gbc)
- Check if ROM file header information is correct
- Ensure TF card has write permission to save saves
- Try adjusting game speed settings

SNES Emulator Issues
--------------------

**Common Issues**:

- Large games run slowly
- Special chip games incompatible
- Audio playback abnormal

**Solutions**:

- SNES games have high performance requirements, some large games may not run smoothly
- Use .smc or .sfc format ROMs
- Avoid using games with special chips (such as SuperFX, SA-1)
- Lower audio quality to improve performance

DOOM Related Issues
-------------------

**Common Issues**:

- DOOM cannot start
- Custom WAD files cannot load
- Game runs with stuttering

**Solutions**:

- Confirm using DOOM 1 WAD files
- Check if WAD file size is reasonable (not too large)
- Refer to :doc:`../advanced/doom_mods` for WAD file usage
- Ensure WAD files are placed in correct DOOM folder

Complete System Reset
=====================

If none of the above methods resolve the issue, you can try a complete system reset:

Steps
-----

1. **Backup Important Data**

   - Backup game files and saves on TF card
   - Record current settings configuration

2. **Erase Flash**

   Use flashing tool to completely erase ESP32S3's Flash:

   .. code-block:: bash

      # Using esptool
      esptool.py --chip esp32s3 --port COM3 erase_flash

3. **Reflash Firmware**

   - Download latest firmware version
   - Reflash according to :doc:`../firmware/flash_tool`
   - Confirm flashing success

4. **Reformat TF Card**

   - Format as FAT32
   - Let system automatically create folder structure
   - Recopy game files

5. **Reconfigure Settings**

   - Reconfigure language, volume and other settings after power on
   - Test if all functions work normally

.. warning::
   Complete reset will clear all data and settings - be sure to backup important files beforehand.

Get Technical Support
=====================

Common Questions FAQ
====================

Q1: Device Cannot Start After Firmware Flashing?
-------------------------------------------------

A: First check if flashing address is correct, then try completely erasing Flash and reflashing. If problem persists, may be hardware connection issue - please check all jumper wires and module connections.

Q2: Why Can't Some Games Run?
------------------------------

A: Emulator may not support all games, especially games using special chips. Recommend trying other games, or check firmware update log for compatibility improvements.

Q3: How to Update Firmware?
----------------------------

A: Download latest firmware version, then reflash according to steps in :doc:`../firmware/flash_tool`. Recommend backing up save files on TF card before updating.

Q4: Is There a TF Card Capacity Limit?
---------------------------------------

A: Recommend using 8GB-32GB TF cards, must be formatted as FAT32. Cards over 32GB may need third-party tools to format as FAT32.

Q5: Can I Use Power Bank for Power?
------------------------------------

A: Yes, but ensure power bank outputs at least 5V/2A and use good quality Type-C cable. Some power banks may automatically shut off due to low power consumption.

Q6: Is Device Heating Normal?
------------------------------

A: ESP32S3 will have some heating during operation, this is normal. But if heating is severe or there's burning smell, immediately disconnect power and check hardware connections.

Q7: How to Save Game Progress?
-------------------------------

A: Some emulators support save function, save files will automatically save on TF card. For specific operations, refer to :doc:`../usage/emulators`.

Q8: Can I Develop My Own Games or Applications?
------------------------------------------------

A: Yes! Firmware is open source, you can get source code on GitHub and do secondary development. For details, visit official GitHub repository.

.. tip::
   Regularly check official website and GitHub repository for latest firmware updates and feature improvements.
