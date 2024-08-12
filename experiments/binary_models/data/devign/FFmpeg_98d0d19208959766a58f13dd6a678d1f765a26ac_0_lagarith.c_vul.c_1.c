static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *const VAR15 = &VAR12->VAR16;
    uint8_t VAR17 = 0;
    uint32_t VAR18 = 0, VAR19 = 0, VAR20 = 9;
    uint32_t VAR21[4];
    VAR7 *VAR22[4], *VAR23;
    int VAR24, VAR25, VAR26 = 3;
    VAR14 *VAR16 = VAR3;
    if (VAR15->VAR3[0])
        VAR2->FUN2(VAR2, VAR15);
    VAR15->VAR27 = 0;
    VAR15->VAR28 = 1;
    VAR17 = VAR8[0];
    VAR18 = FUN3(VAR8 + 1);
    VAR19 = FUN3(VAR8 + 5);
    switch (VAR17)
    {
    case VAR29:
        VAR2->VAR30 = VAR31;
        if (VAR2->FUN4(VAR2, VAR15) < 0)
        {
            FUN5(VAR2, VAR32, "");
            return -1;
        }
        VAR23 = VAR15->VAR3[0];
        for (VAR25 = 0; VAR25 < VAR2->VAR33; VAR25++)
        {
            for (VAR24 = 0; VAR24 < VAR2->VAR34; VAR24++)
                FUN6(VAR23 + VAR24 * 4, VAR18);
            VAR23 += VAR15->VAR35[0];
        }
        break;
    case VAR36:
        VAR2->VAR30 = VAR31;
        VAR26 = 4;
        VAR20 += 4;
        VAR21[3] = FUN3(VAR8 + 9);
    case VAR37:
    case VAR38:
        if (VAR17 == VAR37 || VAR17 == VAR38)
            VAR2->VAR30 = VAR39;
        if (VAR2->FUN4(VAR2, VAR15) < 0)
        {
            FUN5(VAR2, VAR32, "");
            return -1;
        }
        VAR21[0] = VAR19;
        VAR21[1] = VAR18;
        VAR21[2] = VAR20;
        if (!VAR12->VAR40)
        {
            VAR12->VAR41 = FUN7(VAR2->VAR34, 16);
            VAR12->VAR40 = FUN8(VAR12->VAR41 * VAR2->VAR33 * VAR26);
            if (!VAR12->VAR40)
            {
                FUN5(VAR2, VAR32, "");
                return FUN9(VAR42);
            }
        }
        for (VAR24 = 0; VAR24 < VAR26; VAR24++)
            VAR22[VAR24] = VAR12->VAR40 + (VAR24 + 1) * VAR12->VAR41 * VAR2->VAR33 - VAR12->VAR41;
        if (VAR20 >= VAR9 || VAR18 >= VAR9 || VAR19 >= VAR9 || (VAR26 == 4 && VAR21[3] >= VAR9))
        {
            FUN5(VAR2, VAR32, "");
            return VAR43;
        }
        for (VAR24 = 0; VAR24 < VAR26; VAR24++)
            FUN10(VAR12, VAR22[VAR24], VAR2->VAR34, VAR2->VAR33, -VAR12->VAR41, VAR8 + VAR21[VAR24], VAR9 - VAR21[VAR24]);
        VAR23 = VAR15->VAR3[0];
        for (VAR24 = 0; VAR24 < VAR26; VAR24++)
            VAR22[VAR24] = VAR12->VAR40 + VAR24 * VAR12->VAR41 * VAR2->VAR33;
        for (VAR25 = 0; VAR25 < VAR2->VAR33; VAR25++)
        {
            for (VAR24 = 0; VAR24 < VAR2->VAR34; VAR24++)
            {
                uint8_t VAR44, VAR45, VAR46, VAR47;
                VAR44 = VAR22[0][VAR24];
                VAR45 = VAR22[1][VAR24];
                VAR46 = VAR22[2][VAR24];
                VAR44 += VAR45;
                VAR46 += VAR45;
                if (VAR17 == VAR36)
                {
                    VAR47 = VAR22[3][VAR24];
                    FUN6(VAR23 + VAR24 * 4, FUN11(VAR47, VAR44, VAR45, VAR46));
                }
                else
                {
                    VAR23[VAR24 * 3 + 0] = VAR44;
                    VAR23[VAR24 * 3 + 1] = VAR45;
                    VAR23[VAR24 * 3 + 2] = VAR46;
                }
            }
            VAR23 += VAR15->VAR35[0];
            for (VAR24 = 0; VAR24 < VAR26; VAR24++)
                VAR22[VAR24] += VAR12->VAR41;
        }
        break;
    case VAR48:
        VAR2->VAR30 = VAR49;
        if (VAR2->FUN4(VAR2, VAR15) < 0)
        {
            FUN5(VAR2, VAR32, "");
            return -1;
        }
        if (VAR20 >= VAR9 || VAR18 >= VAR9 || VAR19 >= VAR9)
        {
            FUN5(VAR2, VAR32, "");
            return VAR43;
        }
        FUN10(VAR12, VAR15->VAR3[0], VAR2->VAR34, VAR2->VAR33, VAR15->VAR35[0], VAR8 + VAR20, VAR9 - VAR20);
        FUN10(VAR12, VAR15->VAR3[2], VAR2->VAR34 / 2, VAR2->VAR33, VAR15->VAR35[2], VAR8 + VAR18, VAR9 - VAR18);
        FUN10(VAR12, VAR15->VAR3[1], VAR2->VAR34 / 2, VAR2->VAR33, VAR15->VAR35[1], VAR8 + VAR19, VAR9 - VAR19);
        break;
    case VAR50:
        VAR2->VAR30 = VAR51;
        if (VAR2->FUN4(VAR2, VAR15) < 0)
        {
            FUN5(VAR2, VAR32, "");
            return -1;
        }
        if (VAR20 >= VAR9 || VAR18 >= VAR9 || VAR19 >= VAR9)
        {
            FUN5(VAR2, VAR32, "");
            return VAR43;
        }
        FUN10(VAR12, VAR15->VAR3[0], VAR2->VAR34, VAR2->VAR33, VAR15->VAR35[0], VAR8 + VAR20, VAR9 - VAR20);
        FUN10(VAR12, VAR15->VAR3[2], VAR2->VAR34 / 2, VAR2->VAR33 / 2, VAR15->VAR35[2], VAR8 + VAR18, VAR9 - VAR18);
        FUN10(VAR12, VAR15->VAR3[1], VAR2->VAR34 / 2, VAR2->VAR33 / 2, VAR15->VAR35[1], VAR8 + VAR19, VAR9 - VAR19);
        break;
    default:
        FUN5(VAR2, VAR32, "", VAR17);
        return -1;
    }
    *VAR16 = *VAR15;
    *VAR4 = sizeof(VAR14);
    return VAR9;
}