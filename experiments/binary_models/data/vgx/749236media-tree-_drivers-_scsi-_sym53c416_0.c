static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
sector_t VAR5, int *VAR6)
{
int VAR7;

VAR7 = VAR5;
VAR6[0] = 64;				
VAR6[1] = 32;				
if((VAR6[2] = VAR7 >> 11) > 1024)		
{
VAR6[0] = 255;			
VAR6[1] = 63;			
VAR6[2] = VAR7 / (255 * 63);	
}
return 0;
}