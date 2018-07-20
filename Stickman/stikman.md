typedef struct 
{
	int ID;
	float Posistion[3];
}PdsArticulation;

status=stickman_move_absolute(STICKMAN,Point1 ,IDs_fixed_articulation);
status=stickman_move_relative (STICKMAN,Vector1,IDs_fixed_articulation);
