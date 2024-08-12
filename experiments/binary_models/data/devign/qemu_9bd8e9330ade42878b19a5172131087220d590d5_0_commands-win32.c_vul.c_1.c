static VAR1 *FUN1(char *VAR2, VAR3 **VAR4)
{
    HDEVINFO VAR5;
    SP_DEVINFO_DATA VAR6;
    DWORD VAR7 = 0;
    int VAR8;
    char VAR9[VAR10];
    char *VAR11 = NULL;
    VAR1 *VAR12 = NULL;
    char *VAR13 = FUN2(&VAR2[4]);
    if (!FUN3(VAR13, VAR9, FUN4(VAR9)))
    {
        FUN5(VAR4, FUN6(), "");
        goto VAR14;
    }
    VAR5 = FUN7(&VAR15, 0, 0, VAR16 | VAR17);
    if (VAR5 == VAR18)
    {
        FUN5(VAR4, FUN6(), "");
        goto VAR14;
    }
    VAR6.VAR19 = sizeof(VAR20);
    for (VAR8 = 0; FUN8(VAR5, VAR8, &VAR6); VAR8++)
    {
        DWORD VAR21, VAR22, VAR23, VAR24, VAR25, VAR26, VAR27;
        while (!FUN9(VAR5, &VAR6, VAR28, &VAR26, (VAR29)VAR11, VAR7, &VAR27))
        {
            VAR7 = FUN10(VAR7, VAR27);
            if (FUN6() == VAR30)
            {
                FUN11(VAR11);
                VAR11 = FUN12(VAR7 * 2);
            }
            else
            {
                FUN5(VAR4, FUN6(), "");
                goto VAR14;
            }
        }
        if (FUN13(VAR11, VAR9))
        {
            continue;
        }
        if (!FUN9(VAR5, &VAR6, VAR31, &VAR26, (VAR29)&VAR22, VAR7, NULL))
        {
            break;
        }
        if (!FUN9(VAR5, &VAR6, VAR32, &VAR26, (VAR29)&VAR21, VAR7, NULL))
        {
            break;
        }
        if (!FUN9(VAR5, &VAR6, VAR33, &VAR26, (VAR29)&VAR23, VAR7, NULL))
        {
            break;
        }
        VAR24 = VAR21 & 0x0000FFFF;
        VAR25 = (VAR21 >> 16) & 0x0000FFFF;
        VAR12 = FUN14(sizeof(*VAR12));
        VAR12->VAR34 = VAR25;
        VAR12->VAR23 = VAR23;
        VAR12->VAR35 = VAR24;
        VAR12->VAR22 = VAR22;
        break;
    }
VAR14:
    FUN11(VAR11);
    FUN11(VAR13);
    return VAR12;
}