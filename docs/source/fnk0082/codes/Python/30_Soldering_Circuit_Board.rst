##############################################################################
Chapter Soldering Circuit Board
##############################################################################

Project Soldering a Buzzer
*********************************************

We have tried to use a buzzer in a previous chapter, and now we will solder a circuit that when the button is pressed, the buzzer sounds.

This circuit does not need programming and can work when it is powered on. And when the button is not pressed, there is no power consumption.

You can install it on your bike, bedroom door or any other places where it is needed.

Component List
========================

+------------------+----------------------+------------------+----------------+
| Pin header x2    | LED x1               | Resistor 220Ω x1 | Push button x1 |
|                  |                      |                  |                |
| |Chapter34_00|   | |Chapter34_01|       | |Chapter01_04|   | |Chapter02_02| |
+------------------+----------------------+------------------+----------------+
| Active buzzer x1 | AA Battery Holder x1                                     |
|                  |                                                          |
| |Chapter07_01|   | |Chapter34_02|                                           |
+------------------+----------------------------------------------------------+

.. |Chapter34_00| image:: ../_static/imgs/34_Soldering_Circuit_Board/Chapter34_00.png
.. |Chapter34_01| image:: ../_static/imgs/34_Soldering_Circuit_Board/Chapter34_01.png
.. |Chapter34_02| image:: ../_static/imgs/34_Soldering_Circuit_Board/Chapter34_02.png
.. |Chapter01_04| image:: ../_static/imgs/1_LED/Chapter01_04.png
.. |Chapter02_02| image:: ../_static/imgs/2_Button_&_LED/Chapter02_02.png
.. |Chapter07_01| image:: ../_static/imgs/7_Buzzer/Chapter07_01.png

Circuit
=======================

We will solder the following circuit on the main board.

.. list-table::
   :width: 100%
   :header-rows: 1
   :align: center
   
   * -  Schematic diagram
     -  Hardware connection. 
      
        If you need any support, please feel free to 
        
        contact us via: support@freenove.com
 	
   * -  |Chapter34_03|
     -  |Chapter34_04|
 
.. |Chapter34_03| image:: ../_static/imgs/34_Soldering_Circuit_Board/Chapter34_03.png
.. |Chapter34_04| image:: ../_static/imgs/34_Soldering_Circuit_Board/Chapter34_04.png

Soldering the Circuit 
=============================

Insert the components on the main board and solder the circuit on its back.

.. image:: ../_static/imgs/34_Soldering_Circuit_Board/Chapter34_05.png
    :align: center

rendering after soldering:

.. list-table::
   :width: 100%
   :header-rows: 1
   :align: center
   
   * -  Front
     -  Back
 	
   * -  |Chapter34_06|
     -  |Chapter34_07|
 
.. |Chapter34_06| image:: ../_static/imgs/34_Soldering_Circuit_Board/Chapter34_06.png
.. |Chapter34_07| image:: ../_static/imgs/34_Soldering_Circuit_Board/Chapter34_07.png

Testing circuit
==========================

Connect the circuit board to power supply (3~5V). You can use ESP32-S3 board or battery box as the power supply.

.. image:: ../_static/imgs/34_Soldering_Circuit_Board/Chapter34_08.png
    :align: center

Press the push button after connecting the power, and then the buzzer will make a sound.

Project Soldering a Flowing Water Light
*****************************************************

From previous chapter, we have learned to make a flowing water light with LED. Now, we will solder a circuit board, and use the improved code to make a more interesting flowing water light.

Component List
==============================

.. list-table::
   :width: 100%
   :header-rows: 1
   :align: center
   
   * -  Pin header x5
     -  Resistor 220Ω x8
     -  LED x1
     -  74HC595 x1
 	
   * -  |Chapter34_09|
     -  |Chapter34_10|
     -  |Chapter34_11|
     -  |Chapter34_12|

.. |Chapter34_09| image:: ../_static/imgs/34_Soldering_Circuit_Board/Chapter34_09.png
.. |Chapter34_10| image:: ../_static/imgs/34_Soldering_Circuit_Board/Chapter34_10.png
.. |Chapter34_11| image:: ../_static/imgs/34_Soldering_Circuit_Board/Chapter34_11.png
.. |Chapter34_12| image:: ../_static/imgs/34_Soldering_Circuit_Board/Chapter34_12.png

Circuit
===============================

Solder the following circuit on the main board.

.. list-table::
   :width: 100%
   :header-rows: 1
   :align: center
   
   * -  Schematic diagram
     -  Hardware connection. 
      
        If you need any support, please feel free to 
        
        contact us via: support@freenove.com
 	
   * -  |Chapter34_13|
     -  |Chapter34_14|
 
.. |Chapter34_13| image:: ../_static/imgs/34_Soldering_Circuit_Board/Chapter34_13.png
.. |Chapter34_14| image:: ../_static/imgs/34_Soldering_Circuit_Board/Chapter34_14.png

Soldering the Circuit 
============================

Insert the components on the main board and solder the circuit on its back.

.. image:: ../_static/imgs/34_Soldering_Circuit_Board/Chapter34_15.png
    :align: center

Rendering after soldering:

.. list-table::
   :width: 100%
   :header-rows: 1
   :align: center
   
   * -  Front
     -  Back
 	
   * -  |Chapter34_16|
     -  |Chapter34_17|
 
.. |Chapter34_16| image:: ../_static/imgs/34_Soldering_Circuit_Board/Chapter34_16.png
.. |Chapter34_17| image:: ../_static/imgs/34_Soldering_Circuit_Board/Chapter34_17.png

Connecting the Circuit
============================

Connect the board to ESP32-S3 with jumper wire in the following way.

.. image:: ../_static/imgs/34_Soldering_Circuit_Board/Chapter34_18.png
    :align: center

Code
============================

The following is the program code:

.. literalinclude:: ../../../freenove_Kit/Python/Python_Codes/14.1_Flowing_Water_Light/Flowing_Water_Light.py
    :linenos: 
    :language: python
    :dedent: