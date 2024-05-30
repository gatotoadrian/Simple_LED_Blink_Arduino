# Blinking the onboard LED

This is the "hello world" introductory project to the ESP32 microcontroller

This project seek to introduce you to the fundamentals of microcontrollers through blinking the onboard LED on and off at a certain intercal.

We first set the pin as output via the pinmode command in the **Setup** block

```cpp
pinMode(LED_BUILTIN, OUTPUT);
```

We then turn the LED on/off in the **Loop** function block, with a delay of 1 second, or any duration specified

```cpp
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
```#   S i m p l e _ L E D _ B l i n k _ A r d u i n o  
 