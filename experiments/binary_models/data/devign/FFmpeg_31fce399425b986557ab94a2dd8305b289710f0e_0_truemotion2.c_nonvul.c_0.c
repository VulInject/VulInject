static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR7;
    int VAR8 = 0;
    int VAR9, VAR10, VAR11;
    TM2Codes VAR12;
    GetByteContext VAR13;
    if (VAR6 < 4)
    {
        FUN2(VAR2->VAR14, VAR15, "");
        return VAR16;
    }
    FUN3(&VAR13, VAR4, VAR6);
    VAR9 = FUN4(&VAR13);
    VAR8 = VAR9 * 4 + 4;
    if (VAR9 == 0)
        return 4;
    if (VAR9 >= VAR17 / 4 - 1 || VAR9 < 0 || VAR8 > VAR6)
    {
        FUN2(VAR2->VAR14, VAR15, "");
        return VAR16;
    }
    VAR10 = FUN4(&VAR13);
    if (VAR10 & 1)
    {
        VAR9 = FUN4(&VAR13);
        if (VAR9 == VAR18)
        {
            VAR9 = FUN4(&VAR13);
        }
        if (VAR9 > 0)
        {
            VAR11 = FUN5(&VAR13);
            if (VAR8 <= VAR11)
                return VAR16;
            FUN6(&VAR2->VAR13, VAR4 + VAR11, (VAR8 - VAR11) * 8);
            if (FUN7(VAR2, VAR5) == -1)
                return VAR16;
            FUN8(&VAR13, ((FUN9(&VAR2->VAR13) + 31) >> 5) << 2);
        }
    }
    VAR9 = FUN4(&VAR13);
    if (VAR9 == VAR18)
    {
        FUN8(&VAR13, 8);
    }
    else
    {
        FUN8(&VAR13, 4);
    }
    VAR11 = FUN5(&VAR13);
    if (VAR8 <= VAR11)
        return VAR16;
    FUN6(&VAR2->VAR13, VAR4 + VAR11, (VAR8 - VAR11) * 8);
    if (FUN10(VAR2, &VAR12) == -1)
        return VAR16;
    FUN8(&VAR13, ((FUN9(&VAR2->VAR13) + 31) >> 5) << 2);
    VAR10 >>= 1;
    if ((VAR10 < 0) || (VAR10 > 0xFFFFFF))
    {
        FUN2(VAR2->VAR14, VAR15, "", VAR10);
        FUN11(&VAR12);
        return VAR16;
    }
    VAR2->VAR19[VAR5] = FUN12(VAR2->VAR19[VAR5], VAR10 * sizeof(int));
    VAR2->VAR20[VAR5] = VAR10;
    VAR9 = FUN4(&VAR13);
    if (VAR9 > 0)
    {
        VAR11 = FUN5(&VAR13);
        if (VAR8 <= VAR11)
            return VAR16;
        FUN6(&VAR2->VAR13, VAR4 + VAR11, (VAR8 - VAR11) * 8);
        for (VAR7 = 0; VAR7 < VAR10; VAR7++)
        {
            if (FUN13(&VAR2->VAR13) <= 0)
            {
                FUN2(VAR2->VAR14, VAR15, "", VAR10);
                return VAR16;
            }
            VAR2->VAR19[VAR5][VAR7] = FUN14(&VAR2->VAR13, &VAR12);
            if (VAR5 <= VAR21 && VAR2->VAR19[VAR5][VAR7] >= VAR22 || VAR2->VAR19[VAR5][VAR7] < 0)
            {
                FUN2(VAR2->VAR14, VAR15, "", VAR2->VAR19[VAR5][VAR7], VAR5, VAR7);
                return VAR16;
            }
        }
    }
    else
    {
        for (VAR7 = 0; VAR7 < VAR10; VAR7++)
        {
            VAR2->VAR19[VAR5][VAR7] = VAR12.VAR23[0];
            if (VAR5 <= VAR21 && VAR2->VAR19[VAR5][VAR7] >= VAR22)
            {
                FUN2(VAR2->VAR14, VAR15, "", VAR2->VAR19[VAR5][VAR7], VAR5, VAR7);
                return VAR16;
            }
        }
    }
    FUN11(&VAR12);
    return VAR8;
}