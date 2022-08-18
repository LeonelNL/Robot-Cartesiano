void Botones()
{
  for(int p = 0; p < 10000000; p++)
  {
     if(digitalRead(SwitchY) == 1)
    {
      Serial.println("YYYYYYYYYY");
    }
    else
    {
        Serial.println("YYYYBOTOOOOOOOOONNYYYYYYYY");
    }
    if(digitalRead(SwitchX) == 1)
    {
      Serial.println("XXXXXXXXXXX");
    }
    else
    {
        Serial.println("XXXXXBOTOOOOOOOONXXXXXXXXX");
    }
         if(digitalRead(SwitchZ) == 1)
    {
      Serial.println("ZZZZZZZZZZZZZZZZ");
    }
    else
    {
        Serial.println("ZZZZZZBOTOOOOONZZZZZZZZZZZZZZZZ");
    }
  }
}
