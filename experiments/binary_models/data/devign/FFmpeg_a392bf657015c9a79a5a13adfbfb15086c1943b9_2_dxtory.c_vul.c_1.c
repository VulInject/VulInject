static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    int VAR8, VAR9;
    VAR5 *VAR10, *VAR11, *VAR12;
    int VAR13;
    if (VAR7 < VAR2->VAR14 * VAR2->VAR15 * 3)
    {
        FUN2(VAR2, VAR16, "");
        return VAR17;
    }
    VAR2->VAR18 = VAR19;
    if ((VAR13 = FUN3(VAR2, VAR4, 0)) < 0)
        return VAR13;
    VAR10 = VAR4->VAR20[0];
    VAR11 = VAR4->VAR20[1];
    VAR12 = VAR4->VAR20[2];
    for (VAR8 = 0; VAR8 < VAR2->VAR15; VAR8++)
    {
        for (VAR9 = 0; VAR9 < VAR2->VAR14; VAR9++)
        {
            VAR10[VAR9] = *VAR6++;
            VAR11[VAR9] = *VAR6++ ^ 0x80;
            VAR12[VAR9] = *VAR6++ ^ 0x80;
        }
        VAR10 += VAR4->VAR21[0];
        VAR11 += VAR4->VAR21[1];
        VAR12 += VAR4->VAR21[2];
    }
    return 0;
}