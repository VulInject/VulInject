static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    ThreadFrame VAR14 = {.VAR15 = VAR3};
    VAR16 *const VAR17 = VAR3;
    uint8_t VAR18 = 0;
    uint32_t VAR19 = 0, VAR20 = 0, VAR21 = 9;
    uint32_t VAR22[4];
    VAR7 *VAR23[4], *VAR24;
    int VAR25, VAR26, VAR27 = 3;
    VAR17->VAR28 = 1;
    VAR18 = VAR8[0];
    VAR19 = FUN2(VAR8 + 1);
    VAR20 = FUN2(VAR8 + 5);
    switch (VAR18)
    {
    case VAR29:
        VAR2->VAR30 = VAR31;
        if (FUN3(VAR2, &VAR14, 0) < 0)
        {
            FUN4(VAR2, VAR32, "");
            return -1;
        }
        VAR24 = VAR17->VAR3[0];
        for (VAR26 = 0; VAR26 < VAR2->VAR33; VAR26++)
        {
            for (VAR25 = 0; VAR25 < VAR2->VAR34; VAR25++)
                FUN5(VAR24 + VAR25 * 4, VAR19);
            VAR24 += VAR17->VAR35[0];
        }
        break;
    case VAR36:
        VAR2->VAR30 = VAR31;
        VAR27 = 4;
        VAR21 += 4;
        VAR22[3] = FUN2(VAR8 + 9);
    case VAR37:
    case VAR38:
        if (VAR18 == VAR37 || VAR18 == VAR38)
            VAR2->VAR30 = VAR39;
        if (FUN3(VAR2, &VAR14, 0) < 0)
        {
            FUN4(VAR2, VAR32, "");
            return -1;
        }
        VAR22[0] = VAR20;
        VAR22[1] = VAR19;
        VAR22[2] = VAR21;
        if (!VAR12->VAR40)
        {
            VAR12->VAR41 = FUN6(VAR2->VAR34, 16);
            VAR12->VAR40 = FUN7(VAR12->VAR41 * VAR2->VAR33 * VAR27 + 1);
            if (!VAR12->VAR40)
            {
                FUN4(VAR2, VAR32, "");
                return FUN8(VAR42);
            }
        }
        for (VAR25 = 0; VAR25 < VAR27; VAR25++)
            VAR23[VAR25] = VAR12->VAR40 + (VAR25 + 1) * VAR12->VAR41 * VAR2->VAR33 - VAR12->VAR41;
        if (VAR21 >= VAR9 || VAR19 >= VAR9 || VAR20 >= VAR9 || (VAR27 == 4 && VAR22[3] >= VAR9))
        {
            FUN4(VAR2, VAR32, "");
            return VAR43;
        }
        for (VAR25 = 0; VAR25 < VAR27; VAR25++)
            FUN9(VAR12, VAR23[VAR25], VAR2->VAR34, VAR2->VAR33, -VAR12->VAR41, VAR8 + VAR22[VAR25], VAR9 - VAR22[VAR25]);
        VAR24 = VAR17->VAR3[0];
        for (VAR25 = 0; VAR25 < VAR27; VAR25++)
            VAR23[VAR25] = VAR12->VAR40 + VAR25 * VAR12->VAR41 * VAR2->VAR33;
        for (VAR26 = 0; VAR26 < VAR2->VAR33; VAR26++)
        {
            for (VAR25 = 0; VAR25 < VAR2->VAR34; VAR25++)
            {
                uint8_t VAR44, VAR45, VAR46, VAR47;
                VAR44 = VAR23[0][VAR25];
                VAR45 = VAR23[1][VAR25];
                VAR46 = VAR23[2][VAR25];
                VAR44 += VAR45;
                VAR46 += VAR45;
                if (VAR18 == VAR36)
                {
                    VAR47 = VAR23[3][VAR25];
                    FUN5(VAR24 + VAR25 * 4, FUN10(VAR47, VAR44, VAR45, VAR46));
                }
                else
                {
                    VAR24[VAR25 * 3 + 0] = VAR44;
                    VAR24[VAR25 * 3 + 1] = VAR45;
                    VAR24[VAR25 * 3 + 2] = VAR46;
                }
            }
            VAR24 += VAR17->VAR35[0];
            for (VAR25 = 0; VAR25 < VAR27; VAR25++)
                VAR23[VAR25] += VAR12->VAR41;
        }
        break;
    case VAR48:
        VAR2->VAR30 = VAR49;
        if (FUN3(VAR2, &VAR14, 0) < 0)
        {
            FUN4(VAR2, VAR32, "");
            return -1;
        }
        if (VAR21 >= VAR9 || VAR19 >= VAR9 || VAR20 >= VAR9)
        {
            FUN4(VAR2, VAR32, "");
            return VAR43;
        }
        FUN9(VAR12, VAR17->VAR3[0], VAR2->VAR34, VAR2->VAR33, VAR17->VAR35[0], VAR8 + VAR21, VAR9 - VAR21);
        FUN9(VAR12, VAR17->VAR3[1], VAR2->VAR34 / 2, VAR2->VAR33, VAR17->VAR35[1], VAR8 + VAR19, VAR9 - VAR19);
        FUN9(VAR12, VAR17->VAR3[2], VAR2->VAR34 / 2, VAR2->VAR33, VAR17->VAR35[2], VAR8 + VAR20, VAR9 - VAR20);
        break;
    case VAR50:
        VAR2->VAR30 = VAR51;
        if (FUN3(VAR2, &VAR14, 0) < 0)
        {
            FUN4(VAR2, VAR32, "");
            return -1;
        }
        if (VAR21 >= VAR9 || VAR19 >= VAR9 || VAR20 >= VAR9)
        {
            FUN4(VAR2, VAR32, "");
            return VAR43;
        }
        FUN9(VAR12, VAR17->VAR3[0], VAR2->VAR34, VAR2->VAR33, VAR17->VAR35[0], VAR8 + VAR21, VAR9 - VAR21);
        FUN9(VAR12, VAR17->VAR3[2], VAR2->VAR34 / 2, VAR2->VAR33 / 2, VAR17->VAR35[2], VAR8 + VAR19, VAR9 - VAR19);
        FUN9(VAR12, VAR17->VAR3[1], VAR2->VAR34 / 2, VAR2->VAR33 / 2, VAR17->VAR35[1], VAR8 + VAR20, VAR9 - VAR20);
        break;
    default:
        FUN4(VAR2, VAR32, "", VAR18);
        return -1;
    }
    *VAR4 = 1;
    return VAR9;
}