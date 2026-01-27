.. _troubleshooting:

========================
Troubleshooting
========================

This chapter helps you resolve common issues you may encounter while using the LAFVIN Retro Game Kit.

Overview
========

If you encounter problems during assembly, firmware flashing, or using the gaming console, please follow these troubleshooting steps:

1. **Confirm Hardware Connections** - Check that all modules, jumper wires, and buttons are correctly connected
2. **Check Power Supply** - Ensure you're using an appropriate Type-C power adapter (recommended 5V/2A)
3. **Verify Firmware** - Confirm firmware has been correctly flashed to ESP32S3
4. **Check TF Card** - Ensure TF card is formatted correctly (FAT32) and game files are placed properly

Problem Categories
==================

Based on problem type, please refer to the following sections:

Hardware Issues
---------------

If you encounter the following problems, please refer to :doc:`hardware`:

- Screen not displaying or displaying abnormally
- No audio output
- Buttons not responding
- Cannot recognize TF card
- Power supply issues

Software Issues
---------------

If you encounter the following problems, please refer to :doc:`software`:

- Firmware flashing failure
- Games cannot load
- System running abnormally
- Settings cannot be saved

.. note::
   Before performing any hardware inspection or repair, always disconnect power to avoid hardware damage or personal injury.

Quick Diagnosis Flow
====================

Follow this flow to quickly locate problems:

.. code-block:: text

   Problems after power on?
   │
   ├─ Screen not displaying
   │  └─ Check power → Check screen connection → Reflash firmware
   │
   ├─ No audio
   │  └─ Check amplifier module connection → Check volume settings → Check jumper wires
   │
   ├─ Buttons not responding
   │  └─ Check button installation → Check jumper wire connections → Test buttons
   │
   └─ Cannot recognize TF card
      └─ Check TF card format → Reformat → Check TF card module connection

.. toctree::
   :maxdepth: 2
   :caption: Detailed Troubleshooting Content

   hardware
   software

If none of the above methods resolve your issue, please obtain technical support through the following:

Contact Information
-------------------

- **Technical Support Email**: tech_edu_service@outlook.com

Information to Provide When Submitting Issues
----------------------------------------------

To resolve issues faster, please provide the following information when contacting technical support:

.. list-table::
   :header-rows: 1
   :widths: 40 60

   * - Information Type
     - Description
   * - Product Model
     - LAFVIN Retro Game Kit
   * - Problem Description
     - Detailed description of the problem and symptoms
   * - Reproduction Steps
     - Detailed steps on how to reproduce the problem
   * - Attempted Solutions
     - List troubleshooting steps already tried
   * - Hardware Configuration
     - Information about TF card, power adapter, etc.
   * - Error Messages
     - If there are error prompts, provide complete error information
   * - Photos or Videos
     - If possible, provide photos or videos of the problem
