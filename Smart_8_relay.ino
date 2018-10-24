#define pin1 9
#define pin2 10
#define pin3 11
#define pin4 12
#define pin5 13
#define pin6 14
#define pin7 15
#define pin8 16
int mnt,hr,dt,mth,hrs,mnts,dts,mths,hr1,mnt1,mth1,dt1,q1,w1,e1,r1,o,n,f,h,blnk,work;
long yr,yr1,yrs,tmr,tmr1,tmrb;
int g1,g2,g3,g4,g5,g6,g7,g8;
int x1,x2,x3,x4,x5,x6,x7,x8;
int y1,y2,y3,y4,y5,y6,y7,y8;
#include <Wire.h>
#include <TimeLib.h>
#include <DS1307RTC.h>
char rel[3]={'R'};
char tr[2]={'T','R'};
char br[2]={'B','R'};
char str[5]={'S','T','A','R','T'};
char stp[4]={'S','T','O','P'};
int i,a,x,l,q,w,e,r,y,g;
char cmd[42]={0};
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
  while (!Serial) ; // wait for serial
  delay(200);
  Serial.println("DS1307RTC Read Test");
  Serial.println("-------------------");
  pinMode(9,OUTPUT);
   pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
     pinMode(12,OUTPUT);
      pinMode(13,OUTPUT);
       pinMode(14,OUTPUT);
        pinMode(15,OUTPUT);
         pinMode(16,OUTPUT);
         

}

void loop() {
  // put your main code here, to run repeatedly:
  
  tmElements_t tm;
  if (RTC.read(tm)) {
   
    hrs=tm.Hour;
  
    mnts=tm.Minute;
    
    dts=tm.Day;
   
    mths=tm.Month;
   
    yrs=tmYearToCalendar(tm.Year);
    
    
  }else {
    if (RTC.chipPresent()) {
      Serial.println("The DS1307 is stopped.  Please run the SetTime");
      Serial.println("example to initialize the time and begin running.");
      Serial.println();
    } else {
      Serial.println("DS1307 read error!  Please check the circuitry.");
      Serial.println();
    }
    delay(9000);
  }
  delay(1000);

  
  
  if (Serial.available() > 1)          // check if data has been sent from the computer
     {
       delay(500);           // turn the on board LED off by making the voltage LOW
       
       while(l<42)                     
          {
            cmd[l] = Serial.read();    // read the most recent byte and place it in a particular array position
            l++;                       // increment the value of l (ie, l = l+1)
          }
        
        l=0;                           // set l value to zero
        operations();                  // execute this function
     }
 else
     {
               // turn the on board LED ON by making the voltage HIGH  
       delay(500);                     // wait for 100 milliseconds
     }
    if(work==5)
    {
    if(yr==yrs)  
    {
     if(mth==mths)
     {
      if(dt==dts)
      {
    if(hr==hrs)
     {
       if(mnt==mnts)
       {
             if(x==1)
             { 
              Serial.println("ok");
             digitalWrite(16,HIGH);
             }
             if(x==2)
             {
             digitalWrite(15,HIGH);
              Serial.println("ok");
             }
             if(x==3){
             digitalWrite(14,HIGH);
              Serial.println("ok");
             }
              if(x==4){
             digitalWrite(13,HIGH);
              Serial.println("ok");
              }
             if(x==5){
             digitalWrite(12,HIGH);
              Serial.println("ok");
             }
              if(x==6){
             digitalWrite(11,HIGH);
              Serial.println("ok");
              }
             if(x==7){
             digitalWrite(10,HIGH);
              Serial.println("ok");
             }
              if(x==8){
             digitalWrite(9,HIGH);
              Serial.println("ok");
              }
  }}}}}
  if(yr1==yrs)
  {
  if(mth1==mths)
     {
      if(dt1==dts)
      {
    if(hr1==hrs)
     {
       if(mnt1==mnts)
       {
             if(x==1)
             { 
              Serial.println("ok");
             digitalWrite(16,LOW);
             }
             if(x==2){
             digitalWrite(15,LOW);
              Serial.println("ok");
             }
             if(x==3){
             digitalWrite(14,LOW);
              Serial.println("ok");
             }
              if(x==4){
             digitalWrite(13,LOW);
              Serial.println("ok");
              }
             if(x==5){
             digitalWrite(12,LOW);
              Serial.println("ok");
             }
              if(x==6){
             digitalWrite(11,LOW);
              Serial.println("ok");}
             if(x==7){
             digitalWrite(10,LOW);
              Serial.println("ok");
             }
              if(x==8){
             digitalWrite(9,LOW);
              Serial.println("ok");}
  }}}}}
 
       if(x1==5)
             { 
              Serial.println("ok");
             digitalWrite(16,HIGH);
             }
             if(x2==5){
             digitalWrite(15,HIGH);
              Serial.println("ok");
             }
             if(x3==5){
             digitalWrite(14,HIGH);
              Serial.println("ok");
             }
              if(x4==5){
             digitalWrite(13,HIGH);
              Serial.println("ok");
              }
             if(x5==5){
             digitalWrite(12,HIGH);
              Serial.println("ok");
             }
              if(x6==5){
             digitalWrite(11,HIGH);
              Serial.println("ok");
              }
             if(x7==5){
             digitalWrite(10,HIGH);
              Serial.println("ok");
             }
              if(x8==5){
             digitalWrite(9,HIGH);
              Serial.println("ok");
              }

        
        if(x1==0)
             { 
              Serial.println("ok");
             digitalWrite(16,LOW);
             g1=0;
             y1=0;
             }
             if(x2==0)
             {
              
              Serial.println("ok");
             digitalWrite(15,LOW);
             g2=0;
             y2=0;
             }
             if(x3==0){
             digitalWrite(14,LOW);
              Serial.println("ok");
              g3=0;
              y3=0;
             }
              if(x4==0){
             digitalWrite(13,LOW);
              Serial.println("ok");
              g4=0;
              y4=0;
              }
             if(x5==0){
             digitalWrite(12,LOW);
              Serial.println("ok");
              g5=0;
              y5=0;
             }
              if(x6==0){
             digitalWrite(11,LOW);
               Serial.println("ok");
              g6=0;
              y6=0;
              }
             if(x7==0){
             digitalWrite(10,LOW);
              Serial.println("ok");
             g7=0;
             y7=0;
             }
              if(x8==0){
             digitalWrite(9,LOW);
             Serial.println("ok"); 
               g8=0;
               y8=0;
      }
  if(blnk==5)
  {
       if(g1==5)
             { Serial.println("ok");
             digitalWrite(16,HIGH);
             delay(tmrb);
             
             digitalWrite(16,LOW);
             delay(tmr1);
             
             }
             if(g2==5)
             { Serial.println("ok");
              digitalWrite(15,HIGH);
             delay(tmrb);
             digitalWrite(15,LOW);
             delay(tmr1);
             }
             if(g3==5)
             { Serial.println("ok");
              digitalWrite(14,HIGH);
             delay(tmrb);
             digitalWrite(14,LOW);
             delay(tmr1);
             } 
             if(g4==5)
             {
               Serial.println("ok");
               digitalWrite(13,HIGH);
             delay(tmrb);
             digitalWrite(13,LOW);
             delay(tmr1);
             }
             if(g5==5)
             { Serial.println("ok");
              digitalWrite(12,HIGH);
             delay(tmrb);
             digitalWrite(12,LOW);
             delay(tmr1);
             }
             if(g6==5)
             { Serial.println("ok");
              digitalWrite(11,HIGH);
             delay(tmrb);
             digitalWrite(11,LOW);
             delay(tmr1);
             }
             if(g7==5)
             { Serial.println("ok");
              digitalWrite(10,HIGH);
             delay(tmrb);
             digitalWrite(10,LOW);
             delay(tmr1);
             }
             if(g8==5)
             {
               Serial.println("ok");
              digitalWrite(9,HIGH);
             delay(tmrb);
             digitalWrite(9,LOW);
             delay(tmr1);
          }
  }

             if(y1==5)
             {
             digitalWrite(16,HIGH);
             delay(tmr);
             digitalWrite(16,LOW);
             Serial.println("ok");
             }if(y2==5)
             {digitalWrite(15,HIGH);
             delay(tmr);
             digitalWrite(15,LOW);
              Serial.println("ok");
             }if(y3==5)
             {digitalWrite(14,HIGH);
             delay(tmr);
             digitalWrite(14,LOW);
              Serial.println("ok");
             } if(y4==5)
             {digitalWrite(13,HIGH);
             delay(tmr);
             digitalWrite(13,LOW);
              Serial.println("ok");
             }if(y5==5)
             {digitalWrite(12,HIGH);
             delay(tmr);
             digitalWrite(12,LOW);
              Serial.println("ok");
             }if(y6==5)
             {digitalWrite(11,HIGH);
             delay(tmr);
             digitalWrite(11,LOW);
              Serial.println("ok");
             }if(y7==5)
             {digitalWrite(10,HIGH);
             delay(tmr);
             digitalWrite(10,LOW);
              Serial.println("ok");
             }if(y8==5)
             {digitalWrite(9,HIGH);
             delay(tmr);
             digitalWrite(9,LOW);
              Serial.println("ok");
          }
          tmr=0;
}
}

void operations()
{
relay();
timer();
blinker();
start();
stops();
}
void relay()
{
  
   tmElements_t tm;
     i=a=0;
       while(a<1)
  {
    if(cmd[a] == rel[a])
      {
        i++;
        if(i==1)
          {  
            i=0;
           
            x=cmd[1]-48;
             o=cmd[3]-48;
             n=cmd[4]-48;
             f=cmd[5]-48;
             hr=cmd[3]*10+cmd[4]-528;
             mnt=cmd[6]*10+cmd[7]-528;
             hr1=cmd[9]*10+cmd[10]-528;
             mnt1=cmd[12]*10+cmd[13]-528;
             dt=cmd[15]*10+cmd[16]-528;
             mth=cmd[18]*10+cmd[19]-528;
             q=cmd[21]-48;
             w=cmd[22]-48;
             e=cmd[23]-48;
             r=cmd[24]-48;
             
             yr=q*1000+w*100+e*10+r;
             delay(50);
             q=w=e=r=h=0;
             dt1=cmd[26]*10+cmd[27]-528;
             mth1=cmd[29]*10+cmd[30]-528;
             q1=cmd[32]-48;
             w1=cmd[33]-48;
             e1=cmd[34]-48;
             r1=cmd[35]-48;
             
             yr1=q1*1000+w1*100+e1*10+r1;
             delay(50);
             q1=w1=e1=r1=0;
              if(o==63)
  {
    if(n==62)
    {
             if(x==1)
            x1=5;
            if(x==2)
            x2=5;
            if(x==3)
            x3=5;
            if(x==4)
            x4=5;
            if(x==5)
            x5=5;
            if(x==6)
            x6=5;
            if(x==7)
            x7=5;
            if(x==8)
            x8=5;
    }
  }
              if(o==63)
  {
    if(n==54)
    {
      if(f==54)
      { if(x==1)
            x1=0;
            if(x==2)
            x2=0;
            if(x==3)
            x3=0;
            if(x==4)
            x4=0;
            if(x==5)
            x5=0;
            if(x==6)
            x6=0;
            if(x==7)
            x7=0;
            if(x==8)
            x8=0;
      }
    }
  }
            
              
     
 
          }
      }
      a++;
  }
}


void print2digits(int number) {
  if (number >= 0 && number < 10) {
    Serial.write('0');
  }
  Serial.print(number);
}
void timer()
{
  
  i=a=0;

       while(a<2)
  {
    if(cmd[a] == tr[a])
      {
        i++;
        if(i==2)
          {  
            i=0;
            y=cmd[2]-48;
            q=cmd[4]-48;
            w=cmd[5]-48;
            e=cmd[6]-48;
            r=cmd[7]-48;
            h=q*1000+w*100+e*10+r;
            delay(50);
            tmr=h*1000;
            delay(50);
            q=w=e=r=h=0;
            if(y==1)
            y1=5;
            if(y==2)
            y2=5;
            if(y==3)
            y3=5;
            if(y==4)
            y4=5;
            if(y==5)
            y5=5;
            if(y==6)
            y6=5;
            if(y==7)
            y7=5;
            if(y==8)
            y8=5;
            
          }
      }
      a++;
  }
}

 void blinker()
 {
 
  i=a=0;

       while(a<2)
  {
    if(cmd[a] == br[a])
      {
        i++;
        if(i==2)
          {  
            i=0;
            
            g=cmd[2]-48;
            q=cmd[4]-48;
            w=cmd[5]-48;
            e=cmd[6]-48;
            r=cmd[7]-48;
            h=q*1000+w*100+e*10+r;
            delay(50);
            tmrb=h*1000;
            delay(50);
            q=w=e=r=h=0;
            q=cmd[9]-48;
            w=cmd[10]-48;
            e=cmd[11]-48;
            r=cmd[12]-48;
            h=q*1000+w*100+e*10+r;
            delay(50);
            tmr1=h*1000;
            blnk=5;
            q=w=e=r=h=0;
            if(g==1)
            g1=5;
            if(g==2)
            g2=5;
            if(g==3)
            g3=5;
            if(g==4)
            g4=5;
            if(g==5)
            g5=5;
            if(g==6)
            g6=5;
            if(g==7)
            g7=5;
            if(g==8)
            g8=5;
          }
      }
      
      a++;
  }
 }
 
 
 void start()
 {
  i=a=0;

       while(a<5)
  {
    if(cmd[a] == str[a])
      {
        i++;
        if(i==5)
          {  
            i=0;
            work=5;
             Serial.println("ok");
          }
      }
      a++;
  }
 }
 void stops()
  {   
  i=a=0;

       while(a<4)
  {
    if(cmd[a] == stp[a])
      {
        i++;
        if(i==4)
          {  
            i=0;
            work=0;
            digitalWrite(16,LOW);
            digitalWrite(15,LOW);
            digitalWrite(14,LOW);
            digitalWrite(13,LOW);
            digitalWrite(12,LOW);
            digitalWrite(11,LOW);
            digitalWrite(10,LOW);
            digitalWrite(9,LOW);
             Serial.println("ok");
          }
      }
      a++;
  }
  }
