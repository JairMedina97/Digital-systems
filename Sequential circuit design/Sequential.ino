// C++ code
//  LAB Electronica Digital II
//  Jair Medina

// Declaramos un array donde enlistamos el numero del pin que usaremos
#define in_A 2 //entrada A que obedece a un boton
#define read_in_A digitalRead(in_A)== HIGH
#define time delay(50)

#define out_6  8
#define out_5  7  //Bit 5
#define out_4  6  //Bit4
#define out_3  5  //Bit3
#define out_2  4  //Bit2
#define out_1  3  //Bit1

#define out_6_HIGH digitalWrite(out_6,HIGH)
#define out_6_LOW  digitalWrite(out_6,LOW)
#define out_5_HIGH digitalWrite(out_5,HIGH)
#define out_5_LOW  digitalWrite(out_5,LOW)
#define out_4_HIGH digitalWrite(out_4,HIGH)
#define out_4_LOW  digitalWrite(out_4,LOW)
#define out_3_HIGH digitalWrite(out_3,HIGH)
#define out_3_LOW  digitalWrite(out_3,LOW)
#define out_2_HIGH digitalWrite(out_2,HIGH)
#define out_2_LOW  digitalWrite(out_2,LOW)
#define out_1_HIGH digitalWrite(out_1,HIGH)
#define out_1_LOW  digitalWrite(out_1,LOW)



void setup()
{
  //--Inputs
  pinMode(in_A,  INPUT);  // Servira como un boton de reset
  pinMode(out_6, OUTPUT);
  pinMode(out_5, OUTPUT);
  pinMode(out_4, OUTPUT);
  pinMode(out_3, OUTPUT);
  pinMode(out_2, OUTPUT);
  pinMode(out_1, OUTPUT);
  
}
 


void loop()
{
  for (int i=0; i<10; i++)
  {
 
  switch (i) { 
  case 0:
    out_6_LOW;
    out_5_LOW;
    out_4_LOW;
    out_3_LOW;
    out_2_LOW;
    out_1_HIGH;
    time;
    break;
  case 1:
    out_6_LOW;
    out_5_LOW;
    out_4_LOW;
    out_3_LOW;
    out_2_HIGH;
    out_1_LOW;
    time;
    break;
  case 2:
    out_6_LOW;
    out_5_LOW;
    out_4_LOW;
    out_3_HIGH;
    out_2_LOW;
    out_1_LOW;
    time;
    break;
  case 3:
    out_6_LOW;
    out_5_LOW;
    out_4_HIGH;
    out_3_LOW;
    out_2_LOW;
    out_1_LOW;
    time;
    break;
  case 4:
    out_6_LOW;
    out_5_HIGH;
    out_4_LOW;
    out_3_LOW;
    out_2_LOW;
    out_1_LOW;
    time;
    break;
  case 5:
    out_6_HIGH;
    out_5_LOW;
    out_4_LOW;
    out_3_LOW;
    out_2_LOW;
    out_1_LOW;
    time;
    break;
  case 6:
    out_6_LOW;
    out_5_HIGH;
    out_4_LOW;
    out_3_LOW;
    out_2_LOW;
    out_1_LOW;
    time;
    break;
  case 7:
    out_6_LOW;
    out_5_LOW;
    out_4_HIGH;
    out_3_LOW;
    out_2_LOW;
    out_1_LOW;
    time;
    break;
   case 8:
    out_6_LOW;
    out_5_LOW;
    out_4_LOW;
    out_3_HIGH;
    out_2_LOW;
    out_1_LOW;
    time;
    break;
   case 9:
    out_6_LOW;
    out_5_LOW;
    out_4_LOW;
    out_3_LOW;
    out_2_HIGH;
    out_1_LOW;
    time;
    break;
   }    
  }  
}
