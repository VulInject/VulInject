static void FUN1(VAR1 *VAR2)
{
VAR3 *VAR4;

VAR4 = FUN2(VAR2);
if (VAR4->VAR5) {
FUN3(VAR2, VAR6,
VAR7,
VAR4->VAR8 ? "" : "");
}

if (FUN4(VAR2)->VAR9)
FUN5(VAR2);
}