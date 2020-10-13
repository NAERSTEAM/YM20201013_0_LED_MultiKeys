//OCT 13 2020 T.I. added sample "3 keys"
//OCT 13 2020 T.I. added sample "2 keys"
//OCT 13 2020 T.I. created this file.

int key_0=3;
int key_1=4;
int key_2=5;

int led_0=11;
int led_1=12;
int led_2=13;

void setup() {
  // put your setup code here, to run once:
  pinMode(key_0,INPUT_PULLUP);
  pinMode(key_1,INPUT_PULLUP);
  pinMode(key_2,INPUT_PULLUP);
  pinMode(led_0,OUTPUT);
  pinMode(led_1,OUTPUT);
  pinMode(led_2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(LOW==digitalRead(key_0))
  {
    digitalWrite(led_0,HIGH);

  }
  else
  {
    digitalWrite(led_0,LOW);

  }

  if(LOW==digitalRead(key_1))
  {
    digitalWrite(led_1,HIGH);
  }
  else
  {
    digitalWrite(led_1,LOW);
  }

  if(LOW==digitalRead(key_2))
  {
    digitalWrite(led_2,HIGH);
  }
  else
  {
    digitalWrite(led_2,LOW);
  }


  
}
