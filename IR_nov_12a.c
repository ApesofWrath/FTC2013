#pragma config(Sensor, S1,     infrared,       sensorHiTechnicIRSeeker1200)
#pragma config(Motor,  motorB,          right,         tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorC,          left,          tmotorNXT, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

int infsensdat;
void infra ()
{
	string s;
	infsensdat = SensorValue[infrared];
	sprintf(s, "infrared: %d",infsensdat);
	nxtDisplayCenteredTextLine(2, s);
}
task main()
{
	while (true)
	{
		infra () ;
	}
}
