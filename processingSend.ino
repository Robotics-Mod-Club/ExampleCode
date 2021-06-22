import processing.serial.*;

Serial myPort;


void setup() {
  size(1500, 1500);
  myPort = new Serial(this, "COM7", 9600); //change this port 
  myPort.bufferUntil('\n');
}

void sendInput(int mouseXmin, int mouseXmax, int mouseYmin, int mouseYmax, char sendNumber) {
  if (mousePressed && mouseX>mouseXmin && mouseX<mouseXmax && mouseY>mouseYmin && mouseY<mouseYmax) {  
    myPort.write(sendNumber); 
    stroke(255, 0, 0);
    strokeWeight(2);
    noFill();
  } 
}

void draw() {

  background(255, 255, 255);
  
  rect(100, 100, 500, 500);
  
  if ( mousePressed == true && mouseX >= 100 && mouseX < 600 && mouseY >= 100 && mouseY < 600 ) {

    //sendInput(100, 600, 100, 600, '1');
    fill( 100,100,100);
  } else {
     fill(100, 200, 200);
  }
}
