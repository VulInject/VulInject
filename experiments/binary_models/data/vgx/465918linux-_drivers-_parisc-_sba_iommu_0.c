static int
FUN1(struct VAR1 *VAR1, char *VAR2)
{
VAR3 *VAR4 = (VAR3 *) &(VAR1->VAR5[VAR1->VAR6]);
VAR3 *VAR7 = (VAR3 *) VAR1->VAR5;	
VAR8 *VAR9 = VAR1->VAR10;	
uint VAR11 = 0;

while (VAR7 < VAR4) {
u32 VAR12 = *VAR7;
int VAR13 = 32;	

while (VAR13) {

u32 VAR14 = ((VAR3) (((char *)VAR9)[7])) << 24;
if ((VAR12 ^ VAR14) & 0x80000000)
{

FUN2(VAR1, VAR2, VAR11);
return(1);
}
VAR13--;
VAR12 <<= 1;	
VAR9++;
VAR11++;
}
VAR7++;	
}

return 0;
}