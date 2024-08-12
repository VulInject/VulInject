static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    int VAR6 = 1 << VAR5;
    VAR7 *VAR8 = &VAR2->VAR9;
    int VAR10 = VAR2->VAR11->VAR10;
    int VAR12 = VAR6 >> VAR10;
    int VAR13 = VAR2->VAR11->VAR13;
    int VAR14 = VAR3 >> VAR10;
    int VAR15 = VAR4 >> VAR10;
    int VAR16, VAR17, VAR18;
    VAR8->VAR19.VAR16 = VAR3;
    VAR8->VAR19.VAR17 = VAR4;
    VAR8->VAR19.VAR20 = 1;
    VAR8->VAR19.VAR21 = VAR22;
    VAR8->VAR19.VAR23 = VAR24;
    VAR8->VAR19.VAR25 = 0;
    VAR8->VAR19.VAR26 = 0;
    FUN2(VAR2->VAR27, VAR14, VAR15) = 0;
    for (VAR16 = 0; VAR16 < 4; VAR16++)
        VAR8->VAR28.VAR29[VAR16] = 1;
    if (VAR2->VAR30->VAR31)
    {
        VAR8->VAR19.VAR32 = FUN3(VAR2);
        if (VAR8->VAR19.VAR32)
            FUN4(VAR2, VAR3, VAR4, VAR5);
    }
    else
        VAR8->VAR19.VAR32 = 0;
    if (VAR2->VAR33.VAR34 != VAR35)
    {
        uint8_t VAR27 = FUN5(VAR2, VAR3, VAR4, VAR14, VAR15);
        VAR8->VAR19.VAR21 = VAR36;
        VAR16 = VAR15 * VAR13 + VAR14;
        for (VAR17 = 0; VAR17 < VAR12; VAR17++)
        {
            memset(&VAR2->VAR27[VAR16], VAR27, VAR12);
            VAR16 += VAR13;
        }
        VAR8->VAR19.VAR21 = VAR27 ? VAR36 : VAR37;
    }
    if (FUN2(VAR2->VAR27, VAR14, VAR15))
    {
        FUN6(VAR2, VAR3, VAR4, VAR6, VAR6, VAR5, 0);
        FUN7(VAR2, VAR3, VAR4, VAR5);
        if (!VAR2->VAR33.VAR38)
            FUN8(VAR2, VAR3, VAR4, VAR5, VAR8->VAR39, VAR8->VAR40);
    }
    else
    {
        if (VAR2->VAR33.VAR34 != VAR35)
            VAR8->VAR19.VAR21 = FUN9(VAR2);
        if (VAR8->VAR19.VAR21 != VAR22 || VAR5 == VAR2->VAR11->VAR10)
        {
            VAR8->VAR19.VAR23 = FUN10(VAR2, VAR5);
            VAR8->VAR19.VAR25 = VAR8->VAR19.VAR23 == VAR41 && VAR8->VAR19.VAR21 == VAR22;
        }
        if (VAR8->VAR19.VAR21 == VAR22)
        {
            if (VAR8->VAR19.VAR23 == VAR24 && VAR2->VAR11->VAR42 && VAR5 >= VAR2->VAR11->VAR43.VAR44 && VAR5 <= VAR2->VAR11->VAR43.VAR45)
            {
                VAR8->VAR19.VAR26 = FUN11(VAR2);
            }
            if (VAR8->VAR19.VAR26)
            {
                FUN7(VAR2, VAR3, VAR4, VAR5);
                VAR18 = FUN12(VAR2, VAR3, VAR4, VAR5);
                if (VAR2->VAR11->VAR43.VAR46)
                    FUN4(VAR2, VAR3, VAR4, VAR5);
                if (VAR18 < 0)
                    return VAR18;
            }
            else
            {
                FUN13(VAR2, VAR3, VAR4, VAR5);
            }
        }
        else
        {
            FUN7(VAR2, VAR3, VAR4, VAR5);
            switch (VAR8->VAR19.VAR23)
            {
            case VAR24:
                FUN6(VAR2, VAR3, VAR4, VAR6, VAR6, VAR5, 0);
                break;
            case VAR47:
                FUN6(VAR2, VAR3, VAR4, VAR6, VAR6 / 2, VAR5, 0);
                FUN6(VAR2, VAR3, VAR4 + VAR6 / 2, VAR6, VAR6 / 2, VAR5, 1);
                break;
            case VAR48:
                FUN6(VAR2, VAR3, VAR4, VAR6 / 2, VAR6, VAR5, 0);
                FUN6(VAR2, VAR3 + VAR6 / 2, VAR4, VAR6 / 2, VAR6, VAR5, 1);
                break;
            case VAR49:
                FUN6(VAR2, VAR3, VAR4, VAR6, VAR6 / 4, VAR5, 0);
                FUN6(VAR2, VAR3, VAR4 + VAR6 / 4, VAR6, VAR6 * 3 / 4, VAR5, 1);
                break;
            case VAR50:
                FUN6(VAR2, VAR3, VAR4, VAR6, VAR6 * 3 / 4, VAR5, 0);
                FUN6(VAR2, VAR3, VAR4 + VAR6 * 3 / 4, VAR6, VAR6 / 4, VAR5, 1);
                break;
            case VAR51:
                FUN6(VAR2, VAR3, VAR4, VAR6 / 4, VAR6, VAR5, 0);
                FUN6(VAR2, VAR3 + VAR6 / 4, VAR4, VAR6 * 3 / 4, VAR6, VAR5, 1);
                break;
            case VAR52:
                FUN6(VAR2, VAR3, VAR4, VAR6 * 3 / 4, VAR6, VAR5, 0);
                FUN6(VAR2, VAR3 + VAR6 * 3 / 4, VAR4, VAR6 / 4, VAR6, VAR5, 1);
                break;
            case VAR41:
                FUN6(VAR2, VAR3, VAR4, VAR6 / 2, VAR6 / 2, VAR5, 0);
                FUN6(VAR2, VAR3 + VAR6 / 2, VAR4, VAR6 / 2, VAR6 / 2, VAR5, 1);
                FUN6(VAR2, VAR3, VAR4 + VAR6 / 2, VAR6 / 2, VAR6 / 2, VAR5, 2);
                FUN6(VAR2, VAR3 + VAR6 / 2, VAR4 + VAR6 / 2, VAR6 / 2, VAR6 / 2, VAR5, 3);
                break;
            }
        }
        if (!VAR8->VAR19.VAR26)
        {
            if (VAR8->VAR19.VAR21 != VAR22 && !(VAR8->VAR19.VAR23 == VAR24 && VAR8->VAR28.VAR53))
            {
                VAR8->VAR19.VAR20 = FUN14(VAR2);
            }
            if (VAR8->VAR19.VAR20)
            {
                VAR8->VAR19.VAR54 = VAR8->VAR19.VAR21 == VAR22 ? VAR2->VAR11->VAR55 + VAR8->VAR19.VAR25 : VAR2->VAR11->VAR56;
                VAR18 = FUN15(VAR2, VAR3, VAR4, VAR3, VAR4, VAR3, VAR4, VAR5, VAR5, 0, 0);
                if (VAR18 < 0)
                    return VAR18;
            }
            else
            {
                if (!VAR2->VAR33.VAR38)
                    FUN8(VAR2, VAR3, VAR4, VAR5, VAR8->VAR39, VAR8->VAR40);
            }
        }
    }
    if (VAR2->VAR30->VAR57 && VAR8->VAR58.VAR59 == 0)
        FUN16(VAR2, VAR3, VAR4, VAR3, VAR4, VAR5);
    VAR16 = VAR15 * VAR13 + VAR14;
    for (VAR17 = 0; VAR17 < VAR12; VAR17++)
    {
        memset(&VAR2->VAR60[VAR16], VAR8->VAR61, VAR12);
        VAR16 += VAR13;
    }
    FUN17(VAR2, VAR3, VAR4, VAR5, VAR8->VAR62.VAR63);
    return 0;
}