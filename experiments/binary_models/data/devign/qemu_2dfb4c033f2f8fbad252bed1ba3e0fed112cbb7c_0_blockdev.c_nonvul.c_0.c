VAR1 *FUN1(const char *VAR2, bool VAR3, const char *VAR4, bool VAR5, const char *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10;
    VAR11 *VAR12;
    QEMUSnapshotInfo VAR13;
    VAR7 *VAR14 = NULL;
    VAR1 *VAR15 = NULL;
    int VAR16;
    VAR10 = FUN2(VAR2, VAR8);
    if (!VAR10)
    {
        return NULL;
    }
    VAR12 = FUN3(VAR10);
    FUN4(VAR12);
    if (!VAR3)
    {
        VAR4 = NULL;
    }
    if (!VAR5)
    {
        VAR6 = NULL;
    }
    if (!VAR4 && !VAR6)
    {
        FUN5(VAR8, "");
        goto VAR17;
    }
    if (FUN6(VAR10, VAR18, VAR8))
    {
        goto VAR17;
    }
    VAR16 = FUN7(VAR10, VAR4, VAR6, &VAR13, &VAR14);
    if (VAR14)
    {
        FUN8(VAR8, VAR14);
        goto VAR17;
    }
    if (!VAR16)
    {
        FUN5(VAR8, ""
                         "",
                   FUN9(VAR4), FUN9(VAR6), VAR2);
        goto VAR17;
    }
    FUN10(VAR10, VAR4, VAR6, &VAR14);
    if (VAR14)
    {
        FUN8(VAR8, VAR14);
        goto VAR17;
    }
    FUN11(VAR12);
    VAR15 = FUN12(VAR1, 1);
    VAR15->VAR4 = FUN13(VAR13.VAR19);
    VAR15->VAR6 = FUN13(VAR13.VAR6);
    VAR15->VAR20 = VAR13.VAR20;
    VAR15->VAR21 = VAR13.VAR21;
    VAR15->VAR22 = VAR13.VAR22;
    VAR15->VAR23 = VAR13.VAR23 % 1000000000;
    VAR15->VAR24 = VAR13.VAR23 / 1000000000;
    return VAR15;
VAR17:
    FUN11(VAR12);
    return NULL;
}