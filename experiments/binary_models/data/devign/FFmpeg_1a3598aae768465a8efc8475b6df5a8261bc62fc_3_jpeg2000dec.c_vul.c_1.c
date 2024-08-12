static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9, VAR10;
    uint8_t VAR11 = VAR4->VAR12[0].VAR11;
    uint16_t VAR13;
    uint16_t VAR14;
    VAR2->VAR15 = 8;
    switch (VAR11)
    {
    case VAR16:
        for (VAR5 = 0; VAR5 < VAR4->VAR12[0].VAR17; VAR5++)
        {
            VAR9 = 1;
            for (VAR6 = 0; VAR9; VAR6++)
            {
                VAR9 = 0;
                for (VAR7 = 0; VAR7 < VAR2->VAR18; VAR7++)
                {
                    VAR19 *VAR12 = VAR4->VAR12 + VAR7;
                    VAR20 *VAR21 = VAR4->VAR21 + VAR7;
                    if (VAR6 < VAR12->VAR22)
                    {
                        VAR23 *VAR24 = VAR4->VAR25[VAR7].VAR26 + VAR6;
                        VAR9 = 1;
                        for (VAR8 = 0; VAR8 < VAR24->VAR27 * VAR24->VAR28; VAR8++)
                            if ((VAR10 = FUN2(VAR2, VAR12, VAR24, VAR8, VAR5, VAR21->VAR29 + (VAR6 ? 3 * (VAR6 - 1) + 1 : 0), VAR21->VAR30)) < 0)
                                return VAR10;
                    }
                }
            }
        }
        break;
    case VAR31:
        for (VAR7 = 0; VAR7 < VAR2->VAR18; VAR7++)
        {
            VAR19 *VAR12 = VAR4->VAR12 + VAR7;
            VAR20 *VAR21 = VAR4->VAR21 + VAR7;
            VAR2->VAR32 = VAR4->VAR33[VAR7].VAR34;
            for (VAR14 = 0; VAR14 < VAR2->VAR35; VAR14 += 256)
            {
                for (VAR13 = 0; VAR13 < VAR2->VAR36; VAR13 += 256)
                {
                    for (VAR6 = 0; VAR6 < VAR12->VAR22; VAR6++)
                    {
                        uint16_t VAR37, VAR38;
                        uint8_t VAR39 = VAR12->VAR22 - 1 - VAR6;
                        VAR23 *VAR24 = VAR4->VAR25[VAR7].VAR26 + VAR6;
                        if (!((VAR14 % (1 << (VAR24->VAR40 + VAR39)) == 0) || (VAR14 == 0)))
                            continue;
                        if (!((VAR13 % (1 << (VAR24->VAR41 + VAR39)) == 0) || (VAR13 == 0)))
                            continue;
                        VAR37 = FUN3(VAR13, VAR39) >> VAR24->VAR41;
                        VAR38 = FUN3(VAR14, VAR39) >> VAR24->VAR40;
                        VAR8 = VAR37 + VAR24->VAR27 * VAR38;
                        for (VAR5 = 0; VAR5 < VAR4->VAR12[0].VAR17; VAR5++)
                        {
                            if ((VAR10 = FUN2(VAR2, VAR12, VAR24, VAR8, VAR5, VAR21->VAR29 + (VAR6 ? 3 * (VAR6 - 1) + 1 : 0), VAR21->VAR30)) < 0)
                                return VAR10;
                        }
                    }
                }
            }
        }
        break;
    default:
        break;
    }
    VAR2->VAR32 += 2;
    return 0;
}