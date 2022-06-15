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
  String tmp = Serial.readString();
  int sep = tmp.indexOf(',');
  String xString = tmp.substring(0, sep);
  String yString = tmp.substring(sep, tmp.length());

  // On cast les string en int (c'est le type d'origine)
  int x = xString.toInt();
  int y = yString.toInt();

  Serial.print("x = ");
  Serial.println(x);
  Serial.print("y = ");
  Serial.println(y);
}
