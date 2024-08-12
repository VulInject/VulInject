FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR6->VAR13;
    VAR14 *VAR15 = VAR2->VAR15;
    VocType VAR16;
    int VAR17, VAR18 = -1;
    int VAR19 = 0;
    int VAR20 = 1;
    int64_t VAR21;
    int VAR22;
    FUN2(VAR6, FUN3(VAR15), VAR9->VAR23, VAR9->VAR24, 0, VAR25);
    while (!VAR9->VAR24)
    {
        VAR16 = FUN4(VAR15);
        if (VAR16 == VAR26)
            return VAR27;
        VAR9->VAR24 = FUN5(VAR15);
        if (!VAR9->VAR24)
        {
            if (!VAR2->VAR15->VAR28)
                return FUN6(VAR29);
            VAR9->VAR24 = FUN7(VAR15) - FUN3(VAR15);
        }
        VAR7 -= 4;
        switch (VAR16)
        {
        case VAR30:
            if (!VAR12->VAR19)
            {
                VAR12->VAR19 = 1000000 / (256 - FUN4(VAR15));
                if (VAR19)
                    VAR12->VAR19 = VAR19;
                FUN8(VAR6, 64, 1, VAR12->VAR19);
                VAR12->VAR20 = VAR20;
                VAR12->VAR31 = FUN9(VAR12->VAR32);
            }
            else
                FUN10(VAR15, 1);
            VAR18 = FUN4(VAR15);
            VAR9->VAR24 -= 2;
            VAR7 -= 2;
            VAR20 = 1;
            break;
        case VAR33:
            break;
        case VAR34:
            VAR19 = FUN11(VAR15);
            FUN4(VAR15);
            VAR20 = FUN4(VAR15) + 1;
            VAR19 = 256000000 / (VAR20 * (65536 - VAR19));
            VAR9->VAR24 = 0;
            VAR7 -= 4;
            break;
        case VAR35:
            if (!VAR12->VAR19)
            {
                VAR12->VAR19 = FUN12(VAR15);
                FUN8(VAR6, 64, 1, VAR12->VAR19);
                VAR12->VAR31 = FUN4(VAR15);
                VAR12->VAR20 = FUN4(VAR15);
            }
            else
                FUN10(VAR15, 6);
            VAR18 = FUN11(VAR15);
            FUN10(VAR15, 4);
            VAR9->VAR24 -= 12;
            VAR7 -= 12;
            break;
        default:
            FUN10(VAR15, VAR9->VAR24);
            VAR7 -= VAR9->VAR24;
            VAR9->VAR24 = 0;
            break;
        }
    }
    if (VAR12->VAR19 <= 0)
    {
        FUN13(VAR2, VAR36, "", VAR12->VAR19);
        return VAR37;
    }
    if (VAR18 >= 0)
    {
        VAR18 = FUN14(VAR38, VAR18);
        if (VAR12->VAR32 == VAR39)
            VAR12->VAR32 = VAR18;
        else if (VAR12->VAR32 != VAR18)
            FUN13(VAR2, VAR40, "");
        if (VAR12->VAR32 == VAR39)
        {
            if (VAR2->VAR41 == VAR39)
            {
                FUN13(VAR2, VAR36, "");
                return FUN6(VAR42);
            }
            FUN13(VAR2, VAR40, "");
        }
    }
    VAR12->VAR43 = VAR12->VAR19 * VAR12->VAR20 * VAR12->VAR31;
    if (VAR7 <= 0)
        VAR7 = 2048;
    VAR17 = FUN15(VAR9->VAR24, VAR7);
    VAR9->VAR24 -= VAR17;
    VAR22 = FUN16(VAR15, VAR4, VAR17);
    VAR4->VAR44 = VAR4->VAR23 = VAR9->VAR23;
    VAR21 = FUN17(VAR6->VAR13, VAR17);
    if (VAR21 > 0 && VAR9->VAR23 != VAR45)
        VAR9->VAR23 += VAR21;
    else
        VAR9->VAR23 = VAR45;
    return VAR22;
}