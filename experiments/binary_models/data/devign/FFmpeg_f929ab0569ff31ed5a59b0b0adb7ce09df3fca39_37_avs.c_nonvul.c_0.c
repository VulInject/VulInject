static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8 = 0, VAR9 = 0;
    AvsBlockType VAR10 = VAR11;
    int VAR12 = 0;
    uint8_t VAR13[4 + 3 * 256];
    int VAR14;
    if (VAR6->VAR15 > 0)
        if (FUN2(VAR2, VAR4) > 0)
            return 0;
    while (1)
    {
        if (VAR6->VAR16 <= 0)
        {
            if (!FUN3(VAR2->VAR17))
                return FUN4(VAR18);
            VAR6->VAR16 = FUN3(VAR2->VAR17) - 4;
        }
        while (VAR6->VAR16 > 0)
        {
            VAR8 = FUN5(VAR2->VAR17);
            VAR10 = FUN5(VAR2->VAR17);
            VAR9 = FUN3(VAR2->VAR17);
            if (VAR9 < 4)
                return VAR19;
            VAR6->VAR16 -= VAR9;
            switch (VAR10)
            {
            case VAR20:
                if (VAR9 - 4 > sizeof(VAR13))
                    return VAR19;
                VAR14 = FUN6(VAR2->VAR17, VAR13, VAR9 - 4);
                if (VAR14 < VAR9 - 4)
                    return FUN4(VAR18);
                VAR12 = VAR9;
                break;
            case VAR21:
                if (!VAR6->VAR22)
                {
                    VAR6->VAR22 = FUN7(VAR2, NULL);
                    if (!VAR6->VAR22)
                        return FUN4(VAR23);
                    VAR6->VAR22->VAR24->VAR25 = VAR26;
                    VAR6->VAR22->VAR24->VAR27 = VAR28;
                    VAR6->VAR22->VAR24->VAR29 = VAR6->VAR29;
                    VAR6->VAR22->VAR24->VAR30 = VAR6->VAR30;
                    VAR6->VAR22->VAR24->VAR31 = VAR6->VAR32;
                    VAR6->VAR22->VAR33 = VAR6->VAR33;
                    VAR6->VAR22->VAR34 = (VAR35){VAR6->VAR36, 1};
                }
                return FUN8(VAR2, VAR4, VAR10, VAR8, VAR9, VAR13, VAR12);
            case VAR37:
                if (!VAR6->VAR38)
                {
                    VAR6->VAR38 = FUN7(VAR2, NULL);
                    if (!VAR6->VAR38)
                        return FUN4(VAR23);
                    VAR6->VAR38->VAR24->VAR25 = VAR39;
                }
                VAR6->VAR15 = VAR9 - 4;
                VAR9 = FUN2(VAR2, VAR4);
                if (VAR9 != 0)
                    return VAR9;
                break;
            default:
                FUN9(VAR2->VAR17, VAR9 - 4);
            }
        }
    }
}