int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = FUN2(sizeof(*VAR8), VAR5);
    int *VAR9 = FUN2(sizeof(*VAR9) * 2, VAR5);
    VAR1 *VAR10 = FUN2(sizeof(*VAR10) * 2, VAR5);
    VAR11 *VAR12 = FUN2(sizeof(*VAR12), VAR5);
    int VAR13, VAR14, VAR15;
    int VAR16 = 0;
    int VAR17 = 0;
    if (!VAR8 || !VAR9 || !VAR10 || !VAR12)
    {
        VAR17 = FUN3(VAR18);
        goto VAR19;
    }
    for (VAR14 = 0; VAR14 < VAR5; VAR14++)
    {
        VAR2[VAR14] = 255;
        if (VAR4[VAR14] || !VAR6)
            VAR12[VAR16++] = VAR14;
    }
    for (VAR13 = 1;; VAR13 <<= 1)
    {
        for (VAR14 = 0; VAR14 < VAR16; VAR14++)
        {
            VAR8[VAR14].VAR20 = VAR14;
            VAR8[VAR14].VAR21 = (VAR4[VAR12[VAR14]] << 14) + VAR13;
        }
        for (VAR14 = VAR16 / 2 - 1; VAR14 >= 0; VAR14--)
            FUN4(VAR8, VAR14, VAR16);
        for (VAR15 = VAR16; VAR15 < VAR16 * 2 - 1; VAR15++)
        {
            uint64_t VAR22 = VAR8[0].VAR21;
            VAR9[VAR8[0].VAR20] = VAR15;
            VAR8[0].VAR21 = VAR23;
            FUN4(VAR8, 0, VAR16);
            VAR9[VAR8[0].VAR20] = VAR15;
            VAR8[0].VAR20 = VAR15;
            VAR8[0].VAR21 += VAR22;
            FUN4(VAR8, 0, VAR16);
        }
        VAR10[2 * VAR16 - 2] = 0;
        for (VAR14 = 2 * VAR16 - 3; VAR14 >= VAR16; VAR14--)
            VAR10[VAR14] = VAR10[VAR9[VAR14]] + 1;
        for (VAR14 = 0; VAR14 < VAR16; VAR14++)
        {
            VAR2[VAR12[VAR14]] = VAR10[VAR9[VAR14]] + 1;
            if (VAR2[VAR12[VAR14]] >= 32)
                break;
        }
        if (VAR14 == VAR16)
            break;
    }
VAR19:
    FUN5(VAR8);
    FUN5(VAR9);
    FUN5(VAR10);
    FUN5(VAR12);
    return VAR17;
}