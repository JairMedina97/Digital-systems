// C++ code
//  LAB Electronica Digital II
//  Jair Medina 

//--Inputs
#define LDR_pin A0


//--Outputs
#define Motor_pin A1
//--Outputs


//--Constantes
#define TIME 10

//--Variables                                    
byte estado = 0;
int  LDR_read = 0;

void setup()
{
  //--Inputs
  pinMode(LDR_pin,INPUT);
  
  //--Outputs
  pinMode(Motor_pin,OUTPUT);
  
  Serial.begin(9600); 
}

void loop()
{ 
    LDR_read = analogRead(LDR_pin);
  //  Serial.println(LDR_read);
    Serial.println(Motor_pin);

  if (LDR_read >= 0  && LDR_read <= 114)
  {    
  analogWrite(Motor_pin, 0);    
  }
  else if (LDR_read >= 115  && LDR_read <= 227)//1
  {    
  analogWrite(Motor_pin,0;    
  }
  else if (LDR_read >= 228  && LDR_read <= 341)//2
  {    
  analogWrite(Motor_pin, 30);    
  }
  else if (LDR_read >= 342  && LDR_read <= 455)//3
  {    
  analogWrite(Motor_pin, 90);    
  }
  else if (LDR_read >= 456  && LDR_read <= 568)//4
  {    
  analogWrite(Motor_pin, 140);    
  }
  else if (LDR_read >= 569  && LDR_read <= 682)//5
  {   
  analogWrite(Motor_pin, 180);    
  }
  else if (LDR_read >= 683  && LDR_read <= 796)//6
  {    
  analogWrite(Motor_pin, 210);    
  }
  else if (LDR_read >= 797  && LDR_read <= 909)//7
  {    
    analogWrite(Motor_pin,230);     
  }
  else if (LDR_read >= 910  && LDR_read <= 1023)//8
  {
    analogWrite(Motor_pin,255);    
  } 
}
