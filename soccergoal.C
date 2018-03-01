#pragma config(Sensor, dgtl4,  sonar, sensorSONAR_cm)
#pragma config(Motor,  port2, flashLight,  tmotorVexFlashlight, openLoop)

void blink(int seconds);

task main() {

	while (true) {

		if ((SensorValue(sonar) >= 4) && (SensorValue(sonar) <= 14)) {
			//ball is in the goal.
			blink(10);
			wait(10);
		}

		waitInMilliseconds(10);
	}
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
