.. _hardware-troubleshooting:

============================
Hardware Troubleshooting
============================

This chapter lists common hardware issues and their solutions.

.. warning::
   Before performing any hardware inspection or repair, always disconnect power! Plugging or unplugging modules while powered on may cause hardware damage.

.. _assembly-troubleshooting:

Assembly Issues
===============

.. _assembly-pin-insertion:

Pins Won't Insert During Assembly
----------------------------------

**Symptoms**: Module pins cannot be smoothly inserted into sockets or breadboard

**Solutions**:

- Do not apply excessive force to avoid damaging pins
- Check if pins are aligned with socket
- Gently adjust pin angle to ensure vertical insertion
- Check if pins are bent, carefully adjust with tweezers
- Confirm socket or breadboard holes have no foreign objects

.. _assembly-wiring-confusion:

Too Many Breadboard Jumper Wires, Easy to Confuse
--------------------------------------------------

**Symptoms**: Complex wiring, easy to connect incorrectly

**Solutions**:

- Use different colored jumper wires to distinguish functions (e.g., red-power, black-ground, other colors-signal)
- Connect only one module at a time, complete it before moving to the next
- After completing each module, verify against the pin mapping table
- Take photos of the wiring process for later reference and debugging
- Use tweezers to adjust jumper wire positions, keep layout tidy

.. _assembly-button-installation:

Button Installation Issues
---------------------------

**Symptoms**: Do buttons need soldering? How to install?

**Solutions**:

- No soldering required, all buttons are plug-in design
- Simply insert button pins into breadboard
- Ensure button pins are fully inserted into breadboard holes
- One end of button connects to GPIO, other end connects to GND

.. _assembly-mixing-modes:

Can Two Assembly Methods Be Mixed?
-----------------------------------

**Symptoms**: Want to use both expansion board and breadboard simultaneously

**Solutions**:

- Not recommended to mix
- Expansion board and breadboard may have different pin definitions
- Please choose one method to complete assembly
- If modification needed, breadboard mode is recommended

.. _assembly-button-layout:

Can Button Layout Be Adjusted?
-------------------------------

**Symptoms**: Want to customize button positions

**Solutions**:

- Can adjust button positions according to personal preference
- Need to modify pin configuration in firmware accordingly
- Recommended to complete assembly and testing with standard layout first
- Customize after becoming familiar

.. _hardware-screen-issue:

Screen Not Displaying
=====================

Symptoms
--------

- Screen completely blank after power on (black screen)
- Screen displaying abnormally (artifacts, flickering, incorrect colors)
- Screen backlight on but no content displayed

Possible Causes and Solutions
------------------------------

1. **Check Power Supply**

   - Confirm Type-C cable is correctly connected to ESP32S3 module
   - Try replacing USB power adapter (recommended 5V/2A or higher)
   - Check if power indicator LED on ESP32S3 is lit
   - Try replacing Type-C data cable

2. **Check Screen Connection**

   - Disconnect power
   - Confirm TFT screen pin headers are correctly inserted into board socket
   - If using breadboard, confirm connections are correct

3. **Check Jumper Wire Connections**

   - Refer to pin mapping table in :doc:`../../assembly`
   - Check all jumper wires are connected to correct pins
   - Confirm jumper wires are not loose or disconnected
   - Check if jumper wires are damaged

4. **Check Firmware**

   - Reflash firmware (refer to :doc:`../../firmware`)
   - Confirm using latest firmware version
   - Check if flashing process completed successfully

.. tip::
   If screen backlight is on but no content, it's usually a firmware issue - try reflashing firmware.

.. _hardware-audio-issue:

No Audio Output
===============

Symptoms
--------

- Game runs normally but completely no audio
- Audio intermittent or has noise

Possible Causes and Solutions
------------------------------

1. **Check Amplifier Module Connection**

   - Disconnect power
   - Confirm amplifier module is correctly installed on breadboard
   - Check if amplifier module jumper wire connections are correct
   - Refer to amplifier module installation steps in :doc:`../../assembly`

2. **Check Audio Output Device**

   - Confirm speaker are correctly connected to amplifier module
   - Try replacing speaker
   - Check if audio cable is damaged

3. **Check Volume Settings**

   - Enter system settings menu
   - Check if volume is set to 0
   - Try increasing volume (refer to :doc:`../../usage/settings`)

