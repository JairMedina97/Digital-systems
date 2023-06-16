// C++ code
//  Electronica Digital II
//  Jair Medina 

/* Combinacion
 000 STOP 
 001 normal reloj 
 010 90 reloj
 011 45 reloj
 100 STOP
 101 normal contra
 110 90 contra
 111 45 contra
*/

#define BTN_1 6 // Btn XX1
#define BTN_2 7 // Btn X1X
#define BTN_3 8 // Btn 1XX

#define OUT_PIN_1 9
#define OUT_PIN_2 10
#define OUT_PIN_3 11
#define OUT_PIN_4 12

#define read_in_btn1 digitalRead(BTN_1)== HIGH
#define read_in_btn2 digitalRead(BTN_2)== HIGH
#define read_in_btn3 digitalRead(BTN_3)== HIGH

int step_number = 0;
int tiempo = 0;

void setup() {

pinMode(BTN_1,INPUT);
pinMode(BTN_2,INPUT);
pinMode(BTN_3,INPUT);

pinMode(OUT_PIN_1, OUTPUT);
pinMode(OUT_PIN_2, OUTPUT);
pinMode(OUT_PIN_3, OUTPUT);
pinMode(OUT_PIN_4, OUTPUT);

}








void loop() {

 // 000 Detenido
if(!read_in_btn1 && !read_in_btn2 && !read_in_btn3){
  digitalWrite(OUT_PIN_1, LOW);
  digitalWrite(OUT_PIN_2, LOW);
  digitalWrite(OUT_PIN_3, LOW);
  digitalWrite(OUT_PIN_4, LOW);  
}

 // 001 Normal Reloj
if(!read_in_btn1 && !read_in_btn2 && read_in_btn3){
  RELOJ(false);
  delay(2);  
}

 // 010 Reloj 90
if(!read_in_btn1 && read_in_btn2 && !read_in_btn3){
  while(tiempo < 500){
  RELOJ(false);
  delay(2);
  tiempo++;   
  }
  delay(1000);
  tiempo = 0;
}

 // 011 Reloj 45
if(!read_in_btn1 && read_in_btn2 && read_in_btn3){
  while(tiempo < 250){
  RELOJ(false);
  delay(2);
  tiempo++;   
  }
  delay(1000);
  tiempo = 0; 
}

 // 100   
if(read_in_btn1 && !read_in_btn2 && !read_in_btn3){
  digitalWrite(OUT_PIN_1, LOW);
  digitalWrite(OUT_PIN_2, LOW);
  digitalWrite(OUT_PIN_3, LOW);
  digitalWrite(OUT_PIN_4, LOW);  
}

 // 101 Normal Contra
if(read_in_btn1 && !read_in_btn2 && read_in_btn3){
  CONTRA(false);
  delay(2);  
}

 // 110 Contra 90
if(read_in_btn1 && read_in_btn2 && !read_in_btn3){
  while(tiempo < 500){
  CONTRA(false);
  delay(2);
  tiempo++;   
  }
  delay(1000);
  tiempo = 0; 
}

 // 111 Contra 45
if(read_in_btn1 && read_in_btn2 && read_in_btn3){
  while(tiempo < 250){
  CONTRA(false);
  delay(2);
  tiempo++;   
  }
  delay(1000);
  tiempo = 0;  
  }
}




