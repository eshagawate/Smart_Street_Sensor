# Smart Street Light System

## Brief on the Project

Project Type: Smart Street Light System using Arduino and IR Sensor

Problem to Address: Inefficient and wasteful energy consumption in street lighting systems.

Motivation: 

1. Energy Efficiency: Traditional Street lighting systems operate on fixed schedules or rely on ambient light sensors, leading to energy wastage during daytime or when sufficient natural light is available. By incorporating smart sensors and automation, we can optimize energy consumption and reduce costs.

2. Environmental Impact: Excessive energy consumption contributes to greenhouse gas emissions and environmental degradation. Implementing an intelligent street light system can help conserve energy resources, reduce carbon footprint, and promote sustainability.

3. Cost Savings: Street lighting is a significant expense for municipalities and organizations. By deploying a smart street light system, energy consumption can be efficiently managed, leading to cost savings on electricity bills and maintenance.

4. Safety and Security: Adequate lighting is essential for public safety and crime prevention. Smart street lights equipped with motion sensors can detect human presence and illuminate the surroundings, enhancing visibility and deterring potential criminal activities.

5. Data-Driven Insights: Smart Street light systems can collect valuable data on energy consumption, environmental conditions, and usage patterns. This data can be analyzed to optimize maintenance schedules, predict failures, and make informed decisions for future infrastructure planning.

By addressing the problem of inefficient energy consumption in street lighting systems through the implementation of a smart street light system using Arduino and IR sensors, we can achieve energy efficiency, reduce environmental impact, save costs, enhance safety, and gain valuable insights for effective urban planning.


### Previous Work:

Street Light System

Introduction:

Smart street lights are a modern and intelligent solution for illuminating public roads, sidewalks, and other outdoor areas. These lighting systems incorporate advanced technologies to enhance energy efficiency, reduce maintenance costs, improve safety, and enable intelligent control and management. Smart Street Light Project using Arduino, LDR, and IR Sensors- LDR “Light dependent resistor” and IR “Infrared Sensor” are among the most widely used electronics components. 
Traditional street lights often operate on fixed schedules or photocells, resulting in inefficient energy consumption and limited control options. In contrast, smart street lights leverage various components and features to provide a more efficient and adaptable lighting solution. 
With smart street light system, we can greatly reduce the energy cost and moreover smart street lights more efficiently manage electricity with lower chances of the automatic street light system overheating and risk of accidents is also minimized. Instead of turning ON the street lights for the entire night, we can design a low cost and efficient smart street light system using the Arduino, IR sensors or Ultrasonic Sensors, and some other basic electronics components.


### Components Required:

•	One 380Ω resistor
•	Light depending resistor LDR
•	Arduino Uno
•	One LED
•	Jumper Wires
•	Arduino Uno


