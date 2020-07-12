const int buzzer = 11;

const int trigpin_1=9;
const int echopin_1=10;

const int trigpin_2=6;
const int echopin_2=7;

const int trigpin_3=2;
const int echopin_3=3;

long duration_1;
int distance_1;

long duration_2;
int distance_2;

long duration_3;
int distance_3;

void setup() 
{
  pinMode(buzzer, OUTPUT);
  
  pinMode(trigpin_1,OUTPUT);
  pinMode(echopin_1,INPUT);
  
  pinMode(trigpin_2,OUTPUT);
  pinMode(echopin_2,INPUT);

  pinMode(trigpin_3,OUTPUT);
  pinMode(echopin_3,INPUT);
  
  digitalWrite(buzzer,LOW);
  
  Serial.begin(9600);
}

void loop() 
{
  digitalWrite(trigpin_1,LOW);
  delay(100);
  digitalWrite(trigpin_1,HIGH);
  delay(1000);
  digitalWrite(trigpin_1,LOW);
  duration_1=pulseIn(echopin_1,HIGH);
  distance_1=duration_1*0.034/2;
  Serial.print("distance_1 : ");
  Serial.println(distance_1);
  if(distance_1<10)
  {
    digitalWrite(buzzer,HIGH);
  }
  else
  {
    digitalWrite(buzzer,LOW);
  }
  

  digitalWrite(trigpin_2,LOW);
  delay(100);
  digitalWrite(trigpin_2,HIGH);
  delay(1000);
  digitalWrite(trigpin_2,LOW);
  duration_2=pulseIn(echopin_2,HIGH);
  distance_2=duration_2*0.034/2;
  Serial.print("distance_2 : ");
  Serial.println(distance_2);
  if(distance_2<10)
  {
    digitalWrite(buzzer,HIGH);
  }
  else
  {
    digitalWrite(buzzer,LOW);
  }

  
  digitalWrite(trigpin_3,LOW);
  delay(100);
  digitalWrite(trigpin_3,HIGH);
  delay(1000);
  digitalWrite(trigpin_3,LOW);
  duration_3=pulseIn(echopin_3,HIGH);
  distance_3=duration_3*0.034/2;
  Serial.print("distance_3 : ");
  Serial.println(distance_3);
  if(distance_3<10)
  {
    digitalWrite(buzzer,HIGH);
  }
  else
  {
    digitalWrite(buzzer,LOW);
  }

}
