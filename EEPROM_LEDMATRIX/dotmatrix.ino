// C++ code
//  Electronica Digital II
//  Jair Medina


#define D 9

#define A0_OFF   analogWrite(D, HIGH);
#define A0_ON    analogWrite(D, LOW);
#define A1_OFF   analogWrite(A1, 255);     
#define A1_ON    analogWrite(A1, 0);
#define A2_OFF   analogWrite(A2, 255);
#define A2_ON    analogWrite(A2, 0);
#define A3_OFF   analogWrite(A3, 255);
#define A3_ON    analogWrite(A3, 0);
#define A4_OFF   analogWrite(A4, 255);
#define A4_ON    analogWrite(A4, 0);
#define A5_OFF   analogWrite(A5, 255);
#define A5_ON    analogWrite(A5, 0);

#define TIME     delay(1000);
int conteo = 0;
                                  
void setup()
{
  //--OUTPUT
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);


  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(A5,OUTPUT);

  Serial.begin(9600); 

  
}

void loop()
{ 

while(conteo<50){
conteo++;
cero();  
}
conteo = 0; 

while(conteo<50){
conteo++;
uno();  
}
conteo = 0;

while(conteo<50){
conteo++;
dos();  
}
conteo = 0;

while(conteo<50){
conteo++;
tres();  
}
conteo = 0;

while(conteo<50){
conteo++;
cuatro();  
}
conteo = 0;

while(conteo<50){
conteo++;
cinco();  
}
conteo = 0;

while(conteo<50){
conteo++;
seis();  
}
conteo = 0;

while(conteo<50){
conteo++;
siete();  
}
conteo = 0;

while(conteo<50){
conteo++;
ocho();  
}
conteo = 0;

while(conteo<50){
conteo++;
nueve();  
}
conteo = 0;

//10
while(conteo<50){
conteo++;
digitalWrite(5,HIGH);
  A0_ON;
  A1_ON;
  A2_ON;
  A3_ON;
  A4_ON;
  A5_ON;
cero();  
}
conteo = 0;

//11
while(conteo<50){
conteo++;
digitalWrite(5,HIGH);
  A0_ON;
  A1_ON;
  A2_ON;
  A3_ON;
  A4_ON;
  A5_ON;
uno();  
}
conteo = 0;

//12
while(conteo<50){
conteo++;
digitalWrite(5,HIGH);
  A0_ON;
  A1_ON;
  A2_ON;
  A3_ON;
  A4_ON;
  A5_ON;
dos();  
}
conteo = 0;

//13
while(conteo<50){
conteo++;
digitalWrite(5,HIGH);
  A0_ON;
  A1_ON;
  A2_ON;
  A3_ON;
  A4_ON;
  A5_ON;
tres();  
}
conteo = 0;

//14
while(conteo<50){
conteo++;
digitalWrite(5,HIGH);
  A0_ON;
  A1_ON;
  A2_ON;
  A3_ON;
  A4_ON;
  A5_ON;
cuatro();  
}
conteo = 0;

//11
while(conteo<50){
conteo++;
digitalWrite(5,HIGH);
  A0_ON;
  A1_ON;
  A2_ON;
  A3_ON;
  A4_ON;
  A5_ON;
cinco();  
}
conteo = 0;

//11
while(conteo<50){
conteo++;
digitalWrite(5,HIGH);
  A0_ON;
  A1_ON;
  A2_ON;
  A3_ON;
  A4_ON;
  A5_ON;
seis();  
}
conteo = 0;

//18
while(conteo<50){
conteo++;
digitalWrite(5,HIGH);
  A0_ON;
  A1_ON;
  A2_ON;
  A3_ON;
  A4_ON;
  A5_ON;
siete();  
}
conteo = 0;

//19
while(conteo<50){
conteo++;
digitalWrite(5,HIGH);
  A0_ON;
  A1_ON;
  A2_ON;
  A3_ON;
  A4_ON;
  A5_ON;
ocho();  
}
conteo = 0;



//19
while(conteo<50){
conteo++;
digitalWrite(5,HIGH);
  A0_ON;
  A1_ON;
  A2_ON;
  A3_ON;
  A4_ON;
  A5_ON;
nueve();
digitalWrite(5,LOW);  
}
conteo = 0;



//20
while(conteo<200){
conteo++;
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(2,HIGH);        
digitalWrite(3,HIGH);  
digitalWrite(4,HIGH);
  A0_ON; 
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(2,HIGH);        
digitalWrite(3,LOW);  
digitalWrite(4,HIGH);
  A0_OFF; 
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(2,HIGH);        
digitalWrite(3,LOW);  
digitalWrite(4,HIGH);
  A0_OFF; 
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(2,HIGH);        
digitalWrite(3,LOW);  
digitalWrite(4,HIGH);
  A0_OFF; 
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF;
  delay(2);
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
digitalWrite(2,HIGH);        
digitalWrite(3,LOW);  
digitalWrite(4,HIGH);
  A0_OFF; 
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF;
  delay(2);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(2,HIGH);        
digitalWrite(3,HIGH);  
digitalWrite(4,HIGH);
  A0_OFF; 
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_ON;
  delay(2);  
}
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(2,LOW);        
digitalWrite(3,LOW);  
digitalWrite(4,LOW);
  A0_OFF; 
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
conteo = 0;


}

















void cero(){
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;    
  delay(2);
//2
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;        
  delay(2);
//3
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF;    
  delay(2);
//4
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF;    
  delay(2);
//5
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF;    
  delay(2);

//6
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_ON;
  delay(2);
  
  

}





void uno(){
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF; 
  delay(2);
    digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  A0_ON;
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF; 
  delay(2);
    digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  A0_ON;
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF; 
  delay(2);
    digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF; 
  delay(2);
    digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF; 
  delay(2);
    digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_ON; 
  delay(2);  
 
 
}






void dos(){
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//2
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//3
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//4
    digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF;
  delay(2);
  //5
    digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,LOW);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF;
  delay(2);
//6
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_ON;
  delay(2);

  

}








void tres(){
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//2
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//3
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//4
    digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF;
  delay(2);
  //5
    digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF;
  delay(2);
//6
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_ON;
  delay(2);
 

}





void cuatro(){
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//2
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//3
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//4
    digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF;
  delay(2);
  //5
    digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF;
  delay(2);
//6
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_ON;
  delay(2);
}




void cinco(){
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//2
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,LOW);  // COL 2 
  A0_OFF;
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//3
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,LOW);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//4
    digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF;
  delay(2);
  //5
    digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF;
  delay(2);
//6
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_ON;
  delay(2);
}




void seis(){
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//2
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,LOW);  // COL 2 
  A0_OFF;
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//3
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,LOW);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//4
    digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF;
  delay(2);
  //5
    digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF;
  delay(2);
//6
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_ON;
  delay(2);
}




void siete(){
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//2
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//3
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//4
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF;
  delay(2);
  //5
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF;
  delay(2);
//6
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_ON;
  delay(2);
}





void ocho(){
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//2
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//3
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//4
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF;
  delay(2);
  //5
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF;
  delay(2);
//6
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_ON;
  delay(2);
}




void nueve(){
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//2
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//3
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//4
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF;
  delay(2);
  //5
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF;
  delay(2);
//6
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_ON;
  delay(2);
}
