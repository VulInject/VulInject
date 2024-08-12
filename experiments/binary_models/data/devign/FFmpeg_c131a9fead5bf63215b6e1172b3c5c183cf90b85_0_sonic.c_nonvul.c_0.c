static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    RangeCoder VAR11;
    int VAR12, VAR13, VAR14, VAR15 = 0, VAR16 = 0;
    int VAR17;
    const short *VAR18 = (const VAR19 *)VAR6->VAR20[0];
    uint8_t VAR21[32];
    if ((VAR17 = FUN2(VAR2, VAR4, VAR9->VAR22 * 5 + 1000)) < 0)
        return VAR17;
    FUN3(&VAR11, VAR4->VAR20, VAR4->VAR23);
    FUN4(&VAR11, 0.05 * (1LL << 32), 256 - 8);
    memset(VAR21, 128, sizeof(VAR21));
    for (VAR12 = 0; VAR12 < VAR9->VAR22; VAR12++)
        VAR9->VAR24[VAR12] = VAR18[VAR12];
    if (!VAR9->VAR25)
        for (VAR12 = 0; VAR12 < VAR9->VAR22; VAR12++)
            VAR9->VAR24[VAR12] = VAR9->VAR24[VAR12] << VAR26;
    switch (VAR9->VAR27)
    {
    case VAR28:
        for (VAR12 = 0; VAR12 < VAR9->VAR22; VAR12 += VAR9->VAR29)
        {
            VAR9->VAR24[VAR12] += VAR9->VAR24[VAR12 + 1];
            VAR9->VAR24[VAR12 + 1] -= FUN5(VAR9->VAR24[VAR12], 1);
        }
        break;
    case VAR30:
        for (VAR12 = 0; VAR12 < VAR9->VAR22; VAR12 += VAR9->VAR29)
            VAR9->VAR24[VAR12 + 1] -= VAR9->VAR24[VAR12];
        break;
    case VAR31:
        for (VAR12 = 0; VAR12 < VAR9->VAR22; VAR12 += VAR9->VAR29)
            VAR9->VAR24[VAR12] -= VAR9->VAR24[VAR12 + 1];
        break;
    }
    memset(VAR9->VAR32, 0, 4 * VAR9->VAR33);
    for (VAR12 = 0; VAR12 < VAR9->VAR34; VAR12++)
        VAR9->VAR32[VAR16++] = VAR9->VAR35[VAR12];
    for (VAR12 = 0; VAR12 < VAR9->VAR22; VAR12++)
        VAR9->VAR32[VAR16++] = VAR9->VAR24[VAR12];
    for (VAR12 = 0; VAR12 < VAR9->VAR34; VAR12++)
        VAR9->VAR32[VAR16++] = 0;
    for (VAR12 = 0; VAR12 < VAR9->VAR34; VAR12++)
        VAR9->VAR35[VAR12] = VAR9->VAR24[VAR9->VAR22 - VAR9->VAR34 + VAR12];
    VAR17 = FUN6(VAR9->VAR32, VAR9->VAR33, VAR9->VAR36, VAR9->VAR37, VAR9->VAR29, VAR9->VAR38);
    if (VAR17 < 0)
        return VAR17;
    if ((VAR17 = FUN7(&VAR11, VAR21, VAR9->VAR36, VAR9->VAR37, 0)) < 0)
        return VAR17;
    for (VAR14 = 0; VAR14 < VAR9->VAR29; VAR14++)
    {
        VAR16 = VAR9->VAR34 + VAR14;
        for (VAR12 = 0; VAR12 < VAR9->VAR39; VAR12++)
        {
            int VAR40 = 0;
            for (VAR13 = 0; VAR13 < VAR9->VAR41; VAR13++, VAR16 += VAR9->VAR29)
                VAR40 += VAR9->VAR32[VAR16];
            VAR9->VAR42[VAR14][VAR12] = VAR40;
        }
    }
    if (!VAR9->VAR25)
    {
        double VAR43 = 0.0, VAR44 = 0.0;
        for (VAR14 = 0; VAR14 < VAR9->VAR29; VAR14++)
        {
            for (VAR12 = 0; VAR12 < VAR9->VAR39; VAR12++)
            {
                double VAR45 = VAR9->VAR42[VAR14][VAR12];
                VAR44 += VAR45 * VAR45;
                VAR43 += FUN8(VAR45);
            }
        }
        VAR44 = FUN9(VAR44 / (VAR9->VAR29 * VAR9->VAR39));
        VAR43 = VAR46 * VAR43 / (VAR9->VAR29 * VAR9->VAR39);
        if (VAR44 > VAR43)
            VAR44 += (VAR44 - VAR43) * VAR47;
        VAR15 = (int)(VAR48 * VAR9->VAR49 * VAR44 / VAR50);
        VAR15 = FUN10(VAR15, 1, 65534);
        FUN11(&VAR11, VAR21, VAR15, 0, NULL, NULL);
        VAR15 *= VAR50;
    }
    for (VAR14 = 0; VAR14 < VAR9->VAR29; VAR14++)
    {
        if (!VAR9->VAR25)
            for (VAR12 = 0; VAR12 < VAR9->VAR39; VAR12++)
                VAR9->VAR42[VAR14][VAR12] = FUN12(VAR9->VAR42[VAR14][VAR12], VAR15);
        if ((VAR17 = FUN7(&VAR11, VAR21, VAR9->VAR42[VAR14], VAR9->VAR39, 1)) < 0)
            return VAR17;
    }
    VAR4->VAR23 = FUN13(&VAR11);
    *VAR7 = 1;
    return 0;
}