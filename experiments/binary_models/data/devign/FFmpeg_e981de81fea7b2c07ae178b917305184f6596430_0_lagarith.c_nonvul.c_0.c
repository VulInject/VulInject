static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    unsigned int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    ThreadFrame VAR14 = {.VAR15 = VAR3};
    VAR16 *const VAR17 = VAR3;
    uint8_t VAR18 = 0;
    uint32_t VAR19 = 0, VAR20 = 0, VAR21 = 9;
    uint32_t VAR22[4];
    VAR7 *VAR23[4], *VAR24;
    int VAR25, VAR26, VAR27 = 3;
    int VAR28;
    VAR17->VAR29 = 1;
    VAR18 = VAR8[0];
    VAR19 = FUN2(VAR8 + 1);
    VAR20 = FUN2(VAR8 + 5);
    switch (VAR18)
    {
    case VAR30:
        VAR2->VAR31 = VAR32;
    case VAR33:
        if (VAR18 == VAR33)
            if (VAR2->VAR34 == 24)
            {
                VAR2->VAR31 = VAR35;
            }
            else
            {
                VAR2->VAR31 = VAR36;
                VAR27 = 4;
            }
        if ((VAR28 = FUN3(VAR2, &VAR14, 0)) < 0)
            return VAR28;
        VAR24 = VAR17->VAR3[0];
        if (VAR18 == VAR30)
        {
            for (VAR26 = 0; VAR26 < VAR2->VAR37; VAR26++)
            {
                for (VAR25 = 0; VAR25 < VAR2->VAR38; VAR25++)
                    FUN4(VAR24 + VAR25 * 4, VAR19);
                VAR24 += VAR17->VAR39[0];
            }
        }
        else
        {
            for (VAR26 = 0; VAR26 < VAR2->VAR37; VAR26++)
            {
                memset(VAR24, VAR8[1], VAR2->VAR38 * VAR27);
                VAR24 += VAR17->VAR39[0];
            }
        }
        break;
    case VAR40:
        if (VAR2->VAR34 == 24)
        {
            VAR2->VAR31 = VAR35;
        }
        else
        {
            VAR2->VAR31 = VAR32;
            VAR19 |= 0xFFU << 24;
        }
        if ((VAR28 = FUN3(VAR2, &VAR14, 0)) < 0)
            return VAR28;
        VAR24 = VAR17->VAR3[0];
        for (VAR26 = 0; VAR26 < VAR2->VAR37; VAR26++)
        {
            for (VAR25 = 0; VAR25 < VAR2->VAR38; VAR25++)
                if (VAR2->VAR34 == 24)
                {
                    FUN5(VAR24 + VAR25 * 3, VAR19);
                }
                else
                {
                    FUN4(VAR24 + VAR25 * 4, VAR19);
                }
            VAR24 += VAR17->VAR39[0];
        }
        break;
    case VAR41:
        VAR2->VAR31 = VAR32;
        VAR27 = 4;
        VAR21 += 4;
        VAR22[3] = FUN2(VAR8 + 9);
    case VAR42:
    case VAR43:
        if (VAR18 == VAR42 || VAR18 == VAR43)
            VAR2->VAR31 = VAR35;
        if ((VAR28 = FUN3(VAR2, &VAR14, 0)) < 0)
            return VAR28;
        VAR22[0] = VAR20;
        VAR22[1] = VAR19;
        VAR22[2] = VAR21;
        VAR12->VAR44 = FUN6(VAR2->VAR38, 16);
        FUN7(&VAR12->VAR45, &VAR12->VAR46, VAR12->VAR44 * VAR2->VAR37 * VAR27 + 1);
        if (!VAR12->VAR45)
        {
            FUN8(VAR2, VAR47, "");
            return FUN9(VAR48);
        }
        for (VAR25 = 0; VAR25 < VAR27; VAR25++)
            VAR23[VAR25] = VAR12->VAR45 + (VAR25 + 1) * VAR12->VAR44 * VAR2->VAR37 - VAR12->VAR44;
        for (VAR25 = 0; VAR25 < VAR27; VAR25++)
            if (VAR9 <= VAR22[VAR25])
            {
                FUN8(VAR2, VAR47, "");
                return VAR49;
            }
        for (VAR25 = 0; VAR25 < VAR27; VAR25++)
            FUN10(VAR12, VAR23[VAR25], VAR2->VAR38, VAR2->VAR37, -VAR12->VAR44, VAR8 + VAR22[VAR25], VAR9 - VAR22[VAR25]);
        VAR24 = VAR17->VAR3[0];
        for (VAR25 = 0; VAR25 < VAR27; VAR25++)
            VAR23[VAR25] = VAR12->VAR45 + VAR25 * VAR12->VAR44 * VAR2->VAR37;
        for (VAR26 = 0; VAR26 < VAR2->VAR37; VAR26++)
        {
            for (VAR25 = 0; VAR25 < VAR2->VAR38; VAR25++)
            {
                uint8_t VAR50, VAR51, VAR52, VAR53;
                VAR50 = VAR23[0][VAR25];
                VAR51 = VAR23[1][VAR25];
                VAR52 = VAR23[2][VAR25];
                VAR50 += VAR51;
                VAR52 += VAR51;
                if (VAR18 == VAR41)
                {
                    VAR53 = VAR23[3][VAR25];
                    FUN4(VAR24 + VAR25 * 4, FUN11(VAR53, VAR50, VAR51, VAR52));
                }
                else
                {
                    VAR24[VAR25 * 3 + 0] = VAR50;
                    VAR24[VAR25 * 3 + 1] = VAR51;
                    VAR24[VAR25 * 3 + 2] = VAR52;
                }
            }
            VAR24 += VAR17->VAR39[0];
            for (VAR25 = 0; VAR25 < VAR27; VAR25++)
                VAR23[VAR25] += VAR12->VAR44;
        }
        break;
    case VAR54:
        VAR2->VAR31 = VAR55;
        if ((VAR28 = FUN3(VAR2, &VAR14, 0)) < 0)
            return VAR28;
        if (VAR21 >= VAR9 || VAR19 >= VAR9 || VAR20 >= VAR9)
        {
            FUN8(VAR2, VAR47, "");
            return VAR49;
        }
        FUN10(VAR12, VAR17->VAR3[0], VAR2->VAR38, VAR2->VAR37, VAR17->VAR39[0], VAR8 + VAR21, VAR9 - VAR21);
        FUN10(VAR12, VAR17->VAR3[1], (VAR2->VAR38 + 1) / 2, VAR2->VAR37, VAR17->VAR39[1], VAR8 + VAR19, VAR9 - VAR19);
        FUN10(VAR12, VAR17->VAR3[2], (VAR2->VAR38 + 1) / 2, VAR2->VAR37, VAR17->VAR39[2], VAR8 + VAR20, VAR9 - VAR20);
        break;
    case VAR56:
        VAR2->VAR31 = VAR57;
        if ((VAR28 = FUN3(VAR2, &VAR14, 0)) < 0)
            return VAR28;
        if (VAR9 <= VAR21 || VAR9 <= VAR19 || VAR9 <= VAR20)
        {
            return VAR49;
        }
        if (VAR21 >= VAR9 || VAR19 >= VAR9 || VAR20 >= VAR9)
        {
            FUN8(VAR2, VAR47, "");
            return VAR49;
        }
        FUN10(VAR12, VAR17->VAR3[0], VAR2->VAR38, VAR2->VAR37, VAR17->VAR39[0], VAR8 + VAR21, VAR9 - VAR21);
        FUN10(VAR12, VAR17->VAR3[2], (VAR2->VAR38 + 1) / 2, (VAR2->VAR37 + 1) / 2, VAR17->VAR39[2], VAR8 + VAR19, VAR9 - VAR19);
        FUN10(VAR12, VAR17->VAR3[1], (VAR2->VAR38 + 1) / 2, (VAR2->VAR37 + 1) / 2, VAR17->VAR39[1], VAR8 + VAR20, VAR9 - VAR20);
        break;
    default:
        FUN8(VAR2, VAR47, "" VAR58 "", VAR18);
        return VAR59;
    }
    *VAR4 = 1;
    return VAR9;
}