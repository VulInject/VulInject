void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    int VAR5, VAR6;
    unsigned VAR7;
    int VAR8, VAR9;
    int VAR10 = 0;
    VAR11 *VAR12;
    VAR13 *VAR14;
    const char *VAR15 = FUN2(VAR4, "");
    const char *VAR16 = FUN2(VAR4, "");
    VAR17 *VAR18;
    if (FUN3(VAR2, VAR15, &VAR5, &VAR6, &VAR7))
    {
        return;
    }
    VAR12 = FUN4(VAR6, VAR7, 0);
    if (!VAR12)
    {
        FUN5(VAR2, "", VAR15);
        return;
    }
    VAR14 = FUN6(VAR16);
    if (!VAR14)
        return;
    if (VAR14->VAR19)
    {
        FUN5(VAR2, "");
        return;
    }
    VAR8 = VAR14->VAR8;
    VAR9 = FUN7(VAR8);
    switch (VAR8)
    {
    case VAR20:
        VAR10 = 1;
        VAR18 = FUN8(&VAR12->VAR21.VAR22);
        FUN9(FUN10(VAR23, VAR24, VAR18), VAR14, VAR14->VAR25);
        break;
    default:
        FUN5(VAR2, "", VAR8);
    }
    if (VAR10)
        FUN5(VAR2, "", VAR14->VAR9, VAR14->VAR25);
    return;
}