static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7, *VAR8, *VAR9 = VAR4->VAR10;
    unsigned VAR11, VAR12;
    int VAR13, VAR14;
    int VAR15, VAR16;
    int VAR17;
    VAR11 = FUN2(&VAR4->VAR18);
    VAR12 = FUN2(&VAR4->VAR18);
    if ((VAR17 = FUN3(VAR2, VAR11)) != 0)
        return VAR17;
    if (VAR12 >= FUN4(&VAR4->VAR18))
    {
        FUN5(VAR2, VAR19, "");
        VAR12 = 0;
    }
    FUN6(&VAR4->VAR18, 12, VAR20);
    VAR17 = FUN7(VAR4, VAR9, VAR4->VAR21 >> 1);
    if (VAR17)
    {
        FUN5(VAR2, VAR22, "");
        return VAR17;
    }
    VAR7 = VAR4->VAR23;
    VAR14 = *VAR9++;
    VAR7[0] = VAR14 << 1;
    for (VAR16 = 1; VAR16 < VAR2->VAR24 - 1; VAR16 += 2)
    {
        VAR13 = (VAR14 + *VAR9++) & 0x1F;
        VAR7[VAR16] = VAR14 + VAR13;
        VAR7[VAR16 + 1] = VAR13 << 1;
        VAR14 = VAR13;
    }
    if (VAR16 < VAR2->VAR24)
        VAR7[VAR16] = VAR14 << 1;
    VAR8 = VAR7;
    VAR7 += VAR2->VAR24;
    for (VAR15 = 1; VAR15 < VAR2->VAR25; VAR15++)
    {
        VAR14 = ((VAR8[0] >> 1) + *VAR9++) & 0x1F;
        VAR7[0] = VAR14 << 1;
        for (VAR16 = 1; VAR16 < VAR2->VAR24 - 1; VAR16 += 2)
        {
            VAR13 = ((VAR8[VAR16 + 1] >> 1) + *VAR9++) & 0x1F;
            VAR7[VAR16] = VAR14 + VAR13;
            VAR7[VAR16 + 1] = VAR13 << 1;
            VAR14 = VAR13;
        }
        if (VAR16 < VAR2->VAR24)
            VAR7[VAR16] = VAR14 << 1;
        VAR8 = VAR7;
        VAR7 += VAR2->VAR24;
    }
    if (VAR12)
    {
        int VAR26;
        FUN6(&VAR4->VAR18, 8 + VAR12, VAR20);
        VAR26 = FUN8(VAR4, VAR4->VAR10, VAR4->VAR21);
        if (VAR26 < 0)
            VAR26 = 0;
        else
            VAR26 = FUN9(VAR26, VAR4->VAR21 / 2 - 1);
        for (VAR15 = 0; VAR15 < VAR26; VAR15++)
            VAR4->VAR23[VAR15 * 2 + 1] = (VAR4->VAR23[VAR15 * 2 + 1] + (VAR4->VAR10[VAR15] << 1)) & 0x3F;
    }
    VAR9 = VAR4->VAR23;
    VAR7 = VAR4->VAR27.VAR28[0];
    for (VAR16 = 0; VAR16 < VAR2->VAR25; VAR16++)
    {
        for (VAR15 = 0; VAR15 < VAR2->VAR24; VAR15++)
            VAR7[VAR15] = (VAR9[VAR15] << 2) | (VAR9[VAR15] >> 3);
        VAR9 += VAR2->VAR24;
        VAR7 += VAR4->VAR27.VAR29[0];
    }
    return 0;
}