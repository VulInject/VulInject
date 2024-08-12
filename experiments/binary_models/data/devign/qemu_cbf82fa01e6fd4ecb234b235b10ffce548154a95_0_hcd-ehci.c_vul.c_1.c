static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR4->VAR7[VAR2->VAR8];
    const char *VAR9 = (*VAR7 & VAR10) ? "" : "";
    FUN2(VAR2->VAR8, VAR9);
    if (*VAR7 & VAR10)
    {
        VAR1 *VAR11 = VAR4->VAR12[VAR2->VAR8];
        VAR11->VAR13->FUN3(VAR11);
        VAR11->VAR14 = NULL;
        *VAR7 &= ~VAR10;
        return;
    }
    FUN4(VAR4, VAR2->VAR14, 0);
    FUN4(VAR4, VAR2->VAR14, 1);
    *VAR7 &= ~(VAR15 | VAR16);
    *VAR7 |= VAR17;
    FUN5(VAR4, VAR18);
}