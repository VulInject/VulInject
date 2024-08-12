FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    DisasContext VAR8;
    target_ulong VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13;
    int VAR14, VAR15 = -1;
    VAR16 *VAR17 = &VAR2->VAR17;
    int VAR18;
    VAR9 = VAR4->VAR19;
    VAR11 = VAR20.VAR21 + VAR22;
    VAR8.VAR19 = VAR9;
    VAR8.VAR23 = -1;
    VAR8.VAR4 = VAR4;
    VAR8.VAR24 = 0;
    VAR8.VAR25 = 0;
    VAR8.VAR26 = VAR27;
    VAR18 = 0;
    FUN3(VAR4);
    do
    {
        if (FUN4(!FUN5(&VAR7->VAR28)))
        {
            FUN6(VAR13, &VAR7->VAR28, VAR29)
            {
                if (VAR8.VAR19 == VAR13->VAR19)
                {
                    FUN7(VAR30, VAR8.VAR19);
                    FUN8(VAR31);
                    VAR8.VAR26 = VAR32;
                    goto VAR33;
                }
            }
        }
        if (VAR5)
        {
            VAR14 = VAR20.VAR34 - VAR20.VAR21;
            if (VAR15 < VAR14)
            {
                VAR15++;
                while (VAR15 < VAR14)
                {
                    VAR20.VAR35[VAR15++] = 0;
                }
            }
            VAR20.VAR36[VAR15] = VAR8.VAR19;
            VAR20.VAR35[VAR15] = 1;
            VAR20.VAR37[VAR15] = VAR18;
        }
        VAR8.VAR38 = FUN9(VAR17, VAR8.VAR19);
        VAR8.VAR19 += FUN10(VAR2, &VAR8);
        VAR18++;
        if (VAR7->VAR25)
        {
            break;
        }
        if ((VAR8.VAR19 & (VAR39 - 1)) == 0)
        {
            break;
        }
    } while (VAR8.VAR26 == VAR27 && VAR20.VAR34 < VAR11);
    if (VAR7->VAR25)
    {
        FUN11(VAR30, VAR8.VAR19);
        FUN8(VAR31);
    }
    else
    {
        switch (VAR8.VAR26)
        {
        case VAR40:
        case VAR27:
            FUN12(VAR17, &VAR8, 0, VAR8.VAR19);
            break;
        case VAR32:
            FUN13(0);
            break;
        case VAR41:
        default:
            break;
        }
    }
VAR33:
    FUN14(VAR4, VAR18);
    *VAR20.VAR34 = VAR42;
    if (VAR5)
    {
        VAR14 = VAR20.VAR34 - VAR20.VAR21;
        VAR15++;
        while (VAR15 <= VAR14)
        {
            VAR20.VAR35[VAR15++] = 0;
        }
    }
    else
    {
        VAR4->VAR43 = VAR8.VAR19 - VAR9;
        VAR4->VAR44 = VAR18;
    }
}