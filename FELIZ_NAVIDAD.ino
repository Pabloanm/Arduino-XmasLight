/* FElIZ NAVIDAD 20211224 */
/* PWM Christmas Lights */

int pwmPinA = 6; //This is for the Tree 
int pwmPinB = 5; //This is for HouseA
int pwmPinC = 3; //this is for HouseB
int pwmPinD = 9; //This is for HouseC

int DelayA = 40;
int DelayB = 100;
int DelayC = 10;
int DelayD = 50;

int MaxValue = 255;
int MinValue = 10;
int MinValueHouse = 20;
int MaxValueHouse = 60;

void setup() {
 pinMode(pwmPinA, OUTPUT);
 pinMode(pwmPinB, OUTPUT);
 pinMode(pwmPinC, OUTPUT);
 pinMode(pwmPinD, OUTPUT);
}

void loop() {

  analogWrite(pwmPinB, 20);
  analogWrite(pwmPinC, 20);
  analogWrite(pwmPinD, 20);

  //increase 
  for(int value = MinValue; value<= MaxValue; value++){
    analogWrite(pwmPinA, value);
    delay(DelayA);

    if ((value > MinValueHouse) and (value < MaxValueHouse )) {
        analogWrite(pwmPinB, value);
        analogWrite(pwmPinC, value);
        analogWrite(pwmPinD, value);
    }
    
  }

  delay(DelayB);

  //decrease
  for(int value = MaxValue; value>= MinValue; value--){
     analogWrite(pwmPinA, value);
 
    if ((value > MinValueHouse) and (value < MaxValueHouse )) {
        analogWrite(pwmPinB, value);
        analogWrite(pwmPinC, value);
        analogWrite(pwmPinD, value);
    }

    delay(DelayC);
    }
    
  delay(DelayD);

}