### Circuit Setup:

 ![image](https://github.com/eshagawate/Smart_Street_Sensor/assets/115074194/ec63e269-b80f-4def-a9ea-aeda4d51bc5f)

Fig 1. Circuit connections on breadboard

 ![image](https://github.com/eshagawate/Smart_Street_Sensor/assets/115074194/d07d2ae3-6c99-4e71-9630-4e31772f0bd4)

Fig 2. Connections on the Arduino Uno board

Hardware Connections:
Connect the LDR to the 5V of the Arduino.
Connect one terminal of LDR to the A0 pin of Arduino for the analog input of intensity of the light. 
Connect the terminal of both LDR and LED with the ground of the Arduino.
Connect the positive terminal of the LED to the digital pin number 7 of the Arduino. You can use any digital pin according to the programming.
Program :
int ldrPin = A0;
int led = 7;
int threshold = 30;

void setup() {
  Serial.begin(9600);//9600 bits per sec
  pinMode(led,OUTPUT);

}

void loop() {
  int data = analogRead(ldrPin);
  Serial.print("\n");
  Serial.print("Light Sensor");
  Serial.print("Value = ");
  Serial.print(data);
  delay(1000);
  if(data < threshold)
  {
    digitalWrite(led, HIGH);
    //delay(10);
    
  }
  else{
    digitalWrite(led, LOW);
  }
}

### Output:

 ![image](https://github.com/eshagawate/Smart_Street_Sensor/assets/115074194/3f81bbc2-f0f5-4f52-9224-529f67855506)

Fig 3. The intensity of the light detected is displayed in the serial monitor.

 ![image](https://github.com/eshagawate/Smart_Street_Sensor/assets/115074194/a0316938-b7f7-4eb4-b3dd-3a17f90e0e6a)

Fig 4. The glowing of LED after the intensity of light goes below 30.


## Deliverables of the Project

## Smart Street Light System

### Introduction:
The advancement of technology has paved the way for smarter and more efficient solutions in various domains, including street lighting systems. Traditional street lighting setups often operate on fixed schedules or rely on ambient light sensors, resulting in unnecessary energy consumption and increased costs. To address these challenges, the concept of a Smart Street Light Sensor system using Arduino and IR (Infrared) sensors has emerged.
The primary objective of this innovative system is to optimize energy usage, reduce environmental impact, enhance safety, and save costs through intelligent automation. By incorporating Arduino microcontrollers and IR sensors, this solution enables efficient control and monitoring of street lights based on real-time data.
Arduino serves as the brain of the system, providing the necessary processing power and connectivity to control and communicate with the street lights. IR sensors, known for their ability to detect motion and human presence, play a vital role in determining when to switch on/off or adjust the brightness levels of the street lights.
The motivation behind the development of this system arises from several key factors. First and foremost, energy efficiency is a crucial consideration. By integrating IR sensors, the system can detect motion and human presence, enabling the lights to illuminate the surroundings only when required. During periods of inactivity, the lights can be dimmed or turned off, resulting in significant energy savings.
In addition to energy efficiency, the Smart Street Light Sensor system also offers cost savings. By optimizing energy consumption and maintenance schedules, the system helps reduce electricity bills and minimize maintenance expenses for municipalities and organizations responsible for street lighting.
Another significant advantage is the positive environmental impact. Excessive energy consumption in street lighting contributes to environmental degradation and carbon emissions. By implementing smart sensors and automation, energy wastage can be minimized, leading to a greener and more sustainable urban environment.
Furthermore, the integration of IR sensors enhances safety and security. The system can detect motion and activate the street lights accordingly, ensuring adequate lighting in areas with human presence. This improves visibility for pedestrians, cyclists, and motorists, enhancing overall safety conditions and reducing the risk of accidents or criminal activities.
Overall, the Smart Street Light Sensor system using Arduino and IR sensors represents a promising solution to the challenges faced by traditional street lighting systems. By leveraging the capabilities of Arduino and IR sensors, this system offers energy efficiency, cost savings, environmental sustainability, and improved safety, contributing to the development of smarter and more liveable cities.

### Components Required:

•	Two IR sensors
•	Two 220Ω resistors
•	IR sensor module
•	Light depending resistor LDR
•	One 1 KΩ resistor
•	Arduino Uno
•	Two LEDs

### Information about Components:

1.	IR sensors :
The light sensor module have strong adaptable to the environment, having a pair of infrared transmitter and receiver, transmitter launch a certain frequency infrared, when meet obstacle in the detection direction, the infrared receiver is reflected back by the receiver tube, after processing through the comparator circuit, the green indicator light will illuminate while the signal output interface output digital signal (a low-level signal) can be adjusted via potentiometer knob detection.
The effective distance range 2 ~ 30cm
Working voltage is 3.3V-5V.
The detection range of the sensor can be adjusted by the potentiometer, with little interference, easy to assemble, easy to use features, can be widely used robot obstacle avoidance, obstacle avoidance car assembly line count and black-and-white line tracking and many other occasions.
Parameter:
•	When the module detects an obstacle in front of the signal, the circuit board green indicator light levels while continuing output low signal OUT port, the module detects the distance 2 ~ 30cm, detection angle 35 °, the distance can detect potential control to adjust, adjust potentiometer clockwise, the detection distance increases; counterclockwise adjustment potentiometer, detection distance decreases.
•	The sensor active infrared reflection detection, target reflectivity and shape of the detection distance of the key. The minimum detection distance which black and white max; small area of the object distance is small, a large area from the Grand.
•	The sensor module output port OUT can be directly connected with the microcontroller IO port can also be driven directly to a 5V relay; Connection: VCC-VCC; GND-GND; OUT-IO
•	The comparator using LM393 can compare the values of the sensor
•	3-5V DC power supply for the module. When the power is turned on, the red power indicator light up.


2.	Light dependent Resistor (LDR):
•	Maximum Voltage (V-dc): 150
•	Maximum power consumption (mW): 100
•	Temperature (degree C): – 30 – – +70
•	Peak Spectrum (nm): 560
•	Bright Resistor (10Lux) (K_): 5-10
•	Dark resistance (M_): 0.8

### Circuit Setup:

 ![image](https://github.com/eshagawate/Smart_Street_Sensor/assets/115074194/601e4cba-256e-4def-9671-d47e2a579925)

Fig 1.  Circuit Diagram for Smart Street Light System


 ![image](https://github.com/eshagawate/Smart_Street_Sensor/assets/115074194/7af4d762-d1bf-461e-a5f0-516ccabaf2ab)

Fig 2 (a).  Circuit Setup for Smart Street Light System

 ![image](https://github.com/eshagawate/Smart_Street_Sensor/assets/115074194/4e1ad71d-facc-49c1-8f54-e69797f9a442)

Fig 2 (b).  Circuit Setup for Smart Street Light System


### Hardware Connections:
•	Connect the VCC of both sensors with the 5V of the Arduino
•	Connect the ground of both sensors with the ground of the Arduino
•	Connect the output of the first IR sensor to the digital pin number 2 of the Arduino
•	Connect the output of the second IR sensor to the digital pin number 3 of the Arduino. You can use any digital pin according to the programming.
•	Connect the first led with the digital pin number 5 of the Arduino
•	Connect the second led with the digital pin number 6 of the Arduino

### Program :
int IR1 = 2;

int IR2 = 3;

int LED1 = 5;

int LED2 = 6;

int LDR = A3;

void setup()

{

Serial.begin(9600);

pinMode(LED1, OUTPUT);

pinMode(LED2, OUTPUT);

pinMode(IR1, INPUT);

pinMode(IR2, INPUT);

pinMode(LDR, INPUT);

}

void loop() {

int LDRValue = analogRead(LDR);

Serial.print("sensor = ");

Serial.print(LDRValue);

delay (500);

digitalWrite(LED1, LOW);

digitalWrite(LED2, LOW);

Serial.println("It's Bright Outside; Lights status: OFF");

if (LDRValue< 100 && digitalRead(IR1) == LOW)

{

digitalWrite(LED1, HIGH);

Serial.println("  It's Dark Outside; LED1 Lights status: ON");

}

if (LDRValue< 100 && digitalRead(IR2) == LOW)

{
  digitalWrite(LED2, HIGH);

Serial.println(" It's Dark Outside; LED2 Lights status: ON");

}

}

### Output:

 ![image](https://github.com/eshagawate/Smart_Street_Sensor/assets/115074194/9e2393b9-937e-4487-baf4-029e1692db77)

Fig 3. Serial Monitor on the Arduino IDE

 ![image](https://github.com/eshagawate/Smart_Street_Sensor/assets/115074194/bd5bc83f-41df-4f05-81c4-1200dfbe42ef)

Fig 4.  LED is ON when IR-sensor detects an object in front of it.



### Conclusion:
The Smart Street Light System using Arduino and IR Sensor is a promising solution that addresses the inefficiencies and challenges of traditional street lighting systems. By incorporating intelligent automation and sensor technology, this system offers significant benefits in terms of energy efficiency, cost savings, environmental sustainability, and improved public safety. The utilization of Arduino microcontrollers as the central processing unit provides the necessary intelligence and connectivity to control and monitor the street lights. The IR sensors play a crucial role in detecting motion and human presence, allowing the system to adjust the lighting accordingly, thereby optimizing energy consumption.
Through the implementation of this system, several key advantages can be realized. Firstly, energy efficiency is greatly improved as the lights operate only when needed, leading to reduced energy wastage. This results in substantial cost savings for municipalities and organizations responsible for street lighting. Moreover, the Smart Street Light System contributes to environmental sustainability by minimizing energy consumption and reducing the carbon footprint associated with street lighting. It promotes the efficient use of resources, ultimately leading to a greener and more sustainable urban environment. Enhanced safety is another significant benefit of this system. By incorporating IR sensors, the street lights can detect motion and illuminate specific areas where human presence is detected. This not only improves visibility for pedestrians and motorists but also acts as a deterrent to potential criminal activities, promoting public safety.

Furthermore, the system generates valuable data on energy consumption, usage patterns, and environmental conditions. This data can be leveraged to optimize maintenance schedules, predict failures, and make data-driven decisions for future infrastructure planning and development.

