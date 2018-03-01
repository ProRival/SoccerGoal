#pragma config(Sensor, dgtl4,  sonar, sensorSONAR_cm)
#pragma config(Motor,  port2, flashLight,  tmotorVexFlashlight, openLoop)

void blink(int seconds);

#define MAX = 14;
#define MIN = 4;

task score() {
	blink(10);
	wait(5);
}

task main() {

	while (true) {

		if (SensorValue(sonar) >= MIN && SensorValue(sonar) <= MAX) {
			//ball is in the goal.
			startTask(score);

		}

		waitInMilliseconds(10);

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
