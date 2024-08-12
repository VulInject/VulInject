int FUN1(VAR1 *VAR2, int VAR3, const char *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8;
    int VAR9, VAR10;
    char *VAR11 = getenv("");
    if (VAR3)
        VAR8 = FUN2(VAR4, VAR12);
    else
        VAR8 = FUN2(VAR4, VAR13);
    if (VAR8 < 0)
    {
        FUN3(VAR2, VAR14, "", VAR4, strerror(VAR15));
        return FUN4(VAR16);
    }
    if (VAR11 && *VAR11 == '')
    {
        VAR6->VAR17 = 1;
    }
    if (!VAR3)
        FUN5(VAR8, VAR18, VAR19);
    VAR6->VAR20 = VAR21;
    VAR10 = FUN6(VAR8, VAR22, &VAR9);
    if (VAR9 & VAR23)
    {
        VAR9 = VAR23;
    }
    else if (VAR9 & VAR24)
    {
        VAR9 = VAR24;
    }
    else
    {
        VAR9 = 0;
    }
    if (VAR9 & VAR24)
    {
        VAR9 = VAR24;
    }
    else if (VAR9 & VAR23)
    {
        VAR9 = VAR23;
    }
    else
    {
        VAR9 = 0;
    }
    switch (VAR9)
    {
    case VAR24:
        VAR6->VAR25 = VAR26;
        break;
    case VAR23:
        VAR6->VAR25 = VAR27;
        break;
    default:
        FUN3(VAR2, VAR14, "");
        close(VAR8);
        return FUN4(VAR16);
    }
    VAR10 = FUN6(VAR8, VAR28, &VAR9);
    if (VAR10 < 0)
    {
        FUN3(VAR2, VAR14, "", strerror(VAR15));
        goto VAR29;
    }
    VAR9 = (VAR6->VAR30 == 2);
    VAR10 = FUN6(VAR8, VAR31, &VAR9);
    if (VAR10 < 0)
    {
        FUN3(VAR2, VAR14, "", strerror(VAR15));
        goto VAR29;
    }
    VAR9 = VAR6->VAR32;
    VAR10 = FUN6(VAR8, VAR33, &VAR9);
    if (VAR10 < 0)
    {
        FUN3(VAR2, VAR14, "", strerror(VAR15));
        goto VAR29;
    }
    VAR6->VAR32 = VAR9;
    VAR6->VAR34 = VAR8;
    return 0;
VAR29:
    close(VAR8);
    return FUN4(VAR16);
}