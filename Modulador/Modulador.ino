#define redColor  11
#define blueColor  10
#define greenColor  9
//120
#define timeDelay 1000

//char* text = "_Escribi un cuento de cien palabras perfecto. La gente lo leia con avidez, y lo enviaban entusiasmados~a sus amigos. Me llamaron para hablar sobre el cuento en la tele, y desde Hollywood querian~adaptarlo. Entonces alguien descubrio que habia escrito *porque*, en vez de *por que*, asi que~ahora sobraba una palabra. Pero quitar cualquiera de ellas desmontaba el delicado mecanismo de~relojeria que habia conseguido construir. Finalmente elimine un articulo, pero ya no es lo mismo.~Los criticos literarios me ignoran, han cancelado el programa al que tenia que ir, y Scorsese ya no~me coge el telefono. -";

char* text = "_a8-";
             
int textSize;
String stopWord = "";

const char ROJO = '11';
const char AZUL = '01';
const char VERDE = '10';
const char BLANCO = '00';

//PROTOCOLO DESCARTADO :( NUEVO - Encendido y apagado
//00 --->Rojo           (250,0,0)  
//01 --->Verde          (0,250,0) 
//10 --->Azul           (0,0,250)
//11 --->Magenta        (250,0,255)

void setup() {
   
  pinMode(redColor,OUTPUT);
  digitalWrite(redColor,LOW);
  pinMode(blueColor,OUTPUT);
  digitalWrite(redColor,LOW);
  pinMode(greenColor,OUTPUT);
  digitalWrite(greenColor,LOW);
  delay(3000);
  textSize = strlen(text);
  Serial.begin(9600);
}
 

void loop() {
  // Solo si llegaron datos los lee
  if(stopWord != "Stop"){
    Serial.print("Inicio de transmisión de palabra");
    for(int i = 0 ; i < textSize ; i++){//Aqui imprimo letra por letra
      wordToBinary(text[i]);
    }
    Serial.print("Fin de transmisión de palabra");
    delay(timeDelay);
  }
  digitalWrite(redColor,LOW);
  digitalWrite(blueColor,LOW);
  digitalWrite(greenColor,LOW);
}

