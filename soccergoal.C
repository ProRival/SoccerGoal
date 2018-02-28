#pragma config(Sensor, dgtl4,  sonar,          sensorSONAR_cm)
#pragma config(Motor,  port2,           flashLight,    tmotorVexFlashlight, openLoop, reversed)

void blink(int seconds);

#define MAX = 14;
#define MIN = 4;

task main() {
	blink(5);

	/*
	while(true) {

		if (SensorValue(V) < 2950 ||SensorValue(II)<2990||SensorValue(III)<2990||SensorValue(IV)<2950) {
			turnFlashlightOn(flash, 127);
			wait(.5);
			turnFlashlightOff(flash);
			wait(.5);
			playSound(soundBeepBeep);
			turnFlashlightOn(flash, 127);
			wait(.5);
			turnFlashlightOff(flash);

		}

	}*/
}



void blink(int seconds) {
	turnFlashlightOff(flashLight);
	for (int i = 0; i < seconds * 10; i++) {
		waitInMilliseconds(33);
		turnFlashlightOn(flashLight);
		waitInMilliseconds(33);
		turnFlashlightOff(flashLight);
		waitInMilliseconds(33);
	}
}
