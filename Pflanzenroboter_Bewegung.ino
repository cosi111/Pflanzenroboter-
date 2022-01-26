void setup() {
  pinMode(2, OUTPUT); //am PIN 2 ist unser DIECTION PIN angeschlossen, dieser wird hier als Output festgelegt.
  pinMode(3, OUTPUT); //am PIN 3 ist unser STEPPER PIN angeschlossen, dieser wird hier als Output festgelegt.
}

void loop() {
  digitalWrite(2, HIGH); //der Roboter fährt vorwärts; wenn hier der Befehl "LOW" steht, fährt der Roboter rückwärts.

  digitalWrite(3, HIGH); //die Geschwindigkeit des Roboters wird hier bestimmt...
  delay(1);//...indem die Pause zwischen HIGH und LOW auf 1 Millisekunde gesetzt wird.
  digitalWrite(3, LOW);
  delay(1);
}
