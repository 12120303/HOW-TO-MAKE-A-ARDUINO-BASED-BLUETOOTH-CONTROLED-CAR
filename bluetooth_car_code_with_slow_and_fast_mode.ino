
char data = 0;


int dir1PinA = 9;
int dir2PinA = 10;
int speedPinA = 2; 

int dir1PinB = 4;
int dir2PinB = 5;
int speedPinB = 3; 

void setup() {  
Serial.begin(9600);



pinMode(dir1PinA,OUTPUT);
pinMode(dir2PinA,OUTPUT);
pinMode(speedPinA,OUTPUT);
pinMode(dir1PinB,OUTPUT);
pinMode(dir2PinB,OUTPUT);
pinMode(speedPinB,OUTPUT);
}
void loop() 
{if(Serial.available() > 0) 
 { data = Serial.read(); 
 Serial.print(data);  
Serial.print("\n"); 
if(data == '1'){  
analogWrite(speedPinA, 155); 
digitalWrite(dir1PinA, LOW);
digitalWrite(dir2PinA, HIGH);
analogWrite(speedPinB, 155);
digitalWrite(dir1PinB, LOW);
digitalWrite(dir2PinB, HIGH);}
else if(data == '6'){  
analogWrite(speedPinA, 155);
digitalWrite(dir1PinA, HIGH);
digitalWrite(dir2PinA, LOW);
analogWrite(speedPinB, 155);
digitalWrite(dir1PinB, HIGH);
digitalWrite(dir2PinB, LOW);}
else if(data == '7'){  
analogWrite(speedPinA, 255); 
digitalWrite(dir1PinA, LOW);
digitalWrite(dir2PinA, HIGH);
analogWrite(speedPinB, 255);
digitalWrite(dir1PinB, LOW);
digitalWrite(dir2PinB, HIGH);}
else if(data == '3') { 
analogWrite(speedPinA, 0);
digitalWrite(dir1PinA, LOW);
digitalWrite(dir2PinA, HIGH);
analogWrite(speedPinB, 0);
digitalWrite(dir1PinB, LOW);
digitalWrite(dir2PinB, HIGH);}
else if(data == '2')  {
analogWrite(speedPinA, 155);
digitalWrite(dir1PinA, LOW);
digitalWrite(dir2PinA, HIGH);
analogWrite(speedPinB, 155);
digitalWrite(dir1PinB, HIGH);
digitalWrite(dir2PinB, LOW);}
else if(data == '8')  {
analogWrite(speedPinA, 255);
digitalWrite(dir1PinA, HIGH);
digitalWrite(dir2PinA, LOW);
analogWrite(speedPinB, 255);
digitalWrite(dir1PinB, HIGH);
digitalWrite(dir2PinB, LOW);}
else if(data == '4')  {
analogWrite(speedPinA, 255);
digitalWrite(dir1PinA, LOW);
digitalWrite(dir2PinA, HIGH);
analogWrite(speedPinB, 255);
digitalWrite(dir1PinB, HIGH);
digitalWrite(dir2PinB, LOW);}
else if(data == '5'){
analogWrite(speedPinA, 255);
digitalWrite(dir1PinA, HIGH);
digitalWrite(dir2PinA, LOW);
analogWrite(speedPinB, 255);
digitalWrite(dir1PinB, LOW);
digitalWrite(dir2PinB, HIGH);}
else if(data == '9'){
analogWrite(speedPinA, 155);
digitalWrite(dir1PinA, HIGH);
digitalWrite(dir2PinA, LOW);
analogWrite(speedPinB, 155);
digitalWrite(dir1PinB, LOW);
digitalWrite(dir2PinB, HIGH);}

 }
  
         }