4. **Check Jumper Wire Connections**

   - Confirm all pins of amplifier module are correctly connected
   - Check if audio signal lines and power lines are connected correctly
   - Refer to pin mapping table in assembly tutorial

.. note::
   Some games may not have audio themselves - please try running other games for testing.

.. _hardware-button-issue:

Buttons Not Responding
=======================

Symptoms
--------

- All buttons not responding
- Some buttons not responding
- Button response delayed or unstable

Possible Causes and Solutions
------------------------------

1. **Check Button Installation**

   - Disconnect power
   - Confirm buttons are correctly inserted into breadboard
   - Check if button pins are fully inserted into breadboard holes
   - Confirm button orientation is correct (buttons have directionality)

2. **Check Jumper Wire Connections**

   - Refer to button jumper wire connection diagram in :doc:`../../assembly`
   - Check if each button's jumper wire is connected to correct GPIO pin
   - Confirm jumper wires are not loose
   - Check if jumper wires are damaged or have poor contact

3. **Test Buttons**

   - Use multimeter to test if buttons work normally
   - When button is pressed, corresponding pin should conduct
   - If button is damaged, replace with new button

4. **Check Breadboard**

   - Some holes in breadboard may have poor contact
   - Try moving button to other positions on breadboard

.. warning::
   Do not press buttons forcefully - may cause button damage or breadboard deformation.

.. _hardware-tfcard-issue:

Cannot Recognize TF Card
========================

Symptoms
--------

- System prompts "TF card not detected"
- No response after inserting TF card
- Game list is empty

Possible Causes and Solutions
------------------------------

1. **Check TF Card Format**

   - Confirm TF card is formatted as FAT32
   - Reformat TF card (refer to :doc:`../../tfcard`)
   - Confirm TF card capacity does not exceed 32GB

2. **Check TF Card Insertion**

   - Disconnect power
   - Reinsert TF card, ensure it's fully inserted
   - Check if TF card direction is correct (metal contacts facing down)
   - Confirm hearing "click" sound indicates proper insertion

3. **Check TF Card Module Connection**

   - Disconnect power
   - Confirm TF card module is correctly installed on breadboard
   - Check if TF card module jumper wire connections are correct
   - Refer to TF card module installation steps in :doc:`../../assembly`

4. **Check TF Card Quality**

   - Try using another TF card
   - Confirm TF card has no physical damage
   - Test if TF card can read/write normally on computer

5. **Check File Structure**

   - Confirm TF card root directory has correct folder structure
   - Refer to :doc:`../../tfcard` for correct folder structure
   - On first use, system will automatically create folders

.. _hardware-power-issue:

Power Supply Issues
===================

Symptoms
--------

- Device cannot power on
- Device runs unstably, frequently restarts
- Power indicator LED not lit or flickering

Possible Causes and Solutions
------------------------------

1. **Check Power Adapter**

   - Use 5V/2A or higher specification USB power adapter
   - Avoid using computer USB port for power (current may be insufficient)
   - Try replacing power adapter

2. **Check Type-C Cable**

   - Confirm using data cable, not charge-only cable
   - Try replacing Type-C cable
   - Check if cable is damaged

3. **Check Connection**

   - Confirm Type-C cable is firmly inserted into ESP32S3
   - Check if Type-C port has dust or foreign objects
   - Replug Type-C cable

.. warning::
   Do not use low-quality power adapters - may cause device damage or safety hazards.

.. _hardware-other-issues:

Other Hardware Issues
=====================

.. _hardware-breadboard-contact:

Breadboard Poor Contact
------------------------

**Symptoms**: Device works unstably, intermittent

**Solutions**:

- Check if all modules and jumper wires are firmly inserted
- Try replugging all connections
- Replace breadboard if necessary

.. _hardware-overheating:

Component Overheating
----------------------

**Symptoms**: ESP32S3 or other modules heating severely

**Solutions**:

- Check for short circuit situations
- Confirm jumper wire connections are correct
- Improve heat dissipation conditions, avoid using in enclosed spaces
- If continues to overheat, disconnect power and check hardware connections

.. danger::
   If you notice components smoking or smell burning, immediately disconnect power! This may indicate serious hardware failure.
