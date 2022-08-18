void Home()
{
  for(int t = 0; t < 2; t++)
  {
    for(int o = 0; o < 23000; o++)
    {
      if(digitalRead(SwitchZ) == 0)
      {
        In();
        itoa(o/1100, c, 10);
        str_3 = c;
        Serial.println(str_3);
      }
    }

    for(int p = 0; p < 13000; p++)
    {
      if(digitalRead(SwitchY) == 0)
      {
       Down();
       itoa(p/1100, c, 10);
       str_2 = c;
       Serial.println(str_2);
      }
    }
    
    for(int k = 0; k < 13000; k++)
    {
      if(digitalRead(SwitchX) == 0)
      {
        Right();
        itoa(k/1100, c, 10);
        str_1 = c;
        Serial.println(str_1);
      }
    }
    Serial.println(str_1 + str_2 + str_3);
    if(digitalRead(SwitchX) == 1 && digitalRead(SwitchY) == 1 && digitalRead(SwitchZ) == 1)
    {
      Serial.println("HOME");
    }
  }
}

void HomeVariables()
{
  for(r; r > 1; r--)
  {
    In();
    itoa(r/2200, c, 10);
    str_3 = c;
    Serial.println(str_1 + '?' + str_2 + '?' + str_3);
  }
  for(q; q > 1; q--)
  {
    Down();
    itoa(q/1100, c, 10);
    str_2 = c;
    Serial.println(str_1 + '?' + str_2 + '?' + str_3);
  }
  for(d; d > 1; d--)
  {
    Right();
    itoa(d/1100, c, 10);
    str_1 = c;
    Serial.println(str_1 + '?' + str_2 + '?' + str_3);
  }
}
