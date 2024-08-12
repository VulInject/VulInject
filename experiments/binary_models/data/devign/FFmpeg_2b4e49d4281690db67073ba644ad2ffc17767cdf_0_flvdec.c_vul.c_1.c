static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int64_t VAR7)
{
    unsigned int VAR8 = 0, VAR9 = 0, VAR10 = 0, VAR11;
    double VAR12;
    char VAR13[256];
    VAR14 *VAR15 = NULL;
    VAR14 *VAR16 = NULL;
    int VAR17 = FUN2(VAR18);
    int64_t VAR19 = FUN3(VAR4);
    VAR20 *VAR21 = FUN4(VAR2->VAR22, "", NULL, 0);
    if (VAR21 && !strcmp(VAR21->VAR23, ""))
    {
        return 0;
    }
    while (FUN3(VAR4) < VAR7 - 2 && FUN5(VAR4, VAR13, sizeof(VAR13)) > 0)
    {
        VAR14 *VAR24;
        if (FUN6(VAR4) != VAR25)
            break;
        VAR8 = FUN7(VAR4);
        if (!strcmp(VAR26, VAR13) && !VAR15)
        {
            if (!(VAR15 = FUN8(sizeof(*VAR15) * VAR8)))
            {
                VAR17 = FUN2(VAR27);
                goto VAR28;
            }
            VAR9 = VAR8;
            VAR24 = VAR15;
        }
        else if (!strcmp(VAR29, VAR13) && !VAR16)
        {
            if (!(VAR16 = FUN8(sizeof(*VAR16) * VAR8)))
            {
                VAR17 = FUN2(VAR27);
                goto VAR28;
            }
            VAR10 = VAR8;
            VAR24 = VAR16;
        }
        else
            break;
        for (VAR11 = 0; VAR11 < VAR8 && FUN3(VAR4) < VAR7 - 1; VAR11++)
        {
            if (FUN6(VAR4) != VAR30)
                goto VAR28;
            VAR12 = FUN9(FUN10(VAR4));
            VAR24[VAR11] = VAR12;
        }
        if (VAR15 && VAR16)
        {
            VAR17 = 0;
            break;
        }
    }
    if (VAR9 == VAR10)
        for (VAR11 = 0; VAR11 < VAR8; VAR11++)
            FUN11(VAR6, VAR16[VAR11], VAR15[VAR11] * 1000, 0, 0, VAR31);
    else
        FUN12(VAR2, VAR32, "");
VAR28:
    FUN13(&VAR15);
    FUN13(&VAR16);
    if (VAR17 < 0 && FUN14(VAR4, VAR19, VAR33) > 0)
        return 0;
    return VAR17;
}