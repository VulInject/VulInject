static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR7;
    int VAR8 = 0;
    int VAR9 = 0;
    int VAR10, VAR11;
    TM2Codes VAR12;
    VAR10 = FUN2(VAR4);
    VAR4 += 4;
    VAR8 += 4;
    VAR9 = VAR10 * 4 + 4;
    if (VAR10 == 0)
        return 4;
    if (VAR10 >= VAR13 / 4 - 1 || VAR10 < 0 || VAR10 > VAR6)
    {
        FUN3(VAR2->VAR14, VAR15, "");
    }
    VAR11 = FUN2(VAR4);
    VAR4 += 4;
    VAR8 += 4;
    if (VAR11 & 1)
    {
        VAR10 = FUN2(VAR4);
        VAR4 += 4;
        VAR8 += 4;
        if (VAR10 == VAR16)
        {
            VAR10 = FUN2(VAR4);
            VAR4 += 4;
            VAR8 += 4;
        }
        if (VAR10 > 0)
        {
            FUN4(&VAR2->VAR17, VAR4, (VAR9 - VAR8) * 8);
            if (FUN5(VAR2, VAR5) == -1)
                VAR4 += ((FUN6(&VAR2->VAR17) + 31) >> 5) << 2;
            VAR8 += ((FUN6(&VAR2->VAR17) + 31) >> 5) << 2;
        }
    }
    if (FUN2(VAR4) == VAR16)
    {
        VAR4 += 4;
        VAR8 += 4;
    }
    VAR4 += 4;
    VAR8 += 4;
    VAR4 += 4;
    VAR8 += 4;
    FUN4(&VAR2->VAR17, VAR4, (VAR9 - VAR8) * 8);
    if (FUN7(VAR2, &VAR12) == -1)
        VAR4 += ((FUN6(&VAR2->VAR17) + 31) >> 5) << 2;
    VAR8 += ((FUN6(&VAR2->VAR17) + 31) >> 5) << 2;
    VAR11 >>= 1;
    if ((VAR11 < 0) || (VAR11 > 0xFFFFFF))
    {
        FUN3(VAR2->VAR14, VAR15, "", VAR11);
        FUN8(&VAR12);
    }
    VAR2->VAR18[VAR5] = FUN9(VAR2->VAR18[VAR5], VAR11 * sizeof(int));
    VAR2->VAR19[VAR5] = VAR11;
    VAR10 = FUN2(VAR4);
    VAR4 += 4;
    VAR8 += 4;
    if (VAR10 > 0)
    {
        FUN4(&VAR2->VAR17, VAR4, (VAR9 - VAR8) * 8);
        for (VAR7 = 0; VAR7 < VAR11; VAR7++)
        {
            if (FUN10(&VAR2->VAR17) <= 0)
            {
                FUN3(VAR2->VAR14, VAR15, "", VAR11);
            }
            VAR2->VAR18[VAR5][VAR7] = FUN11(&VAR2->VAR17, &VAR12);
        }
    }
    else
    {
        for (VAR7 = 0; VAR7 < VAR11; VAR7++)
            VAR2->VAR18[VAR5][VAR7] = VAR12.VAR20[0];
    }
    FUN8(&VAR12);
    return VAR9;