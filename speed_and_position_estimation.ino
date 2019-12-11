// Output signals
int T1 = 2;
int T2 = 3;
int T3 = 4;
int T4 = 5;
int T5 = 6;
int T6 = 7;

// Hall effect sensor 
int H1 = 8;
int H2 = 9;
int H3 = 10; 

//speed
float time1;
float time2;
float time3 ;
float time4 ;
float time_for_60_deg ;
float time_for_1_rot ;
float speed_in_rpm ;
float speed_in_rps ;
float angular_position = 0 ;
int temp ;

void setup() {
  
//Initialize Input
  pinMode(H1, INPUT);
  pinMode(H2, INPUT);
  pinMode(H3, INPUT);  
  //Initialize Output
  pinMode(T1, OUTPUT);
  pinMode(T2, OUTPUT);
  pinMode(T3, OUTPUT);
  pinMode(T4, OUTPUT);
  pinMode(T5, OUTPUT);
  pinMode(T6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //Modulated 
  //Read hall effect sensor signals
  time3 = micros();
  int  Ha = digitalRead(H1);
  int  Hb = digitalRead(H2);
  int  Hc = digitalRead(H3);
  while(digitalRead(H1) == Ha && digitalRead(H2) == Hb && digitalRead(H3) == Hc);
  time1 = micros();
    Ha = digitalRead(H1);
    Hb = digitalRead(H2);
    Hc = digitalRead(H3);
  while(digitalRead(H1) == Ha && digitalRead(H2) == Hb && digitalRead(H3) == Hc);
  time2 = micros();
  time_for_60_deg = (time2 - time1)/1000000;
  time_for_1_rot = time_for_60_deg * 6;
  speed_in_rpm = 60 / (time_for_1_rot * 2);//due to  pole pairs  
  Serial.println(speed_in_rpm);
  speed_in_rps = speed_in_rpm / 60 ;
  time4 = micros();
  angular_position += speed_in_rps*(time4 - time3) ;
  temp = angular_position / 360 ;
  //Serial.println(temp);
  if (temp > 0)
  {
    angular_position -= float(temp)*360 ;
  }
  Serial.println(angular_position);
}
