void Triangulo()
{
   for(int i = 0; i < 1; i++)
   {
      for(a; a < 11000; a++) //MOver Y
      {
          if(Serial.read() == 'X'){
            Pause = 1;
            break;
          }
        Up();
        itoa(a/1100, c, 10);
        str_1 = c;
        Serial.println('?' + str_1 + '?');
      }
      for(b; b < 19700; b++) //BAJAR Z
      {
          if(Serial.read() == 'X' || Pause == 1)
          {
            Pause = 1;
            break;
          }
        Out();
        itoa(b/2200, c, 10);
        str_2 = c;
        Serial.println('?' + str_1 + '?' + str_2);
      }
//*******************MOVER Z, Y********************************
      for(a; a > 1; a--)
      {
        if(Serial.read() == 'X' || Pause == 1)
        {
          Pause = 1;
          break;
        }
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
      for(f; f < 22000; f++) 
      {
        if(Serial.read() == 'X' || Pause == 1)
        {
          Pause = 1;
          break;
        }
        Left();
        
        if(f > 21950)
        {
           In();
        }
        
        itoa(f/1100, c, 10);
        str_3 = c;
        Serial.println(str_3 + '?' + str_1 + '?' + str_2);
      }
//**************Subir un puco Z*****************************
      for(l; l < 1250; l++)
      {
        if(Serial.read() == 'X' || Pause == 1)
        {
           Pause = 1;
           break;
        }
        In();
        Serial.println(l);
      }

//*************MOVER LOS TRES EJES******************************************
      for(g; g < 11500; g++)
      {
        if(Serial.read() == 'X' || Pause == 1)
        {
           Pause = 1;
           break;
        }
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
      for(b; b > 1100; b--) //Solo para regresa Z
      {
        if(Serial.read() == 'X' || Pause == 1)
        {
           Pause = 1;
           break;
        }
        In();
        itoa(b/2200, c, 10);
        str_2 = c;
        Serial.println('?' + str_1 + '?' + str_2);
      }

//******************REGRESAR Y**************************************************
      for(a; a > 1; a--)  //Regresar Y
      {
        if(Serial.read() == 'X' || Pause == 1)
        {
           Pause = 1;
           break;
        }
        Down();
        itoa(a/1100, c, 10);
        str_1 = c;
        Serial.println(str_3 + '?' + str_1 + '?' + str_2);
        if(a == 1)
        {
          a = 0;
          b = 0;
          f = 0;
          g = 0;
          l = 0;
          break;
        }
      }
   }
}
