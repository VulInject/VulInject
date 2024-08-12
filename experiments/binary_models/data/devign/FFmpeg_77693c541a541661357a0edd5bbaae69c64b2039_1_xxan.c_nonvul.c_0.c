static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7, *VAR8 = VAR4->VAR9;
    int VAR10, VAR11;
    int VAR12, VAR13;
    int VAR14;
    if ((VAR14 = FUN2(VAR2, FUN3(&VAR4->VAR15))) != 0)
        return VAR14;
    FUN4(&VAR4->VAR15, 16, VAR16);
    VAR14 = FUN5(VAR4, VAR8, VAR4->VAR17 >> 1);
    if (VAR14)
    {
        FUN6(VAR2, VAR18, "");
        return VAR14;
    }
    VAR7 = VAR4->VAR19;
    for (VAR12 = 0; VAR12 < VAR2->VAR20; VAR12++)
    {
        VAR11 = (VAR7[0] + (*VAR8++ << 1)) & 0x3F;
        VAR7[0] = VAR11;
        for (VAR13 = 1; VAR13 < VAR2->VAR21 - 1; VAR13 += 2)
        {
            VAR10 = (VAR7[VAR13 + 1] + (*VAR8++ << 1)) & 0x3F;
            VAR7[VAR13] = (VAR11 + VAR10) >> 1;
            VAR7[VAR13 + 1] = VAR10;
            VAR11 = VAR10;
        }
        if (VAR13 < VAR2->VAR21)
            VAR7[VAR13] = VAR11;
        VAR7 += VAR2->VAR21;
    }
    VAR8 = VAR4->VAR19;
    VAR7 = VAR4->VAR22.VAR23[0];
    for (VAR13 = 0; VAR13 < VAR2->VAR20; VAR13++)
    {
        for (VAR12 = 0; VAR12 < VAR2->VAR21; VAR12++)
            VAR7[VAR12] = (VAR8[VAR12] << 2) | (VAR8[VAR12] >> 3);
        VAR8 += VAR2->VAR21;
        VAR7 += VAR4->VAR22.VAR24[0];
    }
    return 0;
}