void wordToBinary(char wordToUse){//Convierte cada letra a binario
  
  digitalWrite(redColor,LOW);
  delay(timeDelay);//Aqui envia la señal de inicio de letra
  
  if(wordToUse == 'a'){
    firstBinaryToColor("01100001");//Cambiar, solo prueba
    Serial.print("a");
  }else if(wordToUse == 'b'){
    firstBinaryToColor("01100010");
    Serial.print("b");
  }else if(wordToUse == 'c'){
    firstBinaryToColor("01100011");
    Serial.print("c");
  }else if(wordToUse == 'd'){
    firstBinaryToColor("01100100");
    Serial.print("d");
  }else if(wordToUse == 'e'){
    firstBinaryToColor("01100101");
    Serial.print("e");
  }else if(wordToUse == 'f'){
     firstBinaryToColor("01100110");
     Serial.print("f");
  }else if(wordToUse == 'g'){
     firstBinaryToColor("01100111");
     Serial.print("g");
  }else if(wordToUse == 'h'){
     firstBinaryToColor("01101000");
     Serial.print("h");
  }else if(wordToUse == 'i'){
     firstBinaryToColor("01101001");
     Serial.print("i");
  }else if(wordToUse == 'j'){
     firstBinaryToColor("01101010");
     Serial.print("j");
  }else if(wordToUse == 'k'){
     firstBinaryToColor("01101011");
     Serial.print("k");
  }else if(wordToUse == 'l'){
     firstBinaryToColor("01101100");
     Serial.print("l");
  }else if(wordToUse == 'm'){
     firstBinaryToColor("01101101");
     Serial.print("m");
  }else if(wordToUse == 'n'){
     firstBinaryToColor("01101110");
     Serial.print("n");
  }else if(wordToUse == 'o'){
     firstBinaryToColor("01101111");
     Serial.print("o");
  }else if(wordToUse == 'p'){
     firstBinaryToColor("01110000");
     Serial.print("p");
  }else if(wordToUse == 'q'){
     firstBinaryToColor("01110001");
     Serial.print("q");
  }else if(wordToUse == 'r'){
     firstBinaryToColor("01110010");
     Serial.print("r");
  }else if(wordToUse == 's'){
     firstBinaryToColor("01110011");
     Serial.print("s");
  }else if(wordToUse == 't'){
     firstBinaryToColor("01110100");
     Serial.print("t");
  }else if(wordToUse == 'u'){
    firstBinaryToColor("01110101");
     Serial.print("u");
  }else if(wordToUse == 'v'){
     firstBinaryToColor("01110110");
     Serial.print("v");
  }else if(wordToUse == 'w'){
     firstBinaryToColor("01110111");
     Serial.print("w");
  }else if(wordToUse == 'x'){
     firstBinaryToColor("01111000");
     Serial.print("x");
  }else if(wordToUse == 'y'){
     firstBinaryToColor("01111001");
     Serial.print("y");
  }else if(wordToUse == 'z'){
     firstBinaryToColor("01111010");
     Serial.print("z");
  }

  else if(wordToUse == 'A'){
     firstBinaryToColor("01000001");
     Serial.print("A");
  }else if(wordToUse == 'B'){
     firstBinaryToColor("01000010");
     Serial.print("B");
  }else if(wordToUse == 'C'){
     firstBinaryToColor("01000011");
     Serial.print("C");
  }else if(wordToUse == 'D'){
     firstBinaryToColor("01000100");
     Serial.print("D");
  }else if(wordToUse == 'E'){
     firstBinaryToColor("01000101");
     Serial.print("E");
  }else if(wordToUse == 'F'){
     firstBinaryToColor("01000110");
     Serial.print("F");
  }else if(wordToUse == 'G'){
     firstBinaryToColor("01000111");
     Serial.print("G");
  }else if(wordToUse == 'H'){
     firstBinaryToColor("01001000");
     Serial.print("H");
  }else if(wordToUse == 'I'){
     firstBinaryToColor("01001001");
     Serial.print("I");
  }else if(wordToUse == 'J'){
     firstBinaryToColor("01001010");
     Serial.print("J");
  }else if(wordToUse == 'K'){
     firstBinaryToColor("01001011");
     Serial.print("K");
  }else if(wordToUse == 'L'){
     firstBinaryToColor("01001100");
     Serial.print("L");
  }else if(wordToUse == 'M'){
     firstBinaryToColor("01001101");
     Serial.print("M");
  }else if(wordToUse == 'N'){
     firstBinaryToColor("01001110");
     Serial.print("N");
  }else if(wordToUse == 'O'){
     firstBinaryToColor("01001111");
     Serial.print("O");
  }else if(wordToUse == 'P'){
    firstBinaryToColor("01010000");
     Serial.print("P");
  }else if(wordToUse == 'Q'){
     firstBinaryToColor("01010001");
     Serial.print("Q");
  }else if(wordToUse == 'R'){
     firstBinaryToColor("01010010");
     Serial.print("R");
  }else if(wordToUse == 'S'){
     firstBinaryToColor("01010011");
     Serial.print("S");
  }else if(wordToUse == 'T'){
     firstBinaryToColor("01010100");
     Serial.print("T");
  }else if(wordToUse == 'U'){
     firstBinaryToColor("01010101");
     Serial.print("U");
  }else if(wordToUse == 'V'){
     firstBinaryToColor("01010110");
     Serial.print("V");
  }else if(wordToUse == 'W'){
     firstBinaryToColor("01010111");
     Serial.print("W");
  }else if(wordToUse == 'X'){
     firstBinaryToColor("01011000");
     Serial.print("X");
  }else if(wordToUse == 'Y'){
     firstBinaryToColor("01011001");
     Serial.print("Y");
  }else if(wordToUse == 'Z'){
     firstBinaryToColor("01011010");
     Serial.print("Z");
  }


  else if(wordToUse == ' '){
     firstBinaryToColor("00100000");
     Serial.print(" ");
  }else if(wordToUse == '@'){
     firstBinaryToColor("01000000");
     Serial.print("@");
  }else if(wordToUse == '!'){
     firstBinaryToColor("00100001");
     Serial.print("!");
  }else if(wordToUse == '*'){
     firstBinaryToColor("00101010");
     Serial.print("*");
  }else if(wordToUse == ','){
     firstBinaryToColor("00101100");
     Serial.print(",");
  }else if(wordToUse == '.'){
     firstBinaryToColor("00101110");
     Serial.print(".");
  }else if(wordToUse == ':'){
     firstBinaryToColor("00111010");
     Serial.print(":");
  }else if(wordToUse == ';'){
     firstBinaryToColor("00111011");
     Serial.print(";");
  }else if(wordToUse == '_'){ //Inicio texto
     firstBinaryToColor("01011111");
     Serial.print("_");
  }else if(wordToUse == '-'){ //Fin texto
     firstBinaryToColor("00101101");
     Serial.print("-");
     stopWord = "Stop";
  }else if(wordToUse == '~'){ //Salto de linea trampa :v
     firstBinaryToColor("01111110");
     Serial.println("");
  }

  else if(wordToUse == '0'){
     firstBinaryToColor("00110000");
     Serial.print("0");
  }else if(wordToUse == '1'){
     firstBinaryToColor("00110001");
     Serial.print("1");
  }else if(wordToUse == '2'){
     firstBinaryToColor("00110010");
     Serial.print("2");
  }else if(wordToUse == '3'){
     firstBinaryToColor("00110011");
     Serial.print("3");
  }else if(wordToUse == '4'){
     firstBinaryToColor("00110100");
     Serial.print("4");
  }else if(wordToUse == '5'){
     firstBinaryToColor("00110101");
     Serial.print("5");
  }else if(wordToUse == '6'){
     firstBinaryToColor("00110110");
     Serial.print("6");
  }else if(wordToUse == '7'){
     firstBinaryToColor("00110111");
     Serial.print("7");
  }else if(wordToUse == '8'){
     firstBinaryToColor("00111000");
     Serial.print("8");
  }else if(wordToUse == '9'){
     firstBinaryToColor("00111001");
     Serial.print("9");  
  }

}

