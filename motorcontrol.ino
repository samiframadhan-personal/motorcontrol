int min1 = 20;  //Declare Motor input 1 pin
int min2 = 21;  //Declare Motor input 2 pin
int men1=22;    //Declare Motor enable 1 pin
int men2=23;    //Declare Motor enable 2 pin
int pwminput=5; //Declare Motor PWM Control pin

void setup(){ 
    pinMode(min1, OUTPUT);   
    pinMode(min2, OUTPUT);
    pinMode(men1, OUTPUT);   
    pinMode(men2, OUTPUT);
    pinMode(pwminput, OUTPUT);   

} 

void loop (){
  int value;
  for(value = 0 ; value <= 255; value+=5){
    digitalWrite(min1,HIGH);   
    digitalWrite(min2, LOW);
    digitalWrite(men1,HIGH);   
    digitalWrite(men2, HIGH);
    analogWrite(pwminput,value);   
    delay(500);
  }   
}
