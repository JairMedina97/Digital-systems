// C++ code
//  LAB Electronica Digital II
//  Jair Medina 


//Etiquetas
//--Inputs
#define LDR_pin A0

//--Outputs
#define led1 2
#define led2 3
#define led3 4
#define led4 5
#define led5 6
#define led6 7
#define led7 8
#define led8 9

#define TIME 10

//--Variables
byte estado = 0;
int  LDR_read = 0;

void setup()
{
  //--Inputs
  pinMode(LDR_pin,INPUT);
  
  //--Outputs
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);

  Serial.begin(9600); 
}




void loop()
{ 
  LDR_read = analogRead(LDR_pin);
    Serial.println(LDR_read);
    TIME;
  if (LDR_read >= 0  && LDR_read <= 114)
  {
    digitalWrite(led1,LOW); //0
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
  }
  else if (LDR_read >= 115  && LDR_read <= 227)
  {
    digitalWrite(led1,HIGH); //1
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
  }
  else if (LDR_read >= 228  && LDR_read <= 341)
  {
    digitalWrite(led1,HIGH); //2
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
  }
  else if (LDR_read >= 342  && LDR_read <= 455)
  {
    digitalWrite(led1,HIGH); //3
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
  }
  else if (LDR_read >= 456  && LDR_read <= 568)
  {
    digitalWrite(led1,HIGH); //4
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
  }
  else if (LDR_read >= 569  && LDR_read <= 682)
  {
    digitalWrite(led1,HIGH); //5
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
  }
  else if (LDR_read >= 683  && LDR_read <= 796)
  {
    digitalWrite(led1,HIGH); //6
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
  }
  else if (LDR_read >= 797  && LDR_read <= 909)
  {
    digitalWrite(led1,HIGH); //7
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    digitalWrite(led8,LOW);
  }
  else if (LDR_read >= 910  && LDR_read <= 1023)
  {
    digitalWrite(led1,HIGH); //8
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    digitalWrite(led8,HIGH);
  }
}
