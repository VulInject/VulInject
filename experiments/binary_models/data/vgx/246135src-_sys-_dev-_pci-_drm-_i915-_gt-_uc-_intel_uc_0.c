static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2)->VAR4;

if (VAR4->VAR5.VAR6 != -1)
return;


if (FUN3(VAR4) < 12) {
VAR4->VAR5.VAR6 = 0;
return;
}


if (FUN4(VAR4) || FUN5(VAR4)) {
VAR4->VAR5.VAR6 = 0;
return;
}


if (FUN6(VAR4) && !FUN7(VAR4)) {
VAR4->VAR5.VAR6 = VAR7;
return;
}


VAR4->VAR5.VAR6 = VAR7 | VAR8;


if (FUN8(VAR4) || FUN9(VAR4))
VAR4->VAR5.VAR6 &= ~VAR7;
}