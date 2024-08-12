static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9, *VAR10 = VAR6->VAR11[0];
    int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;
    VAR17 = VAR2->VAR18 > VAR19;
    if (VAR2->VAR20 == 486)
    {
        VAR14 = 10;
    }
    else
    {
        VAR14 = 16;
    }
    VAR16 = 2 * VAR2->VAR21 * (VAR2->VAR20 + VAR14) + 8 * VAR17;
    if ((VAR15 = FUN2(VAR2, VAR4, VAR16)) < 0)
        return VAR15;
    VAR9 = VAR4->VAR11;
    if (!(VAR2->VAR22 = FUN3(24 + VAR23)))
        return FUN4(VAR24);
    VAR2->VAR25 = 24;
    memcpy(VAR2->VAR22, ""
                             "",
           16);
    if (VAR17)
    {
        VAR2->VAR22[19] = 2;
    }
    else
    {
        VAR2->VAR22[19] = 1;
        VAR9 += VAR2->VAR21 * VAR14;
    }
    VAR2->VAR26->VAR27 = 0;
    VAR2->VAR26->VAR28 = 1;
    VAR2->VAR26->VAR29 = VAR30;
    for (VAR12 = 0; VAR12 <= VAR17; VAR12++)
    {
        if (VAR17 && VAR2->VAR20 == 486)
        {
            VAR10 = VAR6->VAR11[0] + (1 - VAR12) * VAR6->VAR31[0];
        }
        else
        {
            VAR10 = VAR6->VAR11[0] + VAR12 * VAR6->VAR31[0];
        }
        VAR9 += VAR2->VAR21 * VAR14 + 4 * VAR12;
        for (VAR13 = 0; VAR13 < VAR2->VAR20; VAR13 += VAR17 + 1)
        {
            memcpy(VAR9, VAR10, VAR2->VAR21 * 2);
            VAR10 += (VAR17 + 1) * VAR6->VAR31[0];
            VAR9 += VAR2->VAR21 * 2;
        }
    }
    VAR4->VAR32 |= VAR33;
    *VAR7 = 1;
    return 0;
}