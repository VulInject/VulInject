int
FUN1(struct VAR1 *VAR2)
{
int VAR3;

VAR3 = VAR2->VAR4 << 8;	
VAR2->VAR5 = 1;		
VAR3 |= VAR2->VAR4;		
return VAR3;
}