-3 i
int Ha = 10;
int Hb = 11;
int Hc = 12;

int state1;
int state2;
int state3;

int pot = A0;

int rated_speed = 1500;
int freq = 50;

void setup() 
{
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(Ha, OUTPUT);
  pinMode(Hb, OUTPUT);
  pinMode(Hc, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  int speed_ref = analogRead(pot);
  int reqd_speed = map(speed_ref, 0, 1023, 0, 1500);
  reqd_speed = constrain(reqd_speed, 0, 1500);

  float reqd_freq = (reqd_speed * 2) / 60;
  float reqd_time = 1 / reqd_freq;
  Serial.println(reqd_time);

  digitalWrite(Ha, HIGH);
  
  digitalWrite(Hb, LOW);
  digitalWrite(Hc, HIGH);
  delay((reqd_time * 1000) / 6);
  digitalWrite(Ha, HIGH);
  digitalWrite(Hb, LOW);
  digitalWrite(Hc, LOW);
  delay((reqd_time * 1000) / 6);
  digitalWrite(Ha, HIGH);
  digitalWrite(Hb, HIGH);
  digitalWrite(Hc, LOW);
  delay((reqd_time * 1000) / 6);
  digitalWrite(Ha, LOW);
  digitalWrite(Hb, HIGH);
  digitalWrite(Hc, LOW);
  delay((reqd_time * 1000) / 6);
  digitalWrite(Ha, LOW);
  digitalWrite(Hb, HIGH);
  digitalWrite(Hc, HIGH);
  delay((reqd_time * 1000) / 6);
  digitalWrite(Ha, LOW);
  digitalWrite(Hb, LOW);
  digitalWrite(Hc, HIGH);
  delay((reqd_time * 1000) / 6);
}
