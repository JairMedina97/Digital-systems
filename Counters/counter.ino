// C++ code
// Lab. Electronica Digital II
// Jair Medina

#define in_A 6 // Entrada 1XX


#define read_in_A digitalRead(in_A)== HIGH

int OutPin[] = {2,3,4,5};
#define out_2_HIGH digitalWrite(OutPin[0],HIGH)
#define out_2_LOW  digitalWrite(OutPin[0],LOW)
#define out_3_HIGH digitalWrite(OutPin[1],HIGH)
#define out_3_LOW  digitalWrite(OutPin[1],LOW)
#define out_4_HIGH digitalWrite(OutPin[2],HIGH)
#define out_4_LOW  digitalWrite(OutPin[2],LOW)
#define out_5_HIGH digitalWrite(OutPin[3],HIGH)
#define out_5_LOW  digitalWrite(OutPin[3],LOW)



void setup()
{
  pinMode(in_A, INPUT);  
  
  for (int i=0; i<4; i++)
  {
    pinMode(OutPin[i], OUTPUT);
  }
}
 
void loop()
{    
  while(!read_in_A){ 
 	suma();       
  }

} 


void suma()
{
  for (int i=0; i<16; i++)
  {
  //  while(!read_in_A){
      Conteo(i); 
      delay(100);  
//  	}
  }
}




void Conteo(byte number)   
{  
  if(!read_in_A){	
  	for (int i=0; i<4; i++)  
  	{
    	if (bitRead(number,i) == 1){
      	digitalWrite(OutPin[i],HIGH); 
      }
    else{
      digitalWrite(OutPin[i],LOW); 
      }
    }  
  }
} 
