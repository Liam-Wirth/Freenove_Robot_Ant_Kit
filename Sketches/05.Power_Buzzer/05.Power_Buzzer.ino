/**********************************************************************
  Product     : Freenove Robot Ant Kit
  Description : Test the battery level and the buzzer
  Auther      : www.freenove.com
  Modification: 2021/04/20
**********************************************************************/
#include "External_Devices.h"

void setup() {
  Serial.begin(9600);
  Power_Setup();  //Battery pin initialization
  Buzzer_Setup(); //Buzzer pin initialization
  delay(1000);
  Buzzer_Alarm(); //Buzzer control function
  Buzzer_Alert(98); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(98); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(98); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(98); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(98); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(98); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(98); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(98); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(98); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(139); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(139); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(139); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(294); delay(207); 
Buzzer_Alert(277); delay(207); 
Buzzer_Alert(294); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(82); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(82); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(82); delay(207); 
Buzzer_Alert(139); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(139); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(110); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(294); delay(207); 
Buzzer_Alert(277); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(294); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(294); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(208); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(175); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(175); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(208); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(175); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(175); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(208); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(131); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(131); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(156); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(156); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(156); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(156); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(131); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(110); delay(207); 
Buzzer_Alert(98); delay(207); 
Buzzer_Alert(92); delay(207); 
Buzzer_Alert(131); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(131); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(131); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(131); delay(207); 
Buzzer_Alert(92); delay(207); 
Buzzer_Alert(131); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(131); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(131); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(131); delay(207); 
Buzzer_Alert(98); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(175); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(175); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(175); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(98); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(175); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(175); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(175); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(98); delay(207); 
Buzzer_Alert(131); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(131); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(131); delay(207); 
Buzzer_Alert(98); delay(207); 
Buzzer_Alert(131); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(131); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(131); delay(207); 
Buzzer_Alert(98); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(98); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(98); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(131); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(110); delay(207); 
Buzzer_Alert(98); delay(207); 
Buzzer_Alert(92); delay(207); 
Buzzer_Alert(82); delay(207); 
Buzzer_Alert(73); delay(207); 
Buzzer_Alert(69); delay(207); 
Buzzer_Alert(110); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(69); delay(207); 
Buzzer_Alert(110); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(65); delay(207); 
Buzzer_Alert(110); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(65); delay(207); 
Buzzer_Alert(110); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(65); delay(207); 
Buzzer_Alert(110); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(277); delay(207); 
Buzzer_Alert(294); delay(415); 
Buzzer_Alert(294); delay(413); 
Buzzer_Alert(110); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(131); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(294); delay(207); 
Buzzer_Alert(311); delay(207); 
Buzzer_Alert(294); delay(207); 
Buzzer_Alert(277); delay(207); 
Buzzer_Alert(294); delay(207); 
Buzzer_Alert(294); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(110); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(131); delay(207); 
Buzzer_Alert(73); delay(207); 
Buzzer_Alert(110); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(131); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(98); delay(207); 
Buzzer_Alert(110); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(73); delay(207); 
Buzzer_Alert(98); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(277); delay(207); 
Buzzer_Alert(233); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(233); delay(207); 
Buzzer_Alert(233); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(208); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(139); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(110); delay(207); 
Buzzer_Alert(139); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(277); delay(207); 
Buzzer_Alert(294); delay(207); 
Buzzer_Alert(277); delay(207); 
Buzzer_Alert(294); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(110); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(139); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(110); delay(207); 
Buzzer_Alert(98); delay(207); 
Buzzer_Alert(92); delay(207); 
Buzzer_Alert(82); delay(207); 
Buzzer_Alert(73); delay(415); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(131); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(131); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(131); delay(207); 
Buzzer_Alert(123); delay(207); 
Buzzer_Alert(110); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(294); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(165); delay(207); 
Buzzer_Alert(175); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(185); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(196); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(208); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(233); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(277); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(294); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(311); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(330); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(349); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(370); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(392); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(392); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(392); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(392); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(392); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(392); delay(207); 
Buzzer_Alert(247); delay(207); 
Buzzer_Alert(392); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(392); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(392); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(392); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(392); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(392); delay(207); 
Buzzer_Alert(220); delay(207); 
Buzzer_Alert(370); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(370); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(370); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(370); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(147); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(370); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(370); delay(207); 
Buzzer_Alert(262); delay(207); 
Buzzer_Alert(98); delay(410); 
Buzzer_Alert(247); delay(410); 
Buzzer_Alert(392); delay(5830); 

}

void loop() {
  //Get the battery voltage every 3s and print it out
  Power_Get_Data();
}
