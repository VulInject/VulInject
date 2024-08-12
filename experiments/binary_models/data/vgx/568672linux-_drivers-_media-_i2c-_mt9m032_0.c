static int FUN1(struct VAR1 *VAR2, s32 VAR3)
{
struct VAR4 *VAR5 = FUN2(&VAR2->VAR6);
int VAR7;	
int VAR8;		
int VAR9;	
u16 VAR10;

VAR7 = 51; 

if (VAR3 < 63) {
VAR8 = 0;
VAR9 = VAR3;
} else {
VAR8 = 1;
VAR9 = VAR3 / 2;
}




VAR10 = ((VAR7 & VAR11)
<< VAR12)
| ((VAR8 & 1) << VAR13)
| (VAR9 & VAR14);

return FUN3(VAR5, VAR15, VAR10);
}