String getFirstColor(String bitToColor){
  String firstColor = "";
  if (bitToColor[0]== '1' && bitToColor[1]== '1'){
    firstColor = "11";
    return firstColor;
  }else if(bitToColor[0]== '1' && bitToColor[1]== '0'){
    firstColor = "10";
    return firstColor;
  }else if(bitToColor[0]== '0' && bitToColor[1]== '1'){
    firstColor = "01";
    return firstColor;
  }else if(bitToColor[0]== '0' && bitToColor[1]== '0'){
    firstColor = "00";
    return firstColor;
  } else {
    return "";
  }
}

String getSecondColor(String bitToColor){
  String secondColor = "00";
  if (bitToColor[2]==1 && bitToColor[3]==1){
    secondColor = "11";
    return secondColor;
  }else if(bitToColor[2]==1 && bitToColor[3]==0){
    secondColor = "10";
    return secondColor;
  }else if(bitToColor[2]==0 && bitToColor[3]==1){
    secondColor = "01";
    return secondColor;
  }else {
    return secondColor;
  }
}
  String getThirdColor(String bitToColor){
  String thirdColor = "00";
  if (bitToColor[4]==1 && bitToColor[5]==1){
    thirdColor  = "11";
    return thirdColor ;
  }else if(bitToColor[4]==1 && bitToColor[5]==0){
    thirdColor  = "10";
    return thirdColor ;
  }else if(bitToColor[4]==0 && bitToColor[5]==1){
    thirdColor  = "01";
    return thirdColor ;
  }else {
    return thirdColor ;
  }
}


String getFourthColor(String bitToColor){
  String fourthColor = "00";
  if (bitToColor[6]==1 && bitToColor[7]==1){
    fourthColor = "11";
    return fourthColor  ;
  }else if(bitToColor[6]==1 && bitToColor[7]==0){
    fourthColor = "10";
    return fourthColor  ;
  }else if(bitToColor[6]==0 && bitToColor[7]==1){
    fourthColor   = "01";
    return fourthColor  ;
  }else {
    return fourthColor  ;
  }
}



