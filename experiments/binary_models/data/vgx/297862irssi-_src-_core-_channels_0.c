void FUN1(VAR1 *VAR2)
{
FUN2(FUN3(VAR2));

if (VAR2->VAR3) return;
VAR2->VAR3 = VAR4;

VAR5 = FUN4(VAR5, VAR2);
VAR2->VAR6->VAR5 =
FUN4(VAR2->VAR6->VAR5, VAR2);

FUN5("", 1, VAR2);

FUN6(VAR2);
FUN7(VAR2->VAR7);
FUN7(VAR2->VAR8);
FUN7(VAR2->VAR9);
FUN7(VAR2->VAR10);
FUN8(VAR2->VAR11);
FUN8(VAR2->VAR12);
FUN8(VAR2->VAR13);

VAR2->VAR14 = 0;
FUN8(VAR2);
}