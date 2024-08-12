static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, int *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12;
    char VAR13[1024], *VAR14;
    char *VAR15;
    int VAR16 = strlen(VAR5) * 4 / 3 + 12;
    int64_t VAR17 = VAR8->VAR17;
    VAR10 = VAR2->VAR18 & VAR19;
    VAR15 = FUN2(VAR16);
    FUN3(VAR15, VAR16, VAR5, strlen(VAR5));
    snprintf(VAR8->VAR20, sizeof(VAR8->VAR20), ""
                                           ""
                                           ""
                                           "" VAR21 ""
                                           ""
                                           ""
                                           ""
                                           "",
             VAR10 ? "" : "", VAR3, VAR22, VAR8->VAR17, VAR4, VAR15);
    FUN4(&VAR15);
    if (FUN5(VAR2, VAR8->VAR20, strlen(VAR8->VAR20)) < 0)
        return FUN6(VAR23);
    VAR8->VAR24 = VAR8->VAR20;
    VAR8->VAR25 = VAR8->VAR20;
    VAR8->VAR26 = 0;
    VAR8->VAR17 = 0;
    VAR8->VAR27 = -1;
    if (VAR10)
    {
        return 0;
    }
    VAR14 = VAR13;
    for (;;)
    {
        VAR12 = FUN7(VAR8);
        if (VAR12 < 0)
            return FUN6(VAR23);
        if (VAR12 == '')
        {
            if (VAR14 > VAR13 && VAR14[-1] == '')
                VAR14--;
            *VAR14 = '';
            FUN8("", VAR13);
            VAR11 = FUN9(VAR2, VAR13, VAR8->VAR26, VAR6);
            if (VAR11 < 0)
                return VAR11;
            if (VAR11 == 0)
                break;
            VAR8->VAR26++;
            VAR14 = VAR13;
        }
        else
        {
            if ((VAR14 - VAR13) < sizeof(VAR13) - 1)
                *VAR14++ = VAR12;
        }
    }
    return (VAR17 == VAR8->VAR17) ? 0 : -1;
}