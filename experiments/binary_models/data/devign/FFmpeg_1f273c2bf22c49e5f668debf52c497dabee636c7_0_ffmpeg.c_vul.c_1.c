static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, VAR6 *VAR7, VAR6 *VAR8)
{
    VAR9 *VAR10, *VAR11 = NULL;
    void *VAR12 = NULL;
    int VAR13, VAR14 = 0;
    float VAR15 = 0;
    int VAR16 = 1;
    int VAR17 = 0;
    VAR6 *VAR18;
    VAR19 *VAR20;
    if (!VAR2->VAR10 && !(VAR2->VAR10 = FUN2()))
        return FUN3(VAR21);
    else
        FUN4(VAR2->VAR10);
    VAR10 = VAR2->VAR10;
    VAR4->VAR22 = *VAR7;
    VAR4->VAR23 = *VAR8;
    *VAR7 = VAR24;
    if (VAR4->VAR17)
    {
        VAR17 = FUN5(VAR4->VAR17, VAR2->VAR25->VAR26, VAR27);
    }
    else if (VAR2->VAR25->VAR28->VAR26.VAR29 != 0)
    {
        int VAR30 = VAR2->VAR25->VAR31 ? VAR2->VAR25->VAR31->VAR32 + 1 : VAR2->VAR25->VAR28->VAR33;
        VAR17 = ((VAR6)VAR34 * VAR2->VAR25->VAR28->VAR26.VAR29 * VAR30) / VAR2->VAR25->VAR28->VAR26.VAR35;
    }
    if (*VAR8 != VAR24 && VAR17)
    {
        *VAR8 += VAR17;
    }
    else
        *VAR8 = VAR24;
    VAR14 = FUN6(VAR2->VAR25->VAR28, VAR10, VAR5, VAR4);
    if (VAR14 < 0)
        return VAR14;
    VAR15 = VAR36 ? VAR10->VAR15 : 0;
    if (!*VAR5)
    {
        return VAR14;
    }
    VAR18 = FUN7(FUN8(), VAR10, "");
    if (*VAR18 != VAR24)
        VAR2->VAR37 = VAR2->VAR22 = *VAR18;
    VAR2->VAR37 += VAR17;
    VAR4->VAR38 = 0;
    FUN9(VAR2, (VAR39 *)VAR10, &VAR12);
    VAR20 = FUN7(FUN8(), VAR10, "");
    for (VAR13 = 0; VAR13 < VAR40; VAR13++)
    {
        VAR41 *VAR42 = VAR42 = &VAR43[VAR13];
        if (FUN10(VAR2, VAR42))
        {
            if (!VAR20->VAR29)
                *VAR20 = VAR2->VAR25->VAR44;
            VAR10->VAR22 = VAR2->VAR22;
            FUN11(VAR42->VAR45, VAR10, VAR46);
        }
    }
    FUN12(VAR2);
    for (VAR13 = 0; VAR13 < VAR40; VAR13++)
    {
        VAR41 *VAR42 = &VAR43[VAR13];
        int VAR47;
        if (!FUN10(VAR2, VAR42) || !VAR42->VAR48)
            continue;
        if (VAR42->VAR45)
        {
            VAR16 = FUN13(VAR42->VAR49);
        }
        while (VAR16)
        {
            if (VAR42->VAR49)
            {
                AVRational VAR50 = VAR42->VAR49->VAR51[0]->VAR26;
                if (FUN14(VAR42->VAR49, &VAR42->VAR52, 0) < 0)
                {
                    FUN15(0, VAR53, "");
                    goto VAR54;
                }
                if (!VAR2->VAR11 && !(VAR2->VAR11 = FUN2()))
                {
                    FUN16(VAR12);
                    return FUN3(VAR21);
                }
                else
                    FUN4(VAR2->VAR11);
                VAR11 = VAR2->VAR11;
                *VAR11 = *VAR10;
                if (VAR42->VAR52)
                {
                    FUN17(VAR11, VAR42->VAR52);
                    VAR2->VAR22 = FUN5(VAR42->VAR52->VAR22, VAR50, VAR27);
                }
            }
            if (VAR42->VAR52->VAR55 && !VAR42->VAR56)
                VAR42->VAR25->VAR28->VAR44 = VAR42->VAR52->VAR55->VAR44;
            VAR11 = VAR10;
            FUN18(VAR57[VAR42->VAR58].VAR59, VAR42, VAR2, VAR11, &VAR47, VAR36 ? VAR15 : VAR42->VAR25->VAR28->VAR60);
            if (VAR61 && VAR47)
                FUN19(VAR57[VAR42->VAR58].VAR59, VAR42, VAR47);
        VAR54:
            VAR16 = VAR42->VAR49 && FUN13(VAR42->VAR49);
            FUN20(VAR42->VAR52);
        }
    }
    FUN16(VAR12);
    return VAR14;
}