  int d0[]={0,0,0,0,0,0,1,1};
  int d1[]={1,0,0,1,1,1,1,1};
  int d2[]={0,0,1,0,0,1,0,1};
  int d3[]={0,0,0,0,1,1,0,1};
  int d4[]={1,0,0,1,1,0,0,1};
  int d5[]={0,1,0,0,1,0,0,1};
  int d6[]={0,1,0,0,0,0,0,1};
  int d7[]={0,0,0,1,1,1,1,1};
  int d8[]={0,0,0,0,0,0,0,1};
  int d9[]={0,0,0,0,1,0,0,1};
  int dot[]={1,1,1,1,1,1,1,0};

  int iloscDzwiekow=0;
  int stanCzujnika=0;
  int aktualnyStanCzujnika;
  int poprzedniStanCzujnika=0;
  int dlugoscDzwieku=50;
  unsigned long czasDzwieku=0;
  bool swiatlo=true;

void setup()
{ 
  for(int i = 0; i < 8; i++){
     pinMode(i, OUTPUT);
     digitalWrite(i, HIGH);
  }
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
  digitalWrite(9,swiatlo);
}

void loop()
{
  digitalWrite(9,swiatlo);
  aktualnyStanCzujnika=digitalRead(8);
    if(aktualnyStanCzujnika!=poprzedniStanCzujnika)
    {
      czasDzwieku=millis();
    }
    if(millis()-czasDzwieku > dlugoscDzwieku)
    {
      if(aktualnyStanCzujnika!=stanCzujnika)
      {
        stanCzujnika=aktualnyStanCzujnika;

         if(stanCzujnika==HIGH)
       {
        swiatlo=!swiatlo;
        if(iloscDzwiekow<10)
        {
          iloscDzwiekow++;
        }
        else
        {
          iloscDzwiekow=0;
        }
       }
      }
      
    }
  poprzedniStanCzujnika=aktualnyStanCzujnika;
      
  
  liczba(iloscDzwiekow);
}




void liczba(int num)
{
  switch(num)
  {
    case 0:
    for(int i=0;i<8;i++)
    {
      digitalWrite(i,d0[i]);
    }
    break;
    case 1:
    for(int i=0;i<8;i++)
    {
      digitalWrite(i,d1[i]);
    }
    break;
    case 2:
    for(int i=0;i<8;i++)
    {
      digitalWrite(i,d2[i]);
    }
    break;
    case 3:
    for(int i=0;i<8;i++)
    {
      digitalWrite(i,d3[i]);
    }
    break;
    case 4:
    for(int i=0;i<8;i++)
    {
      digitalWrite(i,d4[i]);
    }
    break;
    case 5:
    for(int i=0;i<8;i++)
    {
      digitalWrite(i,d5[i]);
    }
    break;
    case 6:
    for(int i=0;i<8;i++)
    {
      digitalWrite(i,d6[i]);
    }
    break;
    case 7:
    for(int i=0;i<8;i++)
    {
      digitalWrite(i,d7[i]);
    }
    break;
    case 8:
    for(int i=0;i<8;i++)
    {
      digitalWrite(i,d8[i]);
    }
    break;
    case 9:
    for(int i=0;i<8;i++)
    {
      digitalWrite(i,d9[i]);
    }
    break;
    
    
  }
}

void licz()
{
  for(int i=0;i<8;i++)
  {
    digitalWrite(i,d0[i]);
  }
  delay(1000);
  for(int i=0;i<8;i++)
  {
    digitalWrite(i,d1[i]);
  }
  delay(1000);
  for(int i=0;i<8;i++)
  {
    digitalWrite(i,d2[i]);
  }
  delay(1000);
 for(int i=0;i<8;i++)
  {
    digitalWrite(i,d3[i]);
  }
  delay(1000);
  for(int i=0;i<8;i++)
  {
    digitalWrite(i,d4[i]);
  }
  delay(1000);
  for(int i=0;i<8;i++)
  {
    digitalWrite(i,d5[i]);
  }
  delay(1000);
  for(int i=0;i<8;i++)
  {
    digitalWrite(i,d6[i]);
  }
  delay(1000);
  for(int i=0;i<8;i++)
  {
    digitalWrite(i,d7[i]);
  }
  delay(1000);
  for(int i=0;i<8;i++)
  {
    digitalWrite(i,d8[i]);
  }
  delay(1000);
 for(int i=0;i<8;i++)
  {
    digitalWrite(i,d9[i]);
  }
  delay(1000);
}