void firstBinaryToColor(String bitToColor){
  Serial.print("Primer Color: " + getFirstColor(bitToColor)+"::") ; 
    if(getFirstColor(bitToColor)== "11"){
      digitalWrite(redColor,HIGH);
      delay(timeDelay);
    }
    else if(getFirstColor(bitToColor)== "10"){
      digitalWrite(greenColor,HIGH);
      delay(timeDelay);
    }
    else if(getFirstColor(bitToColor)== "01"){
      Serial.print("Entré al blue::");
      digitalWrite(redColor,LOW);
      digitalWrite(blueColor,HIGH);
      digitalWrite(greenColor,LOW);
      delay(timeDelay);
    }
    else if(getFirstColor(bitToColor)== "00"){
    Serial.print("Entré al blanco::");
      digitalWrite(redColor,HIGH);
      digitalWrite(blueColor,HIGH);
      digitalWrite(greenColor,HIGH);
      delay(timeDelay);
    }
    
}


void secondBinaryToColor(String bitToColor){
  Serial.print(getFirstColor(bitToColor));
  Serial.print(getSecondColor(bitToColor));
  
    if(getSecondColor(bitToColor)== "11"){
      digitalWrite(redColor,HIGH);
      delay(timeDelay);
    }
    else if(getSecondColor(bitToColor)== "10"){
      digitalWrite(greenColor,HIGH);
      delay(timeDelay);
    }
    else if(getSecondColor(bitToColor)== "01"){
      digitalWrite(blueColor,HIGH);
      delay(timeDelay);
    }
    else if(getSecondColor(bitToColor)== "00"){
      digitalWrite(redColor,HIGH);
      digitalWrite(blueColor,HIGH);
      digitalWrite(greenColor,HIGH);
      delay(timeDelay);
    }
    else{
      digitalWrite(redColor,LOW);
      digitalWrite(blueColor,LOW);
      digitalWrite(greenColor,LOW);
      delay(timeDelay);
    }
}

void thirdBinaryToColor(String bitToColor){
 // Serial.print(getThirdColor(bitToColor));
  
    if(getThirdColor(bitToColor)== "11"){
      digitalWrite(redColor,HIGH);
      delay(timeDelay);
    }
    else if(getThirdColor(bitToColor)== "10"){
      digitalWrite(greenColor,HIGH);
      delay(timeDelay);
    }
    else if(getThirdColor(bitToColor)== "01"){
      digitalWrite(blueColor,HIGH);
      delay(timeDelay);
    }
    else if(getThirdColor(bitToColor)== "00"){
      digitalWrite(redColor,HIGH);
      digitalWrite(blueColor,HIGH);
      digitalWrite(greenColor,HIGH);
      delay(timeDelay);
    }
    else{
      digitalWrite(redColor,LOW);
      digitalWrite(blueColor,LOW);
      digitalWrite(greenColor,LOW);
      delay(timeDelay);
    }
}

void fourthBinaryToColor(String bitToColor){
  //Serial.print(getfourthColor(bitToColor));
 
    if(getFourthColor(bitToColor)== "11"){
      digitalWrite(redColor,HIGH);
      delay(timeDelay);
    }
    else if(getFourthColor(bitToColor)== "10"){
      digitalWrite(greenColor,HIGH);
      delay(timeDelay);
    }
    else if(getFourthColor(bitToColor)== "01"){
      digitalWrite(blueColor,HIGH);
      delay(timeDelay);
    }
    else if(getFourthColor(bitToColor)== "00"){
      digitalWrite(redColor,HIGH);
      digitalWrite(blueColor,HIGH);
      digitalWrite(greenColor,HIGH);
      delay(timeDelay);
    }
    else{
      digitalWrite(redColor,LOW);
      digitalWrite(blueColor,LOW);
      digitalWrite(greenColor,LOW);
      delay(timeDelay);
    }
  digitalWrite(redColor,LOW);
  digitalWrite(blueColor,LOW);
  digitalWrite(greenColor,LOW);
  delay(timeDelay);//Fin de transmision de la letra
}
