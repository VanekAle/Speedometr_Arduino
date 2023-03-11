int x = 0,a = 0;
float d;

int a1(int s,int a,char LOH,char LOH2,char LOH3)
  {
  pinMode(8, LOH);
  pinMode(9, LOH2);
  pinMode(10, LOH3);
  a = s % 10;
  
  if (a == 1)
  {
    pinMode(4, HIGH);
    pinMode(2, HIGH);
  }
  if (a == 5)
  {
    pinMode(1, HIGH);
    pinMode(3, HIGH);
    pinMode(4, HIGH);
    pinMode(0, HIGH);
    pinMode(6, HIGH);
  }
  if (a == 2)
  {
    pinMode(5, HIGH);
    pinMode(3, HIGH);
    pinMode(2, HIGH);
    pinMode(0, HIGH);
    pinMode(6, HIGH);
  }
  if (a == 3)
  {
    pinMode(2, HIGH);
    pinMode(3, HIGH);
    pinMode(4, HIGH);
    pinMode(0, HIGH);
    pinMode(6, HIGH);
  }
  if (a == 4)
  {
    pinMode(2, HIGH);
    pinMode(3, HIGH);
    pinMode(4, HIGH);
    pinMode(1, HIGH);
  }
  if (a == 6)
  {
    pinMode(1, HIGH);
    pinMode(3, HIGH);
    pinMode(4, HIGH);
    pinMode(0, HIGH);
    pinMode(6, HIGH);
    pinMode(5, HIGH);
  }
  if (a == 7)
  {
    pinMode(4, HIGH);
    pinMode(2, HIGH);
    pinMode(0, HIGH);
  }
  if (a == 8)
  {
    pinMode(1, HIGH);
    pinMode(3, HIGH);
    pinMode(4, HIGH);
    pinMode(0, HIGH);
    pinMode(6, HIGH);
    pinMode(5, HIGH);
    pinMode(2, HIGH);
  }
  if (a == 9)
  {
    pinMode(1, HIGH);
    pinMode(3, HIGH);
    pinMode(4, HIGH);
    pinMode(0, HIGH);
    pinMode(6, HIGH);
    pinMode(2, HIGH);
  }
  if (a == 0)
  {
    pinMode(1, HIGH);
    pinMode(5, HIGH);
    pinMode(4, HIGH);
    pinMode(0, HIGH);
    pinMode(6, HIGH);
    pinMode(2, HIGH);
  }
  delay(1);
}

void setup() {
   
}

void loop() {
   a1(x,a,LOW,HIGH,LOW);
   delay(100);
   x = x + 1;

}
