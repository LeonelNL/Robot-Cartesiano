void Left()
{
      digitalWrite(PULX,LOW);
      delayMicroseconds(60);
      digitalWrite(DIRX,LOW);
      digitalWrite(ENAX,HIGH);
      digitalWrite(PULX,HIGH);
      delayMicroseconds(60);
      digitalWrite(PULX,LOW);
      delayMicroseconds(60);     
}

void Right()
{
    digitalWrite(PULX,LOW);
    delayMicroseconds(60);
    digitalWrite(DIRX,HIGH);
    digitalWrite(ENAX,HIGH);
    digitalWrite(PULX,HIGH);
    delayMicroseconds(60);
    digitalWrite(PULX,LOW);
    delayMicroseconds(60);     
}

void MotorStopX()
{
    digitalWrite(PULX, LOW);
    digitalWrite(ENAX, HIGH);
}
