void FUN1(void)
{
    FUN2(VAR1, VAR2, [VAR3]);
    FUN2(VAR1, VAR4, [VAR3]);
    FUN2(VAR1, VAR5, [VAR3]);
    VAR6 *VAR7 = FUN3(1);
    FUN4();
    if (FUN5(VAR7->VAR8, ""))
        FUN6(VAR2, VAR4);
    if (FUN5(VAR7->VAR9, ""))
        FUN7(VAR2, VAR4, VAR5);
    if (FUN5(VAR7->VAR10, ""))
        FUN6(VAR2, VAR4);
    if (FUN5(VAR7->VAR11, ""))
        FUN8(VAR2, VAR4, VAR5);
    if (FUN5(VAR7->VAR12, ""))
        FUN9(VAR2, VAR4, VAR5);
    FUN10("");
    if (FUN5(VAR7->VAR13, ""))
        FUN11(VAR2, VAR4);
    FUN10("");
    if (FUN5(VAR7->VAR14, ""))
        FUN12(VAR2, VAR4);
    FUN10("");
    FUN13(&VAR7);
}