FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    const VAR7 *VAR9 = VAR6->VAR3 + VAR6->VAR10;
    int VAR11 = VAR6->VAR10;
    VAR12 *const VAR13 = VAR2->VAR14;
    VAR15 *VAR16 = VAR3;
    VAR15 *const VAR17 = &VAR13->VAR16;
    const VAR7 *VAR18, *VAR19;
    VAR7 *VAR20;
    int VAR21, VAR22, VAR23, VAR24, VAR25, VAR26 = 3, VAR27 = 3;
    AvsVideoSubType VAR28;
    AvsBlockType VAR29;
    GetBitContext VAR30;
    if (VAR2->FUN2(VAR2, VAR17))
    {
        FUN3(VAR2, VAR31, "");
        return -1;
    }
    VAR17->VAR32 = 3;
    VAR17->VAR33 = VAR34;
    VAR17->VAR35 = 0;
    VAR20 = VAR13->VAR16.VAR3[0];
    VAR25 = VAR13->VAR16.VAR36[0];
    if (VAR9 - VAR8 < 4)
        return VAR37;
    VAR28 = VAR8[0];
    VAR29 = VAR8[1];
    VAR8 += 4;
    if (VAR29 == VAR38)
    {
        int VAR39, VAR40;
        VAR41 *VAR42 = (VAR41 *)VAR13->VAR16.VAR3[1];
        VAR39 = FUN4(VAR8);
        VAR40 = VAR39 + FUN4(VAR8 + 2);
        if (VAR39 >= 256 || VAR40 > 256 || VAR9 - VAR8 < 4 + 4 + 3 * (VAR40 - VAR39))
            return VAR37;
        VAR8 += 4;
        for (VAR21 = VAR39; VAR21 < VAR40; VAR21++, VAR8 += 3)
        {
            VAR42[VAR21] = (VAR8[0] << 18) | (VAR8[1] << 10) | (VAR8[2] << 2);
            VAR42[VAR21] |= 0xFFU << 24 | (VAR42[VAR21] >> 6) & 0x30303;
        }
        VAR28 = VAR8[0];
        VAR29 = VAR8[1];
        VAR8 += 4;
    }
    if (VAR29 != VAR43)
        return -1;
    switch (VAR28)
    {
    case VAR44:
        VAR17->VAR33 = VAR45;
        VAR17->VAR35 = 1;
    case VAR46:
        VAR26 = 3;
        VAR27 = 3;
        break;
    case VAR47:
        VAR26 = 2;
        VAR27 = 2;
        break;
    case VAR48:
        VAR26 = 2;
        VAR27 = 3;
        break;
    default:
        return -1;
    }
    if (VAR9 - VAR8 < 256 * VAR26 * VAR27)
        return VAR37;
    VAR18 = VAR8 + (256 * VAR26 * VAR27);
    if (VAR28 != VAR44)
    {
        int VAR49 = ((318 / VAR26 + 7) / 8) * (198 / VAR27);
        if (VAR9 - VAR18 < VAR49)
            return VAR37;
        FUN5(&VAR30, VAR18, VAR49 * 8);
        VAR18 += VAR49;
    }
    for (VAR24 = 0; VAR24 < 198; VAR24 += VAR27)
    {
        for (VAR23 = 0; VAR23 < 318; VAR23 += VAR26)
        {
            if (VAR28 == VAR44 || FUN6(&VAR30))
            {
                if (VAR9 - VAR18 < 1)
                    return VAR37;
                VAR19 = &VAR8[*VAR18++ * (VAR26 * VAR27)];
                for (VAR22 = 0; VAR22 < VAR26; VAR22++)
                {
                    VAR20[(VAR24 + 0) * VAR25 + VAR23 + VAR22] = VAR19[(0 * VAR26) + VAR22];
                    VAR20[(VAR24 + 1) * VAR25 + VAR23 + VAR22] = VAR19[(1 * VAR26) + VAR22];
                    if (VAR27 == 3)
                        VAR20[(VAR24 + 2) * VAR25 + VAR23 + VAR22] = VAR19[(2 * VAR26) + VAR22];
                }
            }
        }
        if (VAR28 != VAR44)
            FUN7(&VAR30);
    }
    *VAR16 = VAR13->VAR16;
    *VAR4 = 1;
    return VAR11;
}