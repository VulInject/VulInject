static VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = VAR4->VAR11.VAR12;
    int VAR13, VAR14;
    char VAR15[VAR16];
    char VAR17[VAR16];
    const char *VAR18 = VAR10->VAR19;
    VAR20 *VAR21 = FUN2(VAR4->VAR11.VAR12);
    snprintf(VAR15, VAR16, "", VAR18);
    snprintf(VAR17, VAR16, "", VAR18);
    FUN3(VAR13 = FUN4(VAR15, VAR22 | VAR23));
    FUN3(VAR14 = FUN4(VAR17, VAR22 | VAR23));
    if (VAR13 < 0 || VAR14 < 0)
    {
        if (VAR13 >= 0)
            close(VAR13);
        if (VAR14 >= 0)
            close(VAR14);
        FUN3(VAR13 = VAR14 = FUN4(VAR18, VAR22 | VAR23));
        if (VAR13 < 0)
        {
            FUN5(VAR8, VAR24, VAR18);
            return NULL;
        }
    }
    return FUN6(VAR13, VAR14, VAR21, VAR8);
}