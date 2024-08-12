static int FUN1(struct VAR1 *VAR2)
{
int VAR3;

VAR3 = FUN2(VAR2->VAR4, true);

if (VAR3 < 0)
return VAR3;

VAR3 = FUN3(VAR2->VAR4, VAR5,
FUN4(VAR6,
VAR7));
if (VAR3 < 0)
return VAR3;

VAR3 = FUN3(VAR2->VAR4, VAR8,
VAR9);
if (VAR3 < 0)
return VAR3;

VAR3 = FUN3(VAR2->VAR4, VAR10,
VAR11);
if (VAR3 < 0)
return VAR3;

return 0;
}