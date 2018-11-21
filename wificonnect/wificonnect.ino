int ii;
void setup()
{
  Serial.begin(115200);
  ii=0;

  delay(1000);
  Serial.println("AT+CWMODE=3");
  delay(1000);
  Serial.println("AT+RST"); //the newline and CR added
  delay(2000);  //arbitrary value
  Serial.println("AT+CWJAP=\"Lighthouse\",\"ueberallenwipfelnistruh\""); // Connect to Network
  delay(10000);
  Serial.println("AT+CIPSTART=\"TCP\",\"192.168.2.105\",8080");
  delay(1000);
  Serial.println("AT+CIPSEND=4");
  delay(1000);
  Serial.print("test");
  delay(2000); // - See more at: http://www.esp8266.com/viewtopic.php?f=13&t=10032&start=28#sthash.B9DsnkwX.dpuf */
}

void loop() {

  Serial.println("AT+CIPSEND=4");
  delay(1000);
  Serial.print("test");
  delay(2000); // - See more at: http://www.esp8266.com/viewtopic.php?f=13&t=10032&start=28#sthash.B9DsnkwX.dpuf */

}
