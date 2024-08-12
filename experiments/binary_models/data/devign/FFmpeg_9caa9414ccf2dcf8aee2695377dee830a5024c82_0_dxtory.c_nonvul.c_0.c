static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    int VAR8, VAR9;
    VAR5 *VAR10, *VAR11, *VAR12, *VAR13;
    int VAR14;
    if (VAR7 < FUN2(VAR2->VAR15, 2) * FUN2(VAR2->VAR16, 2) * 3LL / 2)
    {
        FUN3(VAR2, VAR17, "");
        return VAR18;
    }
    VAR2->VAR19 = VAR20;
    if ((VAR14 = FUN4(VAR2, VAR4, 0)) < 0)
        return VAR14;
    VAR10 = VAR4->VAR21[0];
    VAR11 = VAR4->VAR21[0] + VAR4->VAR22[0];
    VAR12 = VAR4->VAR21[1];
    VAR13 = VAR4->VAR21[2];
    for (VAR8 = 0; VAR8 < VAR2->VAR16; VAR8 += 2)
    {
        for (VAR9 = 0; VAR9 < VAR2->VAR15; VAR9 += 2)
        {
            FUN5(VAR10 + VAR9, VAR6);
            FUN5(VAR11 + VAR9, VAR6 + 2);
            VAR12[VAR9 >> 1] = VAR6[4] + 0x80;
            VAR13[VAR9 >> 1] = VAR6[5] + 0x80;
            VAR6 += 6;
        }
        VAR10 += VAR4->VAR22[0] << 1;
        VAR11 += VAR4->VAR22[0] << 1;
        VAR12 += VAR4->VAR22[1];
        VAR13 += VAR4->VAR22[2];
    }
    return 0;
}