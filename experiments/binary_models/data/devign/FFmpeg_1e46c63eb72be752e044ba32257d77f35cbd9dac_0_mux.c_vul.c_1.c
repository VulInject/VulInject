int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5 = 0, VAR6;
    VAR7 *VAR8;
    VAR3 *VAR9 = NULL;
    VAR10 *VAR11 = NULL;
    VAR12 *VAR13 = VAR2->VAR14;
    if (VAR4)
        FUN2(&VAR9, *VAR4, 0);
    if ((VAR5 = FUN3(VAR2, &VAR9)) < 0)
        goto VAR15;
    if (VAR2->VAR16 == 0 && !(VAR13->VAR17 & VAR18))
    {
        FUN4(VAR2, VAR19, "");
        VAR5 = FUN5(VAR20);
        goto VAR15;
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR16; VAR6++)
    {
        VAR8 = VAR2->VAR21[VAR6];
        VAR11 = VAR8->VAR11;
        switch (VAR11->VAR22)
        {
        case VAR23:
            if (VAR11->VAR24 <= 0)
            {
                FUN4(VAR2, VAR19, "");
                VAR5 = FUN5(VAR20);
                goto VAR15;
            }
            if (!VAR11->VAR25)
                VAR11->VAR25 = VAR11->VAR26 * FUN6(VAR11->VAR27) >> 3;
            break;
        case VAR28:
            if (VAR11->VAR29.VAR30 <= 0 || VAR11->VAR29.VAR31 <= 0)
            {
                FUN4(VAR2, VAR19, "");
                VAR5 = FUN5(VAR20);
                goto VAR15;
            }
            if ((VAR11->VAR32 <= 0 || VAR11->VAR33 <= 0) && !(VAR13->VAR17 & VAR34))
            {
                FUN4(VAR2, VAR19, "");
                VAR5 = FUN5(VAR20);
                goto VAR15;
            }
            if (FUN7(VAR8->VAR35, VAR11->VAR35))
            {
                FUN4(VAR2, VAR19, ""
                                        "",
                       VAR8->VAR35.VAR30, VAR8->VAR35.VAR31, VAR11->VAR35.VAR30, VAR11->VAR35.VAR31);
                VAR5 = FUN5(VAR20);
                goto VAR15;
            }
            break;
        }
        if (VAR13->VAR36)
        {
            if (VAR11->VAR36 && VAR11->VAR27 == VAR37 && !FUN8(VAR13->VAR36, VAR11->VAR27) && !FUN9(VAR2, VAR8))
            {
                VAR11->VAR36 = 0;
            }
            if (VAR11->VAR36)
            {
                if (!FUN9(VAR2, VAR8))
                {
                    char VAR38[32];
                    FUN10(VAR38, sizeof(VAR38), VAR11->VAR36);
                    FUN4(VAR2, VAR19, "", VAR38, VAR11->VAR36, VAR11->VAR27);
                    VAR5 = VAR39;
                    goto VAR15;
                }
            }
            else
                VAR11->VAR36 = FUN8(VAR13->VAR36, VAR11->VAR27);
        }
        if (VAR13->VAR17 & VAR40 && !(VAR11->VAR17 & VAR41))
            FUN4(VAR2, VAR42, ""
                                      "",
                   VAR6);
    }
    if (!VAR2->VAR43 && VAR13->VAR44 > 0)
    {
        VAR2->VAR43 = FUN11(VAR13->VAR44);
        if (!VAR2->VAR43)
        {
            VAR5 = FUN5(VAR45);
            goto VAR15;
        }
        if (VAR13->VAR46)
        {
            *(const VAR47 **)VAR2->VAR43 = VAR13->VAR46;
            FUN12(VAR2->VAR43);
            if ((VAR5 = FUN3(VAR2->VAR43, &VAR9)) < 0)
                goto VAR15;
        }
    }
    if (VAR2->VAR16 && !(VAR2->VAR21[0]->VAR11->VAR17 & VAR48))
    {
        FUN13(&VAR2->VAR49, "", VAR50, 0);
    }
    if (VAR2->VAR14->VAR51)
    {
        VAR5 = VAR2->VAR14->FUN14(VAR2);
        if (VAR5 < 0)
            goto VAR15;
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR16; VAR6++)
    {
        int64_t VAR31 = VAR52;
        VAR8 = VAR2->VAR21[VAR6];
        switch (VAR8->VAR11->VAR22)
        {
        case VAR23:
            VAR31 = (VAR53)VAR8->VAR29.VAR30 * VAR8->VAR11->VAR24;
            break;
        case VAR28:
            VAR31 = (VAR53)VAR8->VAR29.VAR30 * VAR8->VAR11->VAR29.VAR31;
            break;
        default:
            break;
        }
        if (VAR31 != VAR52)
        {
            if (VAR31 <= 0)
            {
                VAR5 = VAR39;
                goto VAR15;
            }
            FUN15(&VAR8->VAR54, 0, 0, VAR31);
        }
    }
    if (VAR4)
    {
        FUN16(VAR4);
        *VAR4 = VAR9;
    }
    return 0;
VAR15:
    FUN16(&VAR9);
    return VAR5;
}