int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = NULL;
    VAR10 *VAR11 = NULL;
    int VAR12 = 0, VAR13, VAR14;
    if (!VAR4)
    {
        VAR6->VAR15 = 1;
        return 0;
    }
    else if (VAR6->VAR15)
        return FUN2(VAR16);
    VAR9 = FUN3();
    if (!VAR9)
        return FUN2(VAR17);
    VAR11 = FUN4(NULL, 0, VAR18, VAR4, 0);
    if (!VAR11)
    {
        VAR12 = FUN2(VAR17);
        goto VAR19;
    }
    if ((VAR12 = FUN5(VAR9, VAR4)) < 0)
        goto VAR19;
    do
    {
        VAR10 *VAR20 = FUN6(VAR11);
        if (!VAR20)
        {
            VAR12 = FUN2(VAR17);
            goto VAR19;
        }
        VAR21 = FUN4(VAR22, VAR23, VAR24, VAR20, 0);
        if (!VAR21)
        {
            FUN7(VAR9);
            VAR12 = FUN2(VAR17);
            goto VAR19;
        }
    } while (0) if (VAR2->VAR25[0]->VAR26 == VAR27)
    {
        const VAR28 *VAR29 = FUN8(VAR9->VAR30);
        VAR13 = FUN9(VAR9->VAR30);
        if (!VAR29 || VAR13 <= 0)
        {
            VAR12 = FUN2(VAR16);
            goto VAR19;
        }
        for (VAR14 = 0; VAR14 < VAR13; VAR14++)
        {
            int VAR31 = (VAR14 == 1 || VAR14 == 2) ? VAR29->VAR32 : 0;
            int VAR33 = (VAR9->VAR34 >> VAR31) * VAR9->VAR35[VAR14];
            FUN10(VAR9->VAR4[VAR14], VAR9->VAR22[VAR14], VAR33);
        }
    }
    else
    {
        int VAR36 = FUN11(VAR9->VAR30);
        int VAR37 = FUN12(VAR9->VAR38);
        VAR13 = VAR36 ? VAR37 : 1;
        if (VAR13 > FUN13(VAR9->VAR4))
        {
            VAR9->VAR39 = VAR13 - FUN13(VAR9->VAR4);
            VAR9->VAR40 = FUN14(sizeof(*VAR9->VAR40) * VAR9->VAR39);
            if (!VAR9->VAR40)
            {
                VAR12 = FUN2(VAR17);
                goto VAR19;
            }
        }
        for (VAR14 = 0; VAR14 < FUN15(VAR13, FUN13(VAR9->VAR4)); VAR14++)
            FUN10(VAR9->VAR4[VAR14], VAR9->VAR41[VAR14], VAR9->VAR35[0]);
        for (VAR14 = 0; VAR14 < VAR13 - FUN13(VAR9->VAR4); VAR14++)
            FUN10(VAR9->VAR40[VAR14], VAR9->VAR41[VAR14 + FUN13(VAR9->VAR4)], VAR9->VAR35[0]);
    }
    VAR12 = FUN16(VAR2, VAR9);
VAR19:
    FUN17(&VAR11);
    FUN18(&VAR9);
    return VAR12;