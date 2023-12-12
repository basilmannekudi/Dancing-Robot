
int int1 = 6;
int int2 = 7;
int int3 = 8;
int int4 = 9;
//int pwm = 
int speed = 130;


void setup(){



pinMode(int1, OUTPUT);
pinMode(int2, OUTPUT);
pinMode(int3, OUTPUT);
pinMode(int4, OUTPUT);
//pinMode(pwm, OUTPUT);


// Setting the baud rate of Software Serial Library 
 

 pinMode(LED_BUILTIN,OUTPUT);
 }

void loop(){
delay(15000);
//backword();
//delay(500);
//stop();
//delay(500);
//forword();
//delay(500);
//stop();
//delay(500);
//turnRight();
//delay(500);
//stop();
//delay(500);
//turnLeft();
//delay(500);
//stop();
//delay(500);
//turnRight();
//delay(2000);
Move();
delay(1500);
Rotate();
delay(1500);
Freestyle();
delay(1500);
Freestylem();
stop();
Left();
delay(1850);
stop();
RightBack();
delay(1850);
stop();
delay(10000);
//analogWrite(pwm, speed);
//delay(30);
}

void Move(){
  forword();
  delay(300);
  stop();
  backword();
    delay(300);
  stop();
  }
void Rotate(){
  
 turnLeft();
delay(1850);
stop();
turnRight();
delay(1850);
stop();
  }
void Freestyle()
{
  for(int i=0;i<16;i++)
  {
  Left();
delay(300);
//stop();
Right();
delay(300);
//stop();
RightBack();
delay(300);
//stop();
LeftBack();
delay(300);
//stop();
  }
  }

void Freestylem()
{
  for(int i=0;i<16;i++)
  {
  Right();
delay(300);
//stop();
Left();
delay(300);
//stop();
LeftBack();
delay(300);
//stop();
RightBack();
delay(300);
//stop();
  }
  }
  
void stop(){
    digitalWrite(int1, LOW);
    digitalWrite(int2, LOW); 
    digitalWrite(int3, LOW);
    digitalWrite(int4, LOW);

}

void forword(){
    digitalWrite(int1, LOW);
    digitalWrite(int2, HIGH); 
    digitalWrite(int3, HIGH);
    digitalWrite(int4, LOW);  

}

void backword(){
    digitalWrite(int1, HIGH);
    digitalWrite(int2, LOW); 
    digitalWrite(int3, LOW);
    digitalWrite(int4, HIGH);   

}


void turnLeft(){
    digitalWrite(int1, LOW);
    digitalWrite(int2, HIGH); 
    digitalWrite(int3, LOW);
    digitalWrite(int4, HIGH);  

}

void turnRight(){
    digitalWrite(int1, HIGH);
    digitalWrite(int2, LOW); 
    digitalWrite(int3, HIGH);
    digitalWrite(int4, LOW); 

}
void Right(){
    digitalWrite(int1, LOW);
    digitalWrite(int2, HIGH); 
    digitalWrite(int3, LOW);
    digitalWrite(int4, LOW);  

}

void LeftBack(){
    digitalWrite(int1, LOW);
    digitalWrite(int2, LOW); 
    digitalWrite(int3, LOW);
    digitalWrite(int4, HIGH);  

}

void Left(){
    digitalWrite(int1, LOW);
    digitalWrite(int2, LOW); 
    digitalWrite(int3, HIGH);
    digitalWrite(int4, LOW);  

}

void RightBack(){
    digitalWrite(int1, HIGH);
    digitalWrite(int2, LOW); 
    digitalWrite(int3, LOW);
    digitalWrite(int4, LOW); 

}
