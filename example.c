int lampada=1
void setup(){
    pinMode(lampada,OUTPUT);
}
void loop(){
    for(i=0;i<10;i++){
        digitalWrite(lampada,HIGH);
        sleep(5000);
        digitalWrite(lampada,LOW);
    }
    return null;
}