void RELOJ(bool dir){
    if(dir){
switch(step_number){
  case 0:
  digitalWrite(OUT_PIN_1, LOW);
  digitalWrite(OUT_PIN_2, LOW);
  digitalWrite(OUT_PIN_3, LOW);
  digitalWrite(OUT_PIN_4, HIGH);
  break;
  case 1:
  digitalWrite(OUT_PIN_1, LOW);
  digitalWrite(OUT_PIN_2, LOW);
  digitalWrite(OUT_PIN_3, HIGH);
  digitalWrite(OUT_PIN_4, LOW);
  break;
  case 2:
  digitalWrite(OUT_PIN_1, LOW);
  digitalWrite(OUT_PIN_2, HIGH);
  digitalWrite(OUT_PIN_3, LOW);
  digitalWrite(OUT_PIN_4, LOW);
  break;
  case 3:
  digitalWrite(OUT_PIN_1, HIGH);
  digitalWrite(OUT_PIN_2, LOW);
  digitalWrite(OUT_PIN_3, LOW);
  digitalWrite(OUT_PIN_4, LOW);
  break;
} 
  }else{
    switch(step_number){
  case 0:
  digitalWrite(OUT_PIN_1, HIGH);
  digitalWrite(OUT_PIN_2, LOW);
  digitalWrite(OUT_PIN_3, LOW);
  digitalWrite(OUT_PIN_4, LOW);
  break;
  case 1:
  digitalWrite(OUT_PIN_1, LOW);
  digitalWrite(OUT_PIN_2, HIGH);
  digitalWrite(OUT_PIN_3, LOW);
  digitalWrite(OUT_PIN_4, LOW);
  break;
  case 2:
  digitalWrite(OUT_PIN_1, LOW);
  digitalWrite(OUT_PIN_2, LOW);
  digitalWrite(OUT_PIN_3, HIGH);
  digitalWrite(OUT_PIN_4, LOW);
  break;
  case 3:
  digitalWrite(OUT_PIN_1, LOW);
  digitalWrite(OUT_PIN_2, LOW);
  digitalWrite(OUT_PIN_3, LOW);
  digitalWrite(OUT_PIN_4, HIGH);
 
  
} 
  }
step_number++;
  if(step_number > 3){
    step_number = 0;
  }
}





void CONTRA(bool dir){
    if(dir){
switch(step_number){
  case 0:
  digitalWrite(OUT_PIN_1, HIGH);
  digitalWrite(OUT_PIN_2, LOW);
  digitalWrite(OUT_PIN_3, LOW);
  digitalWrite(OUT_PIN_4, LOW);
  break;
  case 1:
  digitalWrite(OUT_PIN_1, LOW);
  digitalWrite(OUT_PIN_2, HIGH);
  digitalWrite(OUT_PIN_3, LOW);
  digitalWrite(OUT_PIN_4, LOW);
  break;
  case 2:
  digitalWrite(OUT_PIN_1, LOW);
  digitalWrite(OUT_PIN_2, LOW);
  digitalWrite(OUT_PIN_3, HIGH);
  digitalWrite(OUT_PIN_4, LOW);
  break;
  case 3:
  digitalWrite(OUT_PIN_1, LOW);
  digitalWrite(OUT_PIN_2, LOW);
  digitalWrite(OUT_PIN_3, LOW);
  digitalWrite(OUT_PIN_4, HIGH);
  break;
} 
  }else{
    switch(step_number){
  case 0:
  digitalWrite(OUT_PIN_1, LOW);
  digitalWrite(OUT_PIN_2, LOW);
  digitalWrite(OUT_PIN_3, LOW);
  digitalWrite(OUT_PIN_4, HIGH);
  break;
  case 1:
  digitalWrite(OUT_PIN_1, LOW);
  digitalWrite(OUT_PIN_2, LOW);
  digitalWrite(OUT_PIN_3, HIGH);
  digitalWrite(OUT_PIN_4, LOW);
  break;
  case 2:
  digitalWrite(OUT_PIN_1, LOW);
  digitalWrite(OUT_PIN_2, HIGH);
  digitalWrite(OUT_PIN_3, LOW);
  digitalWrite(OUT_PIN_4, LOW);
  break;
  case 3:
  digitalWrite(OUT_PIN_1, HIGH);
  digitalWrite(OUT_PIN_2, LOW);
  digitalWrite(OUT_PIN_3, LOW);
  digitalWrite(OUT_PIN_4, LOW);
 
  
} 
  }
step_number++;
  if(step_number > 3){
    step_number = 0;
  }
}
