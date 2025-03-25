int sensor = A0;
2int reading;
3void setup(){
4  Serial.begin(9600);
5}
6void  loop(){
7  reading = analogRead(sensor);
8  Serial.println("Reading: ");
9  Serial.print(reading);
10}