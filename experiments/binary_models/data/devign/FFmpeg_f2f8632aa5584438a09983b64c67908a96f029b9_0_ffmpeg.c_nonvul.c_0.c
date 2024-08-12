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
            if (VAR2->VAR45 && VAR10->VAR46 == VAR47)
            {
                VAR48 *VAR49 = VAR10->VAR50;
                VAR51 *VAR52 = FUN11(VAR10->VAR53, VAR10->VAR54, VAR55 | VAR56, VAR2->VAR25->VAR28->VAR57, VAR2->VAR25->VAR28->VAR58, VAR2->VAR25->VAR28->VAR59);
                FUN12(VAR52, VAR10);
                VAR52->VAR22 = VAR2->VAR22;
                VAR52->VAR49->VAR60 = VAR49;
                VAR52->VAR49->free = VAR61;
                VAR49->VAR62++;
                FUN13(VAR42->VAR63, VAR52);
            }
            else if ((FUN14(VAR42->VAR63, VAR10, VAR64)) < 0)
            {
                FUN15(0, VAR65, "");
                FUN16(1);
            }
        }
    }
    FUN17(VAR2);
    for (VAR13 = 0; VAR13 < VAR40; VAR13++)
    {
        VAR41 *VAR42 = &VAR43[VAR13];
        int VAR66;
        if (!FUN10(VAR2, VAR42) || !VAR42->VAR67)
            continue;
        if (VAR42->VAR63)
        {
            VAR16 = FUN18(VAR42->VAR68);
        }
        while (VAR16)
        {
            if (VAR42->VAR68)
            {
                AVRational VAR69 = VAR42->VAR68->VAR70[0]->VAR26;
                if (FUN19(VAR42->VAR68, &VAR42->VAR71, 0) < 0)
                {
                    FUN15(0, VAR72, "");
                    goto VAR73;
                }
                if (!VAR2->VAR11 && !(VAR2->VAR11 = FUN2()))
                {
                    FUN20(VAR12);
                    return FUN3(VAR21);
                }
                else
                    FUN4(VAR2->VAR11);
                VAR11 = VAR2->VAR11;
                *VAR11 = *VAR10;
                if (VAR42->VAR71)
                {
                    FUN21(VAR11, VAR42->VAR71);
                    VAR2->VAR22 = FUN5(VAR42->VAR71->VAR22, VAR69, VAR27);
                }
            }
            if (VAR42->VAR71->VAR74 && !VAR42->VAR75)
                VAR42->VAR25->VAR28->VAR44 = VAR42->VAR71->VAR74->VAR44;
            VAR11 = VAR10;
            FUN22(VAR76[VAR42->VAR77].VAR78, VAR42, VAR2, VAR11, &VAR66, VAR36 ? VAR15 : VAR42->VAR25->VAR28->VAR79);
            if (VAR80 && VAR66)
                FUN23(VAR76[VAR42->VAR77].VAR78, VAR42, VAR66);
        VAR73:
            VAR16 = VAR42->VAR68 && FUN18(VAR42->VAR68);
            FUN24(VAR42->VAR71);
        }
    }
    FUN20(VAR12);
    return VAR14;
}