int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5 = 0, VAR6;
    VAR7 *VAR8;
    VAR3 *VAR9 = NULL;
    if (VAR4)
        FUN2(&VAR9, *VAR4, 0);
    if ((VAR5 = FUN3(VAR2, &VAR9)) < 0)
        goto VAR10;
    if (VAR2->VAR11 && VAR2->VAR12->VAR13 && *(const VAR14 **)VAR2->VAR11 == VAR2->VAR12->VAR13 && (VAR5 = FUN3(VAR2->VAR11, &VAR9)) < 0)
        goto VAR10;
    if (VAR2->VAR15 == 0 && !(VAR2->VAR12->VAR16 & VAR17))
    {
        FUN4(VAR2, VAR18, "");
        VAR5 = FUN5(VAR19);
        goto VAR10;
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR15; VAR6++)
    {
        VAR8 = VAR2->VAR20[VAR6];
        switch (VAR8->VAR21->VAR22)
        {
        case VAR23:
            if (VAR8->VAR21->VAR24 <= 0)
            {
                FUN4(VAR2, VAR18, "");
                VAR5 = FUN5(VAR19);
                goto VAR10;
            }
            if (!VAR8->VAR21->VAR25)
                VAR8->VAR21->VAR25 = VAR8->VAR21->VAR26 * FUN6(VAR8->VAR21->VAR27) >> 3;
            break;
        case VAR28:
            if (VAR8->VAR21->VAR29.VAR30 <= 0 || VAR8->VAR21->VAR29.VAR31 <= 0)
            {
                FUN4(VAR2, VAR18, "");
                VAR5 = FUN5(VAR19);
                goto VAR10;
            }
            if ((VAR8->VAR21->VAR32 <= 0 || VAR8->VAR21->VAR33 <= 0) && !(VAR2->VAR12->VAR16 & VAR34))
            {
                FUN4(VAR2, VAR18, "");
                VAR5 = FUN5(VAR19);
                goto VAR10;
            }
            if (FUN7(VAR8->VAR35, VAR8->VAR21->VAR35) && FUN8(FUN9(VAR8->VAR35) - FUN9(VAR8->VAR21->VAR35)) > 0.004 * FUN9(VAR8->VAR35))
            {
                FUN4(VAR2, VAR18, ""
                                        "",
                       VAR8->VAR35.VAR30, VAR8->VAR35.VAR31, VAR8->VAR21->VAR35.VAR30, VAR8->VAR21->VAR35.VAR31);
                VAR5 = FUN5(VAR19);
                goto VAR10;
            }
            break;
        }
        if (VAR2->VAR12->VAR36)
        {
            if (VAR8->VAR21->VAR36 && VAR8->VAR21->VAR27 == VAR37 && (FUN10(VAR2->VAR12->VAR36, VAR8->VAR21->VAR27) == 0 || FUN10(VAR2->VAR12->VAR36, VAR8->VAR21->VAR27) == FUN11('', '', '', '')) && !FUN12(VAR2, VAR8))
            {
                VAR8->VAR21->VAR36 = 0;
            }
            if (VAR8->VAR21->VAR36)
            {
                if (!FUN12(VAR2, VAR8))
                {
                    char VAR38[32], VAR39[32];
                    FUN13(VAR38, sizeof(VAR38), VAR8->VAR21->VAR36);
                    FUN13(VAR39, sizeof(VAR39), FUN10(VAR2->VAR12->VAR36, VAR8->VAR21->VAR27));
                    FUN4(VAR2, VAR18, "", VAR38, VAR8->VAR21->VAR36, VAR8->VAR21->VAR27, VAR39);
                    VAR5 = VAR40;
                    goto VAR10;
                }
            }
            else
                VAR8->VAR21->VAR36 = FUN10(VAR2->VAR12->VAR36, VAR8->VAR21->VAR27);
        }
        if (VAR2->VAR12->VAR16 & VAR41 && !(VAR8->VAR21->VAR16 & VAR42))
            FUN4(VAR2, VAR43, "", VAR6);
    }
    if (!VAR2->VAR11 && VAR2->VAR12->VAR44 > 0)
    {
        VAR2->VAR11 = FUN14(VAR2->VAR12->VAR44);
        if (!VAR2->VAR11)
        {
            VAR5 = FUN5(VAR45);
            goto VAR10;
        }
        if (VAR2->VAR12->VAR13)
        {
            *(const VAR14 **)VAR2->VAR11 = VAR2->VAR12->VAR13;
            FUN15(VAR2->VAR11);
            if ((VAR5 = FUN3(VAR2->VAR11, &VAR9)) < 0)
                goto VAR10;
        }
    }
    if (VAR2->VAR15 && !(VAR2->VAR20[0]->VAR21->VAR16 & VAR46))
    {
        FUN16(&VAR2->VAR47, "", VAR48, 0);
    }
    if (VAR2->VAR12->VAR49)
    {
        VAR5 = VAR2->VAR12->FUN17(VAR2);
        if (VAR5 < 0)
            goto VAR10;
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR15; VAR6++)
    {
        int64_t VAR31 = VAR50;
        VAR8 = VAR2->VAR20[VAR6];
        switch (VAR8->VAR21->VAR22)
        {
        case VAR23:
            VAR31 = (VAR51)VAR8->VAR29.VAR30 * VAR8->VAR21->VAR24;
            break;
        case VAR28:
            VAR31 = (VAR51)VAR8->VAR29.VAR30 * VAR8->VAR21->VAR29.VAR31;
            break;
        default:
            break;
        }
        if (VAR31 != VAR50)
        {
            if (VAR31 <= 0)
            {
                VAR5 = VAR40;
                goto VAR10;
            }
            FUN18(&VAR8->VAR52, 0, 0, VAR31);
        }
    }
    if (VAR4)
    {
        FUN19(VAR4);
        *VAR4 = VAR9;
    }
    return 0;
VAR10:
    FUN19(&VAR9);
    return VAR5;
}