void FUN1(const char *VAR1, VAR2 *VAR3, VAR2 *VAR4, const char *VAR5, int64_t VAR6, BlockdevOnError VAR7, VAR8 **VAR9)
{
    VAR10 *VAR11;
    VAR2 *VAR12;
    int VAR13;
    VAR13 = FUN2(VAR3);
    if (!(VAR13 & VAR14))
    {
        if (FUN3(VAR3, VAR13 | VAR14, VAR9) != 0)
        {
            return;
        }
    }
    VAR11 = FUN4(VAR1, &VAR15, VAR3, VAR16 | VAR17 | VAR18, VAR16 | VAR17 | VAR19, VAR6, VAR20, NULL, NULL, VAR9);
    if (!VAR11)
    {
        goto VAR21;
    }
    for (VAR12 = FUN5(VAR3); VAR12 && VAR12 != VAR4; VAR12 = FUN5(VAR12))
    {
        FUN6(&VAR11->VAR22, "", VAR12, 0, VAR16 | VAR17, &VAR23);
    }
    VAR11->VAR4 = VAR4;
    VAR11->VAR5 = FUN7(VAR5);
    VAR11->VAR24 = VAR13;
    VAR11->VAR7 = VAR7;
    FUN8(VAR3, VAR4, VAR11);
    FUN9(&VAR11->VAR22);
    return;
VAR21:
    if (VAR13 != FUN2(VAR3))
    {
        FUN3(VAR3, VAR11->VAR24, NULL);
    }
}