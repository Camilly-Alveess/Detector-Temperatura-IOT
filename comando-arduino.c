#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define DHTPIN A1
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

LiquidCrystal_I2C lcd(0x27, 16, 2); // Corrigido a declaração do objeto LCD

void setup() { // Corrigido o nome da função Setup para setup
  Serial.begin(9600);
  Serial.println("Teste do DHT11");
  dht.begin();
  Wire.begin(); // Corrigido o nome do objeto Wire
  
  lcd.begin(16,2);  // Inicializa o LCD
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  
  if (isnan(t) || isnan(h)) {
    Serial.println("Falha na leitura do sensor DHT");
  } else {
    Serial.print("Umidade: ");
    Serial.print(h);
    Serial.print("Temper: ");
    Serial.print(t);
    Serial.println("C");
  }
  
  lcd.clear();
  lcd.setBacklight(HIGH);
  
  lcd.setCursor(0,0);
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print("*C");
  
  lcd.setCursor(0,1);
  char buf[5]; // Declaração da variável buf
  lcd.print("Umidade: ");
  lcd.print(dtostrf(h, 4, 1, buf)); // Converte float para string com 1 casa decimal
  lcd.print("%");
  
  delay(1000);
}
