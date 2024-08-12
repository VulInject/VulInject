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
    if (VAR12 >= (VAR4->VAR18.VAR19 - VAR4->VAR18.VAR20))
    {
        FUN4(VAR2, VAR21, "");
        VAR12 = 0;
    }
    FUN5(&VAR4->VAR18, 12, VAR22);
    VAR17 = FUN6(VAR4, VAR9, VAR4->VAR23 >> 1);
    if (VAR17)
    {
        FUN4(VAR2, VAR24, "");
        return VAR17;
    }
    VAR7 = VAR4->VAR25;
    VAR14 = *VAR9++;
    VAR7[0] = VAR14 << 1;
    for (VAR16 = 1; VAR16 < VAR2->VAR26 - 1; VAR16 += 2)
    {
        VAR13 = (VAR14 + *VAR9++) & 0x1F;
        VAR7[VAR16] = VAR14 + VAR13;
        VAR7[VAR16 + 1] = VAR13 << 1;
        VAR14 = VAR13;
    }
    VAR7[VAR16] = VAR14 << 1;
    VAR8 = VAR7;
    VAR7 += VAR2->VAR26;
    for (VAR15 = 1; VAR15 < VAR2->VAR27; VAR15++)
    {
        VAR14 = ((VAR8[0] >> 1) + *VAR9++) & 0x1F;
        VAR7[0] = VAR14 << 1;
        for (VAR16 = 1; VAR16 < VAR2->VAR26 - 1; VAR16 += 2)
        {
            VAR13 = ((VAR8[VAR16 + 1] >> 1) + *VAR9++) & 0x1F;
            VAR7[VAR16] = VAR14 + VAR13;
            VAR7[VAR16 + 1] = VAR13 << 1;
            VAR14 = VAR13;
        }
        VAR7[VAR16] = VAR14 << 1;
        VAR8 = VAR7;
        VAR7 += VAR2->VAR26;
    }
    if (VAR12)
    {
        int VAR28;
        FUN5(&VAR4->VAR18, 8 + VAR12, VAR22);
        VAR28 = FUN7(VAR4, VAR4->VAR10, VAR4->VAR23);
        if (VAR28 < 0)
            VAR28 = 0;
        for (VAR15 = 0; VAR15 < VAR28; VAR15++)
            VAR4->VAR25[VAR15 * 2 + 1] = (VAR4->VAR25[VAR15 * 2 + 1] + (VAR4->VAR10[VAR15] << 1)) & 0x3F;
    }
    VAR9 = VAR4->VAR25;
    VAR7 = VAR4->VAR29.VAR30[0];
    for (VAR16 = 0; VAR16 < VAR2->VAR27; VAR16++)
    {
        for (VAR15 = 0; VAR15 < VAR2->VAR26; VAR15++)
            VAR7[VAR15] = (VAR9[VAR15] << 2) | (VAR9[VAR15] >> 3);
        VAR9 += VAR2->VAR26;
        VAR7 += VAR4->VAR29.VAR31[0];
    }
    return 0;
}