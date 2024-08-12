static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR4->VAR7;
    if (FUN2(VAR4))
        goto VAR8;
    VAR7->VAR9 = FUN3(VAR4->VAR10[VAR11]);
    VAR7->VAR12 = FUN3(VAR2->VAR13);
    FUN4(VAR4);
    if (VAR2->VAR14)
        VAR4->VAR10[VAR11] &= ~VAR15;
    FUN5(VAR4);
    FUN6(VAR4);
VAR8:
    VAR4->VAR16 = 0;
    if ((VAR4->VAR10[VAR11] & VAR17) && (VAR4->VAR10[VAR11] & VAR18))
        FUN7(VAR4);
}