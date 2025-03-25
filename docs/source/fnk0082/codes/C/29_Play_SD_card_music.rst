##############################################################################
Chapter Play SD card music
##############################################################################

In the previous study, we have learned how to use the SD card, and then we will learn to play the music in the SD card.

Project SDMMC Music
******************************

In this project, we will read an mp3 file from an SD card, decode it through ESP32-S3, and use a speaker to play it.

Component List
=============================

+-------------------+---------------------------------+-------------------+
| ESP32-S3 WROOM x1 | USB cable x1                    | SDcard x1         |
|                   |                                 |                   |
| |Chapter00_00|    | |Chapter00_01|                  | |Chapter28_01|    |
+-------------------+---------------------------------+-------------------+
| Micro USB Wire x1 | NPN transistorx1                | Speaker           |
|                   |                                 |                   |
|                   | (S8050)                         |                   |
|                   |                                 |                   |
| |Chapter08_00|    | |Chapter07_00|                  | |Chapter29_00|    |
+-------------------+---------------------------------+-------------------+
| Diode x1          | Resistor 1kΩ x1                 | Capacitor 10uF x1 |
|                   |                                 |                   |
| |Chapter17_02|    | |Chapter07_11|                  | |Chapter29_01|    |
+-------------------+---------------------------------+-------------------+
| Jumper F/M x4     | SDcard reader x1 (random color)                     |
|                   |                                                     |
| Jumper F/F x2     |                                                     |
|                   |                                                     |
| |Chapter24_07|    | |Chapter28_00|                                      |
|                   |                                                     |
|                   | :red:`(Not a USB flash drive.)`                     |
+-------------------+-----------------------------------------------------+

.. |Chapter08_00| image:: ../_static/imgs/8_Serial_Communication/Chapter08_00.png
.. |Chapter07_11| image:: ../_static/imgs/7_Buzzer/Chapter07_11.png
.. |Chapter07_00| image:: ../_static/imgs/7_Buzzer/Chapter07_00.png
.. |Chapter00_00| image:: ../_static/imgs/0_LED/Chapter00_00.png
.. |Chapter00_01| image:: ../_static/imgs/0_LED/Chapter00_01.png
.. |Chapter28_00| image:: ../_static/imgs/28_Read_and_Write_the_SDcard/Chapter28_00.png
.. |Chapter28_01| image:: ../_static/imgs/28_Read_and_Write_the_SDcard/Chapter28_01.png
.. |Chapter29_00| image:: ../_static/imgs/29_Play_SD_card_music/Chapter29_00.png
.. |Chapter29_01| image:: ../_static/imgs/29_Play_SD_card_music/Chapter29_01.png
.. |Chapter24_07| image:: ../_static/imgs/24_Hygrothermograph_DHT11/Chapter24_07.png
.. |Chapter17_02| image:: ../_static/imgs/17_Relay_&_Motor/Chapter17_02.png

Circuit
==============================

.. list-table::
   :width: 100%
   :align: center
   
   * -  Schematic diagram
   * -  |Chapter29_02|
   * -  Please note that before connecting the USB cable, please put the music into the SD 
        
        card and insert the SD card into the card slot on the back of the ESP32-S3.

        |Chapter29_03|
   * -  Hardware connection. 
       
        :red:`If you need any support, please contact us via:` support@freenove.com
   * -  |Chapter29_04|

.. |Chapter29_02| image:: ../_static/imgs/29_Play_SD_card_music/Chapter29_02.png
.. |Chapter29_03| image:: ../_static/imgs/29_Play_SD_card_music/Chapter29_03.png
.. |Chapter29_04| image:: ../_static/imgs/29_Play_SD_card_music/Chapter29_04.png

Sketch
===========================

How to install the library
-----------------------------

In this project, we will use the ESP8266Audio.zip library to decode the audio files in the SD card, and then output the audio signal through GPIO. If you have not installed this library, please follow the steps below to install it.

Open arduino -> Sketch -> Include library -> Add .ZIP Library. 

.. image:: ../_static/imgs/29_Play_SD_card_music/Chapter29_05.png
    :align: center

In the new pop-up window, select " **Freenove_Ultimate_Starter_Kit_for_ESP32_S3\\C\\Libraries\\ESP8266Audio.zip** ". Then click "Open".

.. image:: ../_static/imgs/29_Play_SD_card_music/Chapter29_06.png
    :align: center

Sketch_PlayMP3FromSD
------------------------------------

We placed a folder called "music" in:

**Freenove_Ultimate_Starter_Kit_for_ESP32_S3\\Sketches\\Sketch_29.1_PlayMP3FromSD**

User needs to copy this folder to SD card.

.. image:: ../_static/imgs/29_Play_SD_card_music/Chapter29_07.png
    :align: center

Click upload.

.. image:: ../_static/imgs/29_Play_SD_card_music/Chapter29_08.png
    :align: center

Compile and upload the code to the ESP32-S3 WROOM and open the serial monitor. ESP32-S3 takes a few seconds to initialize the program. When you see the message below, it means that ESP32-S3 has started parsing the mp3 in sd and started playing music through Pin.

.. image:: ../_static/imgs/29_Play_SD_card_music/Chapter29_09.png
    :align: center

The following is the program code:

.. literalinclude:: ../../../freenove_Kit/C/Sketches/Sketch_29.1_PlayMP3FromSD/Sketch_29.1_PlayMP3FromSD.ino
    :linenos: 
    :language: c
    :dedent:

Add music decoding header files and SD card drive files.

.. literalinclude:: ../../../freenove_Kit/C/Sketches/Sketch_29.1_PlayMP3FromSD/Sketch_29.1_PlayMP3FromSD.ino
    :linenos: 
    :language: c
    :lines: 1-8
    :dedent:

Define the drive pins for SD card. Note that the SD card driver pins cannot be modified.

.. literalinclude:: ../../../freenove_Kit/C/Sketches/Sketch_29.1_PlayMP3FromSD/Sketch_29.1_PlayMP3FromSD.ino
    :linenos: 
    :language: c
    :lines: 10-12
    :dedent:

Apply for audio decoding class object.

.. literalinclude:: ../../../freenove_Kit/C/Sketches/Sketch_29.1_PlayMP3FromSD/Sketch_29.1_PlayMP3FromSD.ino
    :linenos: 
    :language: c
    :lines: 14-18
    :dedent:

Set the audio file source and associate it with the decoder. Initialize the audio output pin and set the volume to 2.

.. literalinclude:: ../../../freenove_Kit/C/Sketches/Sketch_29.1_PlayMP3FromSD/Sketch_29.1_PlayMP3FromSD.ino
    :linenos: 
    :language: c
    :lines: 53-62
    :dedent:

Determine whether the mp3 player is finished. If it is playing, continue playing. If it is finished, print a message.

.. literalinclude:: ../../../freenove_Kit/C/Sketches/Sketch_29.1_PlayMP3FromSD/Sketch_29.1_PlayMP3FromSD.ino
    :linenos: 
    :language: c
    :lines: 67-72
    :dedent:

.. include:: 29_2_Play_SD_card_music.rst