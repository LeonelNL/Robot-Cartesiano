void Up()
{
    digitalWrite(PULY,LOW);
    delayMicroseconds(60);
    digitalWrite(DIRY,HIGH);
    digitalWrite(ENAY,HIGH);
    digitalWrite(PULY,HIGH);
    delayMicroseconds(60);
    digitalWrite(PULY,LOW);
    delayMicroseconds(60); 
}

void Down()
{
    digitalWrite(PULY,LOW);
    delayMicroseconds(60);
    digitalWrite(DIRY,LOW);
    digitalWrite(ENAY,HIGH);
    digitalWrite(PULY,HIGH);
    delayMicroseconds(60);
    digitalWrite(PULY,LOW);
    delayMicroseconds(60);  
}

void MotorStopY()
{
   digitalWrite(PULY, LOW);
   digitalWrite(ENAY, HIGH);
}
