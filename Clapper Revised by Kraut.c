#pragma config(Sensor, S1,     sound,          sensorSoundDB)
#pragma config(Motor,  motorA,          flipper,       tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	int clapcount = 0;

	while(true)
	{
		displayTextLine(4,"clapcount: %d", clapcount);
		displayTextLine(5,"sound: %d", SensorValue(sound));
		if(SensorValue(sound) >= 90)
		{
			clapcount= clapcount + 1;
			wait10Msec(100);

			if(clapcount == 1)
			{
				motor[flipper] = -50;
				wait10Msec(20);
				motor[flipper]= 0;

     	if(clapcount == 2)
			{
				motor[flipper] = 50;
				wait10Msec(20);
				motor[flipper]= 0;




			}
		}
	}
}
}
