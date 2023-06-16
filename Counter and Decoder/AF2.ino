// C++ code
//  Electronica Digital II
//  Actividad Fundamental 2
//  Jair Medina 


// Declaramos un array donde enlistamos el numero del pin que usaremos
#define in_A 6 //entrada A que obedece a un boton
#define read_in_A digitalRead(in_A)== HIGH
int OutPin[] = {2,3,4,5};

// Un comando for que sirve declarar en lista cada pin como salida
void setup()
{
  //--Inputs
  pinMode(in_A,INPUT);  // Servira como un boton de reset
    
  for (int i=0; i<4; i++)
  {
    pinMode(OutPin[i], OUTPUT);
  }
}
 

// El comando for realizara la funcion conteo hasta 2^4 = 16
// Esto obedece a que el conteo se realiza del 0 al 15 siendo así 16 decimales
// Declaramos un delay en milisegundos, esta frecuencia de conteo reloj
void loop()
{
  for (int i=0; i<16; i++)
  {
      if (read_in_A) // Al leer el boton, el conteo reinicia
        {
        i = 0;
        }
    Conteo(i);
    delay(25);
  }
}


/* 
  La funcion conteo, esta realiza el conteo por cada 4 como se declara por numero 
  siendo asi con el conteo en high declarando salida como voltaje en cada pin

*/
void Conteo(byte number)
{
  for (int i=0; i<4; i++)
  {
    if (bitRead(number,i) == 1)
      {
      digitalWrite(OutPin[i],HIGH);
    }
    else
      {
      digitalWrite(OutPin[i],LOW);
    }
  }  
} 
