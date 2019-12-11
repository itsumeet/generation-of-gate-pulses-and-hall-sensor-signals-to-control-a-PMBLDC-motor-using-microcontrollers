# generation-of-gate-pulses-and-hall-sensor-signals-to-control-a-PMBLDC-motor-using-microcontrollers
PMBLDC control

Statement:  Preparation a micro-controller for the generation of Gate-pulse a PM BLDC Motor Drive to be used in Light Electric Vehicle

1. Two numbers of Arduino Micro-controller or any other low-cost micro-controller(we used arduino mega and uno).

2. One micro-controller to be used for the generation of Hall sensors with the representation
   of the case of variable speed. [can be considered as an output hall sensors signals coming from a PM BLDC motor]
   
3. Another micro-controller is to be used to access the generated hall signals Ha, Hb, and Hc, to  
   a. Identify the hall states 
   b. Select the switches of the three-phase voltage source inverter (T1, T2, …. T6) 
   c. Generate the un-modulated Gate-pulses.  
   d. Generate the modulated Gate-pulse
   
4. Vary the width of the Hall-sensor signals to replicate the case of variable speed. For this take a potentiometer input
   to the input pin of the first micro-controller. This will change the width of the Hall sensor signals.  
   
5. Estimate the speed and the generate the rotor angular position in Electrical space.

6. Observe the hall outputs, modulated and unmodulated gate signals in DSO.  
 
Output waveforms on DSO are uploded in the output folder.

