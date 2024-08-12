int
FUN1(int VAR1, struct VAR2 *VAR3)
{
struct VAR4 *VAR5;
int VAR6;

if ((VAR5 = FUN2(VAR1)) == NULL)
return (FUN3(VAR7));
VAR6 = FUN4(VAR5->VAR8->VAR9, VAR3);
FUN5(VAR1);
if (VAR6)
return (FUN3(VAR6));
return (0);
}