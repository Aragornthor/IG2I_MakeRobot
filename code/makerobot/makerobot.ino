int x;
int y;

void setup() {
  Serial.begin(115200);
  Serial.setTimeout(1);
}

void loop() {
  // On attend que des données soient reçues
  while (!Serial.available());
  
  // On sépare x et y
  char * xString = strtok(Serial.readString(), ',');
  char * yString = strtok(NULL, ','); // NULL pour le second appel, voir le man de la fonction

  // On cast les string en int (c'est le type d'origine)
  int x = xString.toInt();
  int y = yString.toInt();

  Serial.print("x = ");
  Serial.println(x);
  Serial.print("y = ");
  Serial.println(y);
}
