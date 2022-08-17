void Triangulo()
{
   for(int i = 0; i < 1; i++)
   {
      for(a; a < 11000; a++) //MOver Y
      {
        Up();
        itoa(a/1100, c, 10);
        str_1 = c;
        Serial.println('?' + str_1 + '?');
      }
      for(b; b < 19700; b++) //BAJAR Z
      {
        Out();
        itoa(b/2200, c, 10);
        str_2 = c;
        Serial.println('?' + str_1 + '?' + str_2);
      }
//*******************MOVER Z, Y********************************
      for(a; a > 1; a--)
      {
        Down();
        if(b > 9200)
        {
           In();
           b--;
        }
        itoa(b/2200, c, 15);
        str_2 = c;
        itoa(a/1100, c, 15);
        str_1 = c; 
        Serial.println('?' + str_1 + '?' + str_2);        
      }
 //*****************MOVER X*******************************************************
      for(int f = 0; f < 22000; f++) 
      {
        Left();
        if(f > 21950)
        {
          In();
        }
        itoa(f/1100, c, 10);
        str_3 = c;
        Serial.println(str_3 + '?' + str_1 + '?' + str_2);
      }

//*************MOVER LOS TRES EJES******************************************
      for(int g = 0; g < 11500; g++)
      {
        Right();
        f--;
        Right();
        f--;
        Up();
        a++;
        
        if(b <= 19950)
        {
          Out();
          b++;
        }
        itoa(f/1100, c, 10);
        str_3 = c;
        itoa(b/2200, c, 10);
        str_2 = c;
        itoa(a/1100, c, 10);
        str_1 = c; 
        Serial.println(str_3 + '?' + str_1 + '?' + str_2);
      }
//********************REGRESAR Z**********************************************
      for(b; b > 200; b--) //Solo para regresa Z
      {
        In();
        itoa(b/2200, c, 10);
        str_2 = c;
        Serial.println('?' + str_1 + '?' + str_2);
      }

//******************REGRESAR Y**************************************************
      for(a; a > 1; a--)  //Regresar Y
      {
        Down();
        itoa(a/1100, c, 10);
        str_1 = c;
        Serial.println(str_3 + '?' + str_1 + '?' + str_2);
      }
   }
}


void TrianguloRegresar()
{
  
}
