static int FUN1(struct VAR1 *VAR1, u16 VAR2, u16 VAR3)
{
int VAR4;
struct VAR5 *VAR6 = VAR1->VAR6;

VAR4 = FUN2(VAR6,
FUN3(VAR6, 0),
0,		
VAR7 | VAR8,
VAR3, VAR2, NULL, 0, 500);
FUN4(VAR9, "",
VAR2, VAR3);
if (VAR4 < 0)
FUN5("", VAR4);
return VAR4;
}