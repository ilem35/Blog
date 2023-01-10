#define D4 12
#define D5 13

void setup() {
  Serial.begin(115200);
  delay(500);           //经测试:初始化完后至少290ms内无法使用,这是内置usb初始速度慢导致的;这里延时500ms更稳定些
  Serial.println("Hello World!");
   
  pinMode(D4,OUTPUT);
  pinMode(D5,OUTPUT);
}

void loop() {
  digitalWrite(D4,HIGH);
  digitalWrite(D5,LOW);
  delay(500);

  digitalWrite(D4,LOW);
  digitalWrite(D5,HIGH);
  delay(500);          
}                      
