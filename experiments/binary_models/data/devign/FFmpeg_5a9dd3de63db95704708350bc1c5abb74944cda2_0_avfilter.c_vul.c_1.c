void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    void (*VAR5)(VAR1 *, VAR3 *);
    VAR6 *VAR7 = &FUN2(VAR2);
    FUN3(NULL, VAR5);
    FUN4(NULL, VAR2, 0);
    FUN5(NULL, "");
    FUN6(NULL, VAR4, 1);
    if (!(VAR5 = VAR7->VAR5))
        VAR5 = VAR8;
    if ((VAR7->VAR9 & VAR4->VAR10) != VAR7->VAR9 || VAR7->VAR11 & VAR4->VAR10)
    {
        FUN7(VAR2->VAR7, VAR12, "", VAR4->VAR10, FUN2(VAR2).VAR9, FUN2(VAR2).VAR11);
        VAR2->VAR13 = FUN8(VAR2, VAR7->VAR9, VAR2->VAR14, VAR2->VAR15);
        VAR2->VAR16 = VAR4;
        FUN9(VAR2->VAR13, VAR2->VAR16);
    }
    else
        VAR2->VAR13 = VAR4;
    FUN10(VAR2, VAR2->VAR13);
}