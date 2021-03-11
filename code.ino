/* 
    Upload the Code into the Arduino
*/
int data;
void setup() {
  pinMode(9,OUTPUT);
  Serial.begin(9600);
  Serial.setTimeout(10);
}
void loop() {
  if(Serial.available()>0){
    data= Serial.parseInt();
    Serial.println(data);
    analogWrite(9,data);
    }  
}
