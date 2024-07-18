int sure = 60; 
int ledKirmizi = 2;
int ledYesil = 3;
void setup() {
   pinMode(ledKirmizi,OUTPUT); 
   pinMode(ledYesil,OUTPUT); 
}
void loop() {
   for(int i=0;i<3;i++){
      digitalWrite(ledKirmizi,HIGH); 
      delay(sure);
      digitalWrite(ledKirmizi,LOW);
      delay(sure);
   }
   for(int i=0;i<3;i++){
      digitalWrite(ledYesil,HIGH); 
      delay(sure);
      digitalWrite(ledYesil,LOW);
      delay(sure);
   }
}