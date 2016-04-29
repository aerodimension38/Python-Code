    byte val;

    void setup()
    {
      Serial.begin(9600);
      
      pinMode(1, OUTPUT);//Light1 pin
      pinMode(2, OUTPUT);//Light2 pin
      pinMode(3, OUTPUT);//Light3 pin
      pinMode(4, OUTPUT);//Light4 pin
     
    }

    void loop()
    {
     int a=0;
     if(Serial.available())
      {
        val=Serial.read();
        Serial.println(int(val));   //Display received value on Serial Monitor

    if(int(val)==49)//Turn Light1 ON   //change the value here
       digitalWrite(1,HIGH);

     else if (int(val)==50)//Turn Light1 OFF   //change the value here
             digitalWrite(1,LOW);

    if(int(val)==51)//Turn Light2 ON    //change the value here
       digitalWrite(2,HIGH);
       
     else if(int(val)==52)//Turn Light2 OFF    //change the value here
          digitalWrite(2,LOW);
          
    if(int(val)==53)//Turn Light3 ON   //change the value here
       digitalWrite(3,HIGH);

     else if(int(val)==54)//Turn Light3 OFF   //change the value here
           digitalWrite(3,LOW);
           
    if(int(val)==55)//Turn Light3 ON   //change the value here
       digitalWrite(4,HIGH);
       
     else if(int(val)==56)//Turn Light4 OFF    //change the value here
           digitalWrite(4,LOW);

    }
    }


