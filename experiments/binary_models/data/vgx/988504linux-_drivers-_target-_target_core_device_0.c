bool FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
int VAR5 = FUN2(VAR4);

if (!FUN3(VAR4))
return false;

VAR2->VAR6 =
FUN3(VAR4) >> (FUN4(VAR5) - 9);

VAR2->VAR7 = 1;
VAR2->VAR8 = FUN5(VAR4) / VAR5;
VAR2->VAR9 =
FUN6(VAR4) / VAR5;
return true;
}