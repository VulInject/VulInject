static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    const VAR14 *VAR15;
    VAR14 **VAR16;
    VAR17 *VAR18;
    VAR19 *VAR20 = VAR2->VAR21;
    VAR17 *VAR22;
    VAR15 = (const VAR14 *)VAR6->VAR23[0];
    VAR16 = (VAR14 **)VAR6->VAR24;
    VAR11 = VAR2->VAR25 == 2;
    if (VAR2->VAR26 == VAR27)
        VAR12 = (2 + VAR2->VAR25 * (22 + 4 * (VAR6->VAR28 - 1)) + 7) / 8;
    else
        VAR12 = VAR2->VAR29;
    if ((VAR13 = FUN2(VAR2, VAR4, VAR12)) < 0)
        return VAR13;
    VAR18 = VAR4->VAR23;
    switch (VAR2->VAR30->VAR31)
    {
    case VAR32:
    {
        int VAR33, VAR34;
        VAR33 = (VAR6->VAR28 - 1) / 8;
        for (VAR10 = 0; VAR10 < VAR2->VAR25; VAR10++)
        {
            VAR35 *VAR36 = &VAR20->VAR36[VAR10];
            VAR36->VAR37 = VAR16[VAR10][0];
            FUN3(&VAR18, VAR36->VAR37);
            *VAR18++ = VAR36->VAR38;
            *VAR18++ = 0;
        }
        if (VAR2->VAR39 > 0)
        {
            FUN4(VAR2, VAR22, VAR2->VAR25 * VAR33 * 8, VAR40);
            for (VAR10 = 0; VAR10 < VAR2->VAR25; VAR10++)
            {
                FUN5(VAR2, &VAR16[VAR10][1], VAR22 + VAR10 * VAR33 * 8, &VAR20->VAR36[VAR10], VAR33 * 8, 1);
            }
            for (VAR9 = 0; VAR9 < VAR33; VAR9++)
            {
                for (VAR10 = 0; VAR10 < VAR2->VAR25; VAR10++)
                {
                    VAR17 *VAR41 = VAR22 + VAR10 * VAR33 * 8 + VAR9 * 8;
                    for (VAR34 = 0; VAR34 < 8; VAR34 += 2)
                        *VAR18++ = VAR41[VAR34] | (VAR41[VAR34 + 1] << 4);
                }
            }
            FUN6(VAR22);
        }
        else
        {
            for (VAR9 = 0; VAR9 < VAR33; VAR9++)
            {
                for (VAR10 = 0; VAR10 < VAR2->VAR25; VAR10++)
                {
                    VAR35 *VAR36 = &VAR20->VAR36[VAR10];
                    const VAR14 *VAR42 = &VAR16[VAR10][1 + VAR9 * 8];
                    for (VAR34 = 0; VAR34 < 8; VAR34 += 2)
                    {
                        uint8_t VAR43 = FUN7(VAR36, VAR42[VAR34]);
                        VAR43 |= FUN7(VAR36, VAR42[VAR34 + 1]) << 4;
                        *VAR18++ = VAR43;
                    }
                }
            }
        }
        break;
    }
    case VAR44:
    {
        PutBitContext VAR45;
        FUN8(&VAR45, VAR18, VAR12 * 8);
        for (VAR10 = 0; VAR10 < VAR2->VAR25; VAR10++)
        {
            VAR35 *VAR36 = &VAR20->VAR36[VAR10];
            FUN9(&VAR45, 9, (VAR36->VAR37 & 0xFFFF) >> 7);
            FUN9(&VAR45, 7, VAR36->VAR38);
            if (VAR2->VAR39 > 0)
            {
                uint8_t VAR22[64];
                FUN5(VAR2, &VAR16[VAR10][1], VAR22, VAR36, 64, 1);
                for (VAR9 = 0; VAR9 < 64; VAR9++)
                    FUN9(&VAR45, 4, VAR22[VAR9 ^ 1]);
            }
            else
            {
                for (VAR9 = 0; VAR9 < 64; VAR9 += 2)
                {
                    int VAR46, VAR47;
                    VAR46 = FUN10(VAR36, VAR16[VAR10][VAR9]);
                    VAR47 = FUN10(VAR36, VAR16[VAR10][VAR9 + 1]);
                    FUN9(&VAR45, 4, VAR47);
                    FUN9(&VAR45, 4, VAR46);
                }
            }
        }
        FUN11(&VAR45);
        break;
    }
    case VAR27:
    {
        PutBitContext VAR45;
        FUN8(&VAR45, VAR18, VAR12 * 8);
        VAR8 = VAR6->VAR28 - 1;
        FUN9(&VAR45, 2, 2);
        for (VAR9 = 0; VAR9 < VAR2->VAR25; VAR9++)
        {
            VAR20->VAR36[VAR9].VAR38 = FUN12(VAR20->VAR36[VAR9].VAR38, 0, 63);
            FUN13(&VAR45, 16, VAR15[VAR9]);
            FUN9(&VAR45, 6, VAR20->VAR36[VAR9].VAR38);
            VAR20->VAR36[VAR9].VAR37 = VAR15[VAR9];
        }
        if (VAR2->VAR39 > 0)
        {
            FUN4(VAR2, VAR22, 2 * VAR8, VAR40);
            FUN5(VAR2, VAR15 + VAR2->VAR25, VAR22, &VAR20->VAR36[0], VAR8, VAR2->VAR25);
            if (VAR2->VAR25 == 2)
                FUN5(VAR2, VAR15 + VAR2->VAR25 + 1, VAR22 + VAR8, &VAR20->VAR36[1], VAR8, VAR2->VAR25);
            for (VAR9 = 0; VAR9 < VAR8; VAR9++)
            {
                FUN9(&VAR45, 4, VAR22[VAR9]);
                if (VAR2->VAR25 == 2)
                    FUN9(&VAR45, 4, VAR22[VAR8 + VAR9]);
            }
            FUN6(VAR22);
        }
        else
        {
            for (VAR9 = 1; VAR9 < VAR6->VAR28; VAR9++)
            {
                FUN9(&VAR45, 4, FUN7(&VAR20->VAR36[0], VAR15[VAR2->VAR25 * VAR9]));
                if (VAR2->VAR25 == 2)
                    FUN9(&VAR45, 4, FUN7(&VAR20->VAR36[1], VAR15[2 * VAR9 + 1]));
            }
        }
        FUN11(&VAR45);
        break;
    }
    case VAR48:
        for (VAR9 = 0; VAR9 < VAR2->VAR25; VAR9++)
        {
            int VAR49 = 0;
            *VAR18++ = VAR49;
            VAR20->VAR36[VAR9].VAR50 = VAR51[VAR49];
            VAR20->VAR36[VAR9].VAR52 = VAR53[VAR49];
        }
        for (VAR9 = 0; VAR9 < VAR2->VAR25; VAR9++)
        {
            if (VAR20->VAR36[VAR9].VAR54 < 16)
                VAR20->VAR36[VAR9].VAR54 = 16;
            FUN3(&VAR18, VAR20->VAR36[VAR9].VAR54);
        }
        for (VAR9 = 0; VAR9 < VAR2->VAR25; VAR9++)
            VAR20->VAR36[VAR9].VAR55 = *VAR15++;
        for (VAR9 = 0; VAR9 < VAR2->VAR25; VAR9++)
        {
            VAR20->VAR36[VAR9].VAR56 = *VAR15++;
            FUN3(&VAR18, VAR20->VAR36[VAR9].VAR56);
        }
        for (VAR9 = 0; VAR9 < VAR2->VAR25; VAR9++)
            FUN3(&VAR18, VAR20->VAR36[VAR9].VAR55);
        if (VAR2->VAR39 > 0)
        {
            VAR8 = VAR2->VAR29 - 7 * VAR2->VAR25;
            FUN4(VAR2, VAR22, 2 * VAR8, VAR40);
            if (VAR2->VAR25 == 1)
            {
                FUN5(VAR2, VAR15, VAR22, &VAR20->VAR36[0], VAR8, VAR2->VAR25);
                for (VAR9 = 0; VAR9 < VAR8; VAR9 += 2)
                    *VAR18++ = (VAR22[VAR9] << 4) | VAR22[VAR9 + 1];
            }
            else
            {
                FUN5(VAR2, VAR15, VAR22, &VAR20->VAR36[0], VAR8, VAR2->VAR25);
                FUN5(VAR2, VAR15 + 1, VAR22 + VAR8, &VAR20->VAR36[1], VAR8, VAR2->VAR25);
                for (VAR9 = 0; VAR9 < VAR8; VAR9++)
                    *VAR18++ = (VAR22[VAR9] << 4) | VAR22[VAR8 + VAR9];
            }
            FUN6(VAR22);
        }
        else
        {
            for (VAR9 = 7 * VAR2->VAR25; VAR9 < VAR2->VAR29; VAR9++)
            {
                int VAR57;
                VAR57 = FUN14(&VAR20->VAR36[0], *VAR15++) << 4;
                VAR57 |= FUN14(&VAR20->VAR36[VAR11], *VAR15++);
                *VAR18++ = VAR57;
            }
        }
        break;
    case VAR58:
        VAR8 = VAR6->VAR28 / 2;
        if (VAR2->VAR39 > 0)
        {
            FUN4(VAR2, VAR22, 2 * VAR8 * 2, VAR40);
            VAR8 *= 2;
            if (VAR2->VAR25 == 1)
            {
                FUN5(VAR2, VAR15, VAR22, &VAR20->VAR36[0], VAR8, VAR2->VAR25);
                for (VAR9 = 0; VAR9 < VAR8; VAR9 += 2)
                    *VAR18++ = VAR22[VAR9] | (VAR22[VAR9 + 1] << 4);
            }
            else
            {
                FUN5(VAR2, VAR15, VAR22, &VAR20->VAR36[0], VAR8, VAR2->VAR25);
                FUN5(VAR2, VAR15 + 1, VAR22 + VAR8, &VAR20->VAR36[1], VAR8, VAR2->VAR25);
                for (VAR9 = 0; VAR9 < VAR8; VAR9++)
                    *VAR18++ = VAR22[VAR9] | (VAR22[VAR8 + VAR9] << 4);
            }
            FUN6(VAR22);
        }
        else
            for (VAR8 *= VAR2->VAR25; VAR8 > 0; VAR8--)
            {
                int VAR57;
                VAR57 = FUN15(&VAR20->VAR36[0], *VAR15++);
                VAR57 |= FUN15(&VAR20->VAR36[VAR11], *VAR15++) << 4;
                *VAR18++ = VAR57;
            }
        break;
    default:
        return FUN16(VAR59);
    }
    VAR4->VAR60 = VAR12;
    *VAR7 = 1;
    return 0;
VAR40:
    return FUN16(VAR61);
}