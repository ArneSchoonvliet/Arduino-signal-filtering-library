#include <SignalFilter.h>

SignalFilter Filter;

int value;
int filtered;

void setup()
{
  Serial.begin(9600);
  Filter.begin();
  Filter.setFilter('c');
  Filter.setOrder(1);
}

void loop()
{
  value = analogRead(A0);
  filtered= Filter.run(value);
  Serial.print("In: ");
  Serial.print(value);
  Serial.print(" - Out: ");
  Serial.println(filtered);
  delay(500);                                     //make it readable
}
