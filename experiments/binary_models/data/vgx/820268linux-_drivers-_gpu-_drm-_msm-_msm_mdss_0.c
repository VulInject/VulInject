static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR3)
{
struct VAR4 *VAR5;
struct VAR4 *VAR6;

VAR5 = FUN2(VAR2, "");
if (FUN3(VAR5))
return FUN4(VAR5);

VAR3->VAR7[0] = VAR5;
VAR3->VAR8 = 1;

VAR6 = FUN2(VAR2, "");
if (!FUN3(VAR6)) {
VAR3->VAR7[1] = VAR6;
VAR3->VAR8++;
}

return 0;
}