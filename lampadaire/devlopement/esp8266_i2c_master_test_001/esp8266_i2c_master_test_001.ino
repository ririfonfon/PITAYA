

// Make code work with normal Wire library.
#include <Arduino.h>
#include <Wire.h>
#define myWire Wire         // use the real Arduino Wire library instead of the SoftwareWire.

void setup()
{
  Serial.begin(9600);      // start serial port
  Serial.println(F("\nMaster"));
  myWire.begin(5, 4);
  myWire.begin();          // join i2c bus as master
}


void loop()
{
  //  Serial.println(F("Test with 200 transmissions of writing 10 bytes each"));
  //  byte buf[20] = { 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, };
  //  int err = 0;
  //  unsigned long millis1 = millis();
  //  boolean firsterr = false;
  //  for ( int i = 0; i < 200; i++)
  //  {
  //    myWire.beginTransmission(4);
  //    myWire.write( buf, 10);
  //    if ( myWire.endTransmission() != 0)
  //    {
  //      err++;
  //      if ( !firsterr)
  //      {
  //        Serial.print(F("first error at i = "));
  //        Serial.println(i);
  //        firsterr = true;
  //      }
  //    }
  //    delayMicroseconds(100);  // Even the normal Arduino Wire library needs some delay when the Slave disables interrupts.
  //  }
  //  unsigned long millis2 = millis();
  //  Serial.print(F("total time: "));
  //  Serial.print(millis2 - millis1);
  //  Serial.print(F(" ms, total errors: "));
  //  Serial.println(err);
  //
  //  delay(2000);
  //
  //  Serial.println(F("Sending data"));
  //  static byte x = 0;
  //  myWire.beginTransmission(4);       // transmit to i2c slave device #4
  //  myWire.write(x++);                 // counter, to check that everything was transmitted.
  //  for ( int i = 0; i < random( 32); i++) // 0 to 31 bytes (1 byte has been send already)
  //  {
  //    myWire.write(random(256));
  //  }
  //  int error = myWire.endTransmission(); // stop transmitting
  //  Serial.print(F("transmission status error="));
  //  Serial.println(error);
  //
  //  delay(2000);
  int n = myWire.requestFrom(4, 2);    // request bytes from Slave
  //  Serial.println(F("Requesting data"));
  //  Serial.print(F("n="));
  //  Serial.print(n);
  //  Serial.print(F(", available="));
  //  Serial.println(myWire.available());

  //  myWire.printStatus(Serial);      // This shows information about the SoftwareWire object.

  byte buffer[40];
  //  for( int j=0; j<n; j++)
  //    buffer[j] = myWire.read();
  myWire.readBytes( buffer, n);

  for ( int k = 0; k < n; k++)
  {
    if ( k == 0)
      Serial.print(F(" "));
    Serial.print( (int) buffer[k]);
    Serial.print(F(", "));
  }
  Serial.println();

  delay(20);
}
