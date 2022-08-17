void Manual()
{
    if(CmToPasosX > q || CmToPasosY > w || CmToPasosZ > r)
    {
       for(q; q <= CmToPasosX; q++)
       {
        if(q <= CmToPasosX)
        {
          if(Serial.read() == 'X'){
            Pause = 1;
            break;
          }
          else
          {
          if(DirXINT == 1)
          {  
              Right();
          }
          else
          {
              Left();
          }
          itoa(q/1100, c, 10);
          str_1 = c;
          Serial.println(str_1);
          }
        }
       }
       for(w; w <= CmToPasosY; w++)
       {
          if(Serial.read() == 'X' || Pause == 1)
          {
            Pause = 1;
            break;
          }
          else
          {
             if(w <= CmToPasosY)
             {
               if(DirYINT == 1)
               {
                  Up();
               }
               else
               {
                  Down();
               }
              itoa(w/1100, c, 10);
              str_2 = c;
              Serial.println(str_1 + '?' + str_2);
             }
          }
        }
       for(r; r <= CmToPasosZ; r++)
       {
          if(Serial.read() == 'X' || Pause == 1)
          {
            break;
          }
          else
          {
             if(r <= CmToPasosZ)
             {
                if(DirZINT == 1)
                {
                  Out(); 
                }
                else
                {
                  In();
                }
                itoa(r/2200, c, 10);
                str_3 = c;
                Serial.println(str_1 + '?' + str_2 + '?' + str_3);
             }
          }
        }
        Serial.println(str_1 + '?' + str_2 + '?' + str_3);
        if(q >= CmToPasosX  && w >= CmToPasosY && r >= CmToPasosZ)
        {
          q = 1;
          w = 1;
          r = 1;
        }
   } 
}
