long variable;

void setup() {
  // put your setup code here, to run once:
variable = 0;
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(variable++);
  delay(100);
}
