##############################################################################
Chapter Thermistor
##############################################################################

In this chapter, we will learn about thermistors which are another kind of resistor

Project Thermometer
***********************************

A thermistor is a type of resistor whose resistance value is dependent on temperature and changes in temperature. Therefore, we can take advantage of this characteristic to make a thermometer.

Component List
================================

+-----------------------------+--------------------------+
| ESP32-S3 WROOM x1           | GPIO Extension Board x1  |
|                             |                          |
| |Chapter01_00|              | |Chapter01_01|           |
+-----------------------------+--------------------------+
| Breadboard x1                                          |
|                                                        |
| |Chapter01_02|                                         |
+-------------------+------------------+-----------------+
| Thermistor x1     | Resistor 10kΩ x1 | Jumper M/M x3   |
|                   |                  |                 |
| |Chapter13_00|    | |Chapter02_01|   | |Chapter01_05|  |
+-------------------+------------------+-----------------+

.. |Chapter01_00| image:: ../_static/imgs/1_LED/Chapter01_00.png
.. |Chapter01_01| image:: ../_static/imgs/1_LED/Chapter01_01.png
.. |Chapter01_02| image:: ../_static/imgs/1_LED/Chapter01_02.png
.. |Chapter02_01| image:: ../_static/imgs/2_Button_&_LED/Chapter02_01.png
.. |Chapter01_05| image:: ../_static/imgs/1_LED/Chapter01_05.png
.. |Chapter13_00| image:: ../_static/imgs/13_Thermistor/Chapter13_00.png

Component knowledge
=============================

Thermistor
-----------------------------

A thermistor is a temperature sensitive resistor. When it senses a change in temperature, the resistance of the thermistor will change. We can take advantage of this characteristic by using a thermistor to detect temperature intensity. A thermistor and its electronic symbol are shown below.

.. image:: ../_static/imgs/13_Thermistor/Chapter13_01.png
    :align: center

The relationship between resistance value and temperature of a thermistor is:

.. image:: ../_static/imgs/13_Thermistor/Chapter13_02.png
    :align: center

Where:

    Rt is the thermistor resistance under T2 temperature;

    **R** is the nominal resistance of thermistor under T1 temperature;

    **EXP[n]** is nth power of E;

    **B** is for thermal index;

    T1, T2 is Kelvin temperature (absolute temperature). Kelvin temperature=273.15 + Celsius temperature. 

For the parameters of the thermistor, we use: B=3950, R=10k, T1=25.

The circuit connection method of the thermistor is similar to photoresistor, as the following:

.. image:: ../_static/imgs/13_Thermistor/Chapter13_03.png
    :align: center

We can use the value measured by the ADC converter to obtain the resistance value of thermistor, and then we can use the formula to obtain the temperature value.

Therefore, the temperature formula can be derived as:

.. image:: ../_static/imgs/13_Thermistor/Chapter13_04.png
    :align: center

Circuit
=====================================

The circuit of this project is similar to the one in the last chapter. The only difference is that the photoresistor is replaced by the thermistor.

.. list-table::
   :width: 100%
   :header-rows: 1 
   :align: center
   
   * -  Schematic diagram
   * -  |Chapter13_05|
   * -  Hardware connection. 
       
        :red:`If you need any support, please contact us via:` support@freenove.com
   * -  |Chapter13_06|
    
.. |Chapter13_05| image:: ../_static/imgs/13_Thermistor/Chapter13_05.png
.. |Chapter13_06| image:: ../_static/imgs/13_Thermistor/Chapter13_06.png

Sketch
=============================

Sketch_Thermometer
--------------------------------

.. image:: ../_static/imgs/13_Thermistor/Chapter13_07.png
    :align: center

Download the code to ESP32-S3 WROOM, the terminal window will display the current ADC value, voltage value and temperature value. Try to "pinch" the thermistor (without touching the leads) with your index finger and thumb for a brief time, you should see that the temperature value increases. 

.. image:: ../_static/imgs/13_Thermistor/Chapter13_08.png
    :align: center

:red:`If you have any concerns, please contact us via:` support@freenove.com

The following is the code:

.. literalinclude:: ../../../freenove_Kit/C/Sketches/Sketch_13.1_Thermometer/Sketch_13.1_Thermometer.ino
    :linenos: 
    :language: c
    :dedent:

In the code, GPIO1 is connected to the thermistor circuit. ESP32-S3 reads the ADC value of GPIO1, calculates the voltage and resistance value of the thermistor according to Ohm's law, and finally calculates the temperature value perceived by the thermistor according to the formula.