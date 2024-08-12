static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    int VAR8;
    MOVAtom VAR9 = {FUN2("")};
    int VAR10;
    VAR4->VAR11 = VAR2;
    if (VAR7->VAR12)
        VAR9.VAR13 = FUN3(VAR7);
    else
        VAR9.VAR13 = VAR14;
    if ((VAR8 = FUN4(VAR4, VAR7, VAR9)) < 0)
    {
        FUN5(VAR2, VAR15, "", VAR8);
        FUN6(VAR2);
        return VAR8;
    }
    if (!VAR4->VAR16)
    {
        FUN5(VAR2, VAR15, "");
        FUN6(VAR2);
        return VAR17;
    }
    FUN7(VAR4->VAR11, "" VAR18 "", FUN8(VAR7));
    if (VAR7->VAR12 && VAR4->VAR19 > 0)
        FUN9(VAR2);
    for (VAR10 = 0; VAR10 < VAR2->VAR20; VAR10++)
    {
        VAR21 *VAR22 = VAR2->VAR23[VAR10];
        VAR24 *VAR25 = VAR22->VAR5;
        if (VAR22->VAR26->VAR27 == VAR28)
        {
            if (VAR22->VAR26->VAR29 <= 0 || VAR22->VAR26->VAR30 <= 0)
            {
                VAR22->VAR26->VAR29 = VAR25->VAR29;
                VAR22->VAR26->VAR30 = VAR25->VAR30;
            }
            if (VAR22->VAR26->VAR31 == VAR32)
            {
                if ((VAR8 = FUN10(VAR22)) < 0)
                    return VAR8;
            }
        }
    }
    if (VAR4->VAR33)
    {
        for (VAR10 = 0; VAR10 < VAR2->VAR20; VAR10++)
        {
            VAR21 *VAR22 = VAR2->VAR23[VAR10];
            VAR24 *VAR25 = VAR22->VAR5;
            if (VAR22->VAR34 > 0)
                VAR22->VAR26->VAR35 = VAR25->VAR36 * 8 * VAR25->VAR37 / VAR22->VAR34;
        }
    }
    for (VAR10 = 0; VAR10 < VAR2->VAR20; VAR10++)
    {
        VAR21 *VAR22 = VAR2->VAR23[VAR10];
        VAR24 *VAR25 = VAR22->VAR5;
        switch (VAR22->VAR26->VAR27)
        {
        case VAR38:
            VAR8 = FUN11(VAR22, VAR2->VAR39);
            if (VAR8 < 0)
            {
                FUN6(VAR2);
                return VAR8;
            }
            break;
        case VAR40:
            if (VAR25->VAR41)
            {
                VAR42 *VAR43, *VAR44;
                VAR44 = FUN12(VAR22->VAR45, VAR22->VAR46 + 1, sizeof(*VAR44));
                if (!VAR44)
                    return FUN13(VAR47);
                VAR22->VAR45 = VAR44;
                VAR22->VAR46++;
                VAR43 = &VAR22->VAR45[VAR22->VAR46 - 1];
                VAR43->VAR48 = VAR49;
                VAR43->VAR13 = sizeof(VAR50) * 9;
                VAR43->VAR51 = (VAR52 *)VAR25->VAR41;
                VAR25->VAR41 = NULL;
            }
            break;
        }
    }
    return 0;
}