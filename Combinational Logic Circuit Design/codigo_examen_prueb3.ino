//  Electronica Digital II
//  Examen Medio Curso
//  Jair Medina & Sandra Villarreal
//  Num. Lista 15 & 31
//  Matriculas
//  1792351 & 1856057


#define in_A 8 // Entrada 1XX
#define in_B 7 // Entrada X1X
#define in_C 6 // Entrada XX1
// Lectura del dato
#define read_in_A digitalRead(in_A)== HIGH
#define read_in_B digitalRead(in_B)== HIGH
#define read_in_C digitalRead(in_C)== HIGH


// Pines de salida y escritura del dato
int OutPin[] = {2,3,4,5};
#define out_2_HIGH digitalWrite(OutPin[0],HIGH)
#define out_2_LOW  digitalWrite(OutPin[0],LOW)
#define out_3_HIGH digitalWrite(OutPin[1],HIGH)
#define out_3_LOW  digitalWrite(OutPin[1],LOW)
#define out_4_HIGH digitalWrite(OutPin[2],HIGH)
#define out_4_LOW  digitalWrite(OutPin[2],LOW)
#define out_5_HIGH digitalWrite(OutPin[3],HIGH)
#define out_5_LOW  digitalWrite(OutPin[3],LOW)

bool stopFunction = false;





// Setup() prepara a los pines como entradas o salidas respectivamente
void setup()
{
  //--Inputs
  pinMode(in_A, INPUT);  
  pinMode(in_B, INPUT);
  pinMode(in_C, INPUT);
  //--Salidas  
  for (int i=0; i<4; i++)
  {
    pinMode(OutPin[i], OUTPUT);
  }
}
 
// En la estructura loop está el cuerpo del codigo para los casos que 
// se solicitaron en el examen

void loop()
{
  if(!read_in_A){    
  // Mientras no lea el dato (1XX) realiza las instrucciones  
    if (!read_in_B && !read_in_C)  { // Imprimir E (1110) = 14 decimal
      out_2_LOW;
      out_3_HIGH;
      out_4_HIGH;
      out_5_HIGH;   
    } 


    else if (!read_in_B && read_in_C) { // Resta 9-0
      if(!read_in_A){
      resta();      
      }          
    } 
 
    else if (read_in_B && !read_in_C) { // Suma 0-9
      if(!read_in_A){
       suma();      
      }
    } 

  
    else if (read_in_B && read_in_C) { // Imprimir A (1010) = 10 decimal
      out_2_LOW;
      out_3_HIGH;
      out_4_LOW;
      out_5_HIGH;
    }    
  }
} 




void resta() // Contar descendente 9-0
{
  for (int i=9; i>=0; i--) // i = inicialmente empieza en 9 y mientras sea mayor o igual a cero, resta uno
  {   
      Conteo(i); // Ingresa a la funcion conteo con un delay de 500 milisegundos
      delay(10);    
  }
}

void suma()
{
  for (int i=0; i<10; i++)// i = inicialmente empieza en 0 y mientras sea menor a diez, suma uno
  { 
      Conteo(i); // Ingresa a la funcion conteo con un delay de 500 milisegundos
      delay(10);  
  }
}





/* 
   BitRead lee el numero en formato (x,n) 
   x = el numero del cual leer ....
   n = que bit leer, comenzando en 0 para el bit menos significativo (derecho)
   Regresa el valor del bit 1 o 0
*/




void Conteo(byte number)    // La funcion conteo recibe un numero en byte = 8 bits
{
  for (int i=0; i<4; i++)  // realiza el conteo menor a cuatro (Por las posiciones 0,1,2,3), suma uno en el for
  {
      if(!read_in_A){
      if (bitRead(number,i) == 1){
         digitalWrite(OutPin[i],HIGH); // Escribe en el pin correspondiente (i) un valor 1 logico
      }
       else{
        digitalWrite(OutPin[i],LOW); // Escribe en el pin correspondiente (i) un valor 0 logico
      } 
    } 
  }  
} 
