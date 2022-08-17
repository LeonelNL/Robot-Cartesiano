String readString, Instruccion, MotorX, MotorY, MotorZ, DirX, DirY, DirZ;
int PasosX, PasosY, PasosZ, DirXINT, DirYINT, DirZINT;
int InstruccionINT, Pause;
int CordenadaX, CordenadaY, CordenadaZ;
int CmToPasosX = 0, CmToPasosY = 0, CmToPasosZ = 0;
String str_1,str_2, str_3;
char c[20];
int d = 0, h = 0, n = 0, a=0, b=0, f=0;
int q, w, r = 0;
int ENAX = 3, ENAY = 2, ENAZ = 1;  
int PULX = 6, PULY = 5, PULZ = 4; //Pin Pul
int DIRX = 9, DIRY = 8, DIRZ = 7; //Pin Dir
int SwitchX = 10, SwitchY = 11, SwitchZ = 12, SwitchZ2 = 13;
int estadoZ = 0;

void setup() 
{
  Serial.begin(9600);
  pinMode(ENAX, OUTPUT);
  pinMode(DIRX, OUTPUT);
  pinMode(PULX, OUTPUT);
  pinMode(ENAY, OUTPUT);
  pinMode(DIRY, OUTPUT);
  pinMode(PULY, OUTPUT);
  pinMode(ENAZ, OUTPUT);
  pinMode(DIRZ, OUTPUT);
  pinMode(PULZ, OUTPUT);
  pinMode(SwitchX, INPUT);
  pinMode(SwitchY, INPUT);
  pinMode(SwitchZ, INPUT);
  pinMode(SwitchZ2, INPUT);
}

void loop() 
{  
  ConfigSerial();
  SerialCasos();
}
