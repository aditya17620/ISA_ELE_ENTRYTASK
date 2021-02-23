ISA ENTRYTASK
I opted to make a small circuit to indicate the user, the distance from an obstacle in a given direction using a LED light.
 

Materials used:
•	Arduino board – a microcontroller to control inputs from the sensor and outputs to the LED, suitable for simple projects.
•	HC-SR04 ultrasonic sensor – A n ultrasonic sensor to measure the distance from obstacles in a given direction. It uses ultrasonic waves as its medium and returns the time it took for the waves to hit the obstacle and come back, which we can use to find out the distance.
•	RGB LED – to indicate the degree of distance to the user in the form of red, yellow, and green.
•	Cables – to connect the sensor and the LED to the Arduino board.
•	9V power supply to power the board and the components along with it.

Project explanation:
The HC-SR04 board is connected to the and board. Only one variable is used for the project (dist). The ultrasonic sensor is used to send waves through the TRIGGER pin and receive the reflected waves through the ECHO pin. We can calculate the distance using this data by multiplying it with 0.0001723 to get the distance in meters.
After getting the distance, we can then if-else conditions to display the appropriate colors on the LED. 
	Red if obstacle is within a meter
	Yellow if obstacle is between 1 and 2 meters
	Red if obstacle is beyond 3 meters.
