void Out()
{
    digitalWrite(PULZ,LOW);
    delayMicroseconds(60);
    digitalWrite(DIRZ,LOW);
    digitalWrite(ENAZ,HIGH);
    digitalWrite(PULZ,HIGH);
    delayMicroseconds(60);
    digitalWrite(PULZ,LOW);
    delayMicroseconds(60); 
}

void In()
{

    digitalWrite(PULZ,LOW);
    delayMicroseconds(60);
    digitalWrite(DIRZ,HIGH);
    digitalWrite(ENAZ,HIGH);
    digitalWrite(PULZ,HIGH);
    delayMicroseconds(60);
    digitalWrite(PULZ,LOW);
    delayMicroseconds(60); 
  
}

void MotorStopZ()
{
   digitalWrite(PULZ, LOW);
   digitalWrite(ENAZ, LOW);
}
