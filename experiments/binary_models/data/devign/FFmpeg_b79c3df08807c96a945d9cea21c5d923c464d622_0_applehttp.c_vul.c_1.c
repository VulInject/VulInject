static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8 = 0, VAR9, VAR10, VAR11 = 0;
    if ((VAR8 = FUN2(VAR6, VAR2->VAR12, NULL, VAR2->VAR13)) < 0)
        goto VAR14;
    if (VAR6->VAR15 == 0)
    {
        FUN3(NULL, VAR16, "");
        VAR8 = VAR17;
        goto VAR14;
    }
    if (VAR6->VAR15 > 1 || VAR6->VAR18[0]->VAR19 == 0)
    {
        for (VAR9 = 0; VAR9 < VAR6->VAR15; VAR9++)
        {
            struct VAR20 *VAR21 = VAR6->VAR18[VAR9];
            if ((VAR8 = FUN2(VAR6, VAR21->VAR22, VAR21, NULL)) < 0)
                goto VAR14;
        }
    }
    if (VAR6->VAR18[0]->VAR19 == 0)
    {
        FUN3(NULL, VAR16, "");
        VAR8 = VAR17;
        goto VAR14;
    }
    if (VAR6->VAR23)
    {
        int VAR24 = 0;
        for (VAR9 = 0; VAR9 < VAR6->VAR18[0]->VAR19; VAR9++)
            VAR24 += VAR6->VAR18[0]->VAR25[VAR9]->VAR24;
        VAR2->VAR24 = VAR24 * VAR26;
    }
    VAR6->VAR27 = VAR28;
    for (VAR9 = 0; VAR9 < VAR6->VAR15; VAR9++)
    {
        struct VAR20 *VAR21 = VAR6->VAR18[VAR9];
        if (VAR21->VAR19 == 0)
            continue;
        VAR6->VAR29 = FUN4(VAR6->VAR29, VAR21->VAR30);
        VAR6->VAR27 = FUN5(VAR6->VAR27, VAR21->VAR30 + VAR21->VAR19);
        VAR8 = FUN6(&VAR21->VAR31, VAR21->VAR25[0]->VAR22, NULL, 0, NULL);
        if (VAR8 < 0)
            goto VAR14;
        FUN7(VAR21->VAR31->VAR13);
        VAR21->VAR31->VAR13 = NULL;
        VAR21->VAR11 = VAR11;
        for (VAR10 = 0; VAR10 < VAR21->VAR31->VAR32; VAR10++)
        {
            VAR33 *VAR34 = FUN8(VAR2, VAR9);
            if (!VAR34)
            {
                VAR8 = FUN9(VAR35);
                goto VAR14;
            }
            FUN10(VAR34->VAR36, VAR21->VAR31->VAR37[VAR10]->VAR36);
        }
        VAR11 += VAR21->VAR31->VAR32;
    }
    VAR6->VAR38 = VAR39;
    VAR6->VAR40 = VAR6->VAR29;
    if (!VAR6->VAR23 && VAR6->VAR27 - VAR6->VAR29 > 3)
        VAR6->VAR40 = VAR6->VAR27 - 2;
    return 0;
VAR14:
    FUN11(VAR6);
    return VAR8;
}