static void FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = VAR3;
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR7 = FUN2(sizeof(VAR6));
    VAR7->VAR10 = FUN3(FUN4(VAR2));
    VAR7->VAR11 = FUN5(VAR2);
    VAR7->VAR12 = FUN6(VAR2);
    VAR9 = FUN2(sizeof(VAR8));
    VAR9->VAR13 = VAR7;
    VAR9->VAR14 = VAR5->VAR15;
    VAR5->VAR15 = VAR9;
}