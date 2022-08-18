void SerialCasos()
{
  if (readString.length() > 0)
  {
    Instruccion =  readString.substring(0 , 2);
    MotorX      =  readString.substring(2 , 4);
    MotorY      =  readString.substring(4 , 6);
    MotorZ      =  readString.substring(6 , 8);
    DirX        =  readString.substring(8 , 9);
    DirY        =  readString.substring(9 , 10);
    DirZ        =  readString.substring(10, 11);

    InstruccionINT =  Instruccion.toInt();
    PasosX         =  MotorX.toInt();
    PasosY         =  MotorY.toInt();
    PasosZ         =  MotorZ.toInt();
    DirXINT        =  DirX.toInt();
    DirYINT        =  DirY.toInt();
    DirZINT        =  DirZ.toInt();

    CmToPasosX = PasosX * 1100;
    CmToPasosY = PasosY * 1100;
    CmToPasosZ = PasosZ * 2200;
    
    switch(InstruccionINT){
        case 1:
          Home();
        break;

        case 2:
          Botones();
        break;

        case 3:
          ManualRight();
          break;

        case 4:
          ManualLeft();
          break;

        case 5:
          ManualUp();
          break;

        case 6:
          ManualDown();
          break;

        case 7:
          ManualIn();
          break;

        case 8:
          ManualOut();
          break;

        case 9:

          break;

        case 10:
          Pause = 0;
          Triangulo();
          break;

        case 11:
          Pause = 0;
          Manual();
          break;
        
        case 12:
          MotorStopX();
          MotorStopY(),
          MotorStopZ();
        break;
    }
    readString = "";
  } 
}
