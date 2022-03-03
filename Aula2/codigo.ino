const int botao = 2;
const int ledVm = 3;
const int ledVd = 4;

void setup()
{
  pinMode(botao, INPUT);
  pinMode(ledVm, OUTPUT);
  pinMode(ledVd, OUTPUT);
}

int var;

void loop()
{
  var = digitalRead(2);
  if(var){
    digitalWrite(ledVd, HIGH);
    digitalWrite(ledVm, LOW);
  }else{
    digitalWrite(ledVm, HIGH);
    digitalWrite(ledVd, LOW);
  }
  delay(10);
}
