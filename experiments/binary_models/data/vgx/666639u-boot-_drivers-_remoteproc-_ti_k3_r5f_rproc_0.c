static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = VAR4->VAR6;
int VAR7 = 0;

FUN3(VAR2, "", VAR8);

if (VAR6->VAR9 == VAR10)
VAR7 = FUN4(VAR6);
else
VAR7 = FUN5(VAR4);

if (VAR7)
FUN6(VAR2, "",
VAR7);

return VAR7;
}