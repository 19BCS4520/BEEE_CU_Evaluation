int an=0;
int counter=0;
void setup()
{
 Serial.begin(9600);
}
void loop()
{
  an=analogRead(A0);
  Serial.println(an);
  if(an!=500)
  {
    
       if (an>500) {
                   
       //was motion detected
       counter=counter+1;
         delay(1000);
       Serial.println(counter);
      }
  }
  
}