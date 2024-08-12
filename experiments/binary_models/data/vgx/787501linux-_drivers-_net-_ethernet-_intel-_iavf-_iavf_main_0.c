static void FUN1(struct VAR1 *VAR2)
{
int VAR3;

FUN2(!(VAR2->VAR4 & VAR5));

memset(&VAR2->VAR6, 0, sizeof(VAR2->VAR6));

VAR3 = FUN3(VAR2);
if (VAR3)
goto VAR7;


VAR2->VAR4 &= ~VAR5;
return;
VAR7:

VAR2->VAR4 |= VAR8;
FUN4(VAR2, VAR9);
}