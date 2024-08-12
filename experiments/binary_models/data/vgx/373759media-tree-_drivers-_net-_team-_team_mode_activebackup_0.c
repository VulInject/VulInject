static bool FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3)
{
struct VAR4 *VAR5;

VAR5 = FUN2(FUN3(VAR1)->VAR5);
if (FUN4(!VAR5))
goto VAR6;
if (FUN5(VAR1, VAR5, VAR3))
return false;
return true;

VAR6:
FUN6(VAR3);
return false;
}