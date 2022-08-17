void ConfigSerial()
{
  while (Serial.available()) 
  {
    delay(2);  
    if (Serial.available() >0) 
    {
      char c = Serial.read();  //gets one byte from serial buffer
      readString += c; //makes the string readString
    } 
  }
}
