static int FUN1(struct VAR1 *VAR1,
u16 VAR2,	
u16 VAR3)	
{
int VAR4;

VAR4 = FUN2(VAR1->VAR5,
FUN3(VAR1->VAR5, 0),
VAR2,
VAR6 | VAR7 | VAR8,
0,			
VAR3,
VAR1->VAR9, 2,
500);			
if (VAR4 < 0)
return VAR4;
return (VAR1->VAR9[1] << 8) + VAR1->VAR9[0];
}