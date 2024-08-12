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
                VAR6->VAR16 -= VAR9;
            switch (VAR10)
            {
            case VAR19:
                VAR14 = FUN6(VAR2->VAR17, VAR13, VAR9 - 4);
                if (VAR14 < VAR9 - 4)
                    return FUN4(VAR18);
                VAR12 = VAR9;
                break;
            case VAR20:
                if (!VAR6->VAR21)
                {
                    VAR6->VAR21 = FUN7(VAR2, VAR20);
                    if (VAR6->VAR21 == NULL)
                        return FUN4(VAR22);
                    VAR6->VAR21->VAR23->VAR24 = VAR25;
                    VAR6->VAR21->VAR23->VAR26 = VAR27;
                    VAR6->VAR21->VAR23->VAR28 = VAR6->VAR28;
                    VAR6->VAR21->VAR23->VAR29 = VAR6->VAR29;
                    VAR6->VAR21->VAR23->VAR30 = VAR6->VAR31;
                    VAR6->VAR21->VAR32 = VAR6->VAR32;
                    VAR6->VAR21->VAR23->VAR33 = (VAR34){1, VAR6->VAR35};
                }
                return FUN8(VAR2, VAR4, VAR10, VAR8, VAR9, VAR13, VAR12);
            case VAR36:
                if (!VAR6->VAR37)
                {
                    VAR6->VAR37 = FUN7(VAR2, VAR36);
                    if (VAR6->VAR37 == NULL)
                        return FUN4(VAR22);
                    VAR6->VAR37->VAR23->VAR24 = VAR38;
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