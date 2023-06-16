// C++ code
// Lab. Electronica Digital II
// Logic Gates


// Etiqueta
// Input pin no.
#define in_A 2 //entrada A
#define in_B 3 //entrada B

// Output pin no.
#define out_AND 8
#define out_OR  9
#define out_NAND  10
#define out_NOR  11
#define out_XOR  7

// Lectura de datos
#define read_in_A digitalRead(in_A)== HIGH
#define read_in_B digitalRead(in_B)== HIGH



// Salidas
// OR
#define out_OR_HIGH digitalWrite(out_OR,HIGH)
#define out_OR_LOW  digitalWrite(out_OR,LOW)
// AND
#define out_AND_HIGH digitalWrite(out_AND,HIGH)
#define out_AND_LOW  digitalWrite(out_AND,LOW)
// NAND
#define out_NAND_HIGH digitalWrite(out_NAND,HIGH)
#define out_NAND_LOW  digitalWrite(out_NAND,LOW)
// NOR
#define out_NOR_HIGH digitalWrite(out_NOR,HIGH)
#define out_NOR_LOW  digitalWrite(out_NOR,LOW)
// XOR
#define out_XOR_HIGH digitalWrite(out_XOR,HIGH)
#define out_XOR_LOW  digitalWrite(out_XOR,LOW)




void setup() 
{
  // Modo lectura/escribir pin
  //--Inputs
  pinMode(in_A,INPUT);
  pinMode(in_B,INPUT);

  //--Outputs  
  pinMode(out_OR,OUTPUT);
  pinMode(out_AND,OUTPUT);
  pinMode(out_NAND,OUTPUT);
  pinMode(out_NOR,OUTPUT);
  pinMode(out_XOR,OUTPUT);
}




void loop() 
{
  //lógica OR
  if (read_in_A || read_in_B)
  {
    out_OR_HIGH;
  }
  else
  {
    out_OR_LOW;
  }

  
  //lógica AND
  if (read_in_A && read_in_B)
  {
    out_AND_HIGH;
  }
  else
  {
    out_AND_LOW;
  }
  
  
  
  //lógica NAND
  if (!(read_in_A && read_in_B))
  {
    out_NAND_HIGH;
  }
  else
  {
    out_NAND_LOW;
  }  
  


  
  
  //lógica NOR
  if (!(read_in_A || read_in_B))
  {
    out_NOR_HIGH;
  }
  else
  {
    out_NOR_LOW;
  }  
  
  
 
  //lógica XOR
  if ((read_in_A && !(read_in_B)) || (!(read_in_A) && (read_in_B)))
  {
    out_XOR_HIGH;
  }
  else
  {
    out_XOR_LOW;
  }
    
}
