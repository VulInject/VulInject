static int FUN1(unsigned short VAR1, struct VAR2 *VAR3)
{
int VAR4 = FUN2(VAR1);
unsigned int VAR5, VAR6;

VAR5 = VAR3->VAR7 & VAR8 ? 1 : 0;
VAR6 = FUN3(VAR3, VAR4);
VAR5 += VAR6;
VAR5 += (unsigned int)FUN3(VAR3, FUN4(VAR1));
FUN5(VAR3, VAR4, VAR5);


if (VAR5 < VAR6)
VAR3->VAR7 |= VAR8;
else
VAR3->VAR7 &= ~(VAR8);

return 0;
}