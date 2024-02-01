// C++ code
//
int led1 =8;
int led2 =9;
int led3 =10;
int button =2;
int reading =0;
int x=0;

void setup() {
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
 pinMode(button,INPUT);
}
void loop() {
 reading= digitalRead(button);
  if(reading==1){
  x++;
    if(x==3){
    digitalWrite(led3,HIGH);
    delay(500);}
    else if (x==2){   
    digitalWrite(led2,HIGH);
    delay(500);}
    else if (x==1){
    digitalWrite(led1,HIGH);
    delay(500);}
    else{
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      delay(500);
       x=0;
       }
  }    
  }


     
