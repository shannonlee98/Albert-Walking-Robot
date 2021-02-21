
// Ardublockly generated sketch
#include <Servo.h>

int delay2;

Servo myServo13;
Servo myServo12;
Servo myServo11;
Servo myServo7;
Servo myServo6;
Servo myServo5;
Servo myServo10;
Servo myServo9;
Servo myServo8;
Servo myServo4;
Servo myServo3;
Servo myServo2;

void setup() {
  myServo13.attach(13);
  myServo12.attach(12);
  myServo11.attach(11);
  myServo7.attach(7);
  myServo6.attach(6);
  myServo5.attach(5);
  myServo10.attach(10);
  myServo9.attach(9);
  myServo8.attach(8);
  myServo4.attach(4);
  myServo3.attach(3);
  myServo2.attach(2);
}

void loop() {
  delay2 = 250;

  myServo13.write(105);
  myServo12.write(35);
  myServo11.write(70);
  myServo7.write(75);
  myServo6.write(145);
  myServo5.write(110);
  myServo10.write(135);
  myServo9.write(145);
  myServo8.write(110);
  myServo4.write(90);
  myServo3.write(55);
  myServo2.write(95);
  delay(delay2);
  myServo4.write(45);
  myServo3.write(35);
  myServo2.write(70);
  delay(delay2);
  myServo13.write(75);
  myServo12.write(35);
  myServo11.write(70);
  myServo7.write(45);
  myServo6.write(145);
  myServo5.write(110);
  myServo10.write(90);
  myServo9.write(125);
  myServo8.write(80);
  myServo4.write(75);
  myServo3.write(35);
  myServo2.write(70);
  delay(delay2);
  myServo10.write(45);
  myServo9.write(145);
  myServo8.write(110);
  delay(delay2);
  myServo13.write(45);
  myServo12.write(35);
  myServo11.write(70);
  myServo7.write(90);
  myServo6.write(125);
  myServo5.write(85);
  myServo10.write(75);
  myServo9.write(145);
  myServo8.write(110);
  myServo4.write(105);
  myServo3.write(35);
  myServo2.write(70);
  delay(delay2);
  myServo7.write(135);
  myServo6.write(145);
  myServo5.write(110);
  delay(delay2);
  myServo13.write(90);
  myServo12.write(55);
  myServo11.write(95);
  myServo7.write(105);
  myServo6.write(145);
  myServo5.write(110);
  myServo10.write(105);
  myServo9.write(145);
  myServo8.write(110);
  myServo4.write(135);
  myServo3.write(35);
  myServo2.write(70);
  delay(delay2);
  myServo13.write(135);
  myServo12.write(35);
  myServo11.write(70);
  delay(delay2);

}
