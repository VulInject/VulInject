static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    GetByteContext VAR14;
    uint32_t VAR15, VAR10;
    int VAR16, VAR17, VAR18, VAR19 = 0;
    int VAR20 = VAR12->VAR21 * VAR12->VAR22;
    int VAR23;
    FUN2(&VAR14, VAR8, VAR9);
    VAR15 = FUN3(&VAR14);
    if (VAR15 > 1)
    {
        FUN4(VAR2, VAR24, "" VAR25 "", VAR15);
        return VAR26;
    }
    if ((VAR23 = FUN5(VAR2, VAR12->VAR27)) < 0)
    {
        return VAR23;
    }
    if (VAR15 == 0)
    {
        *VAR4 = 1;
        if ((VAR23 = FUN6(VAR3, VAR12->VAR27)) < 0)
            return VAR23;
        return VAR9;
    }
    if (FUN7(&VAR14) < 4)
    {
        FUN4(VAR2, VAR24, "");
        return VAR26;
    }
    VAR12->VAR28[0] = FUN3(&VAR14);
    VAR12->VAR28[1] = FUN3(&VAR14);
    if (VAR12->VAR28[0] < 2 || VAR12->VAR28[0] > VAR29 + 1 || VAR12->VAR28[1] < 2 || VAR12->VAR28[1] > VAR29 + 1)
    {
        FUN4(VAR2, VAR24, "", VAR12->VAR28[0], VAR12->VAR28[1]);
        return VAR26;
    }
    for (VAR16 = 0; VAR16 < 3; VAR16++)
    {
        VAR12->VAR30[0][VAR16] = VAR31[VAR12->VAR28[0] - 2][VAR16];
        VAR12->VAR30[1][VAR16] = VAR31[VAR12->VAR28[1] - 2][VAR16];
    }
    FUN8(&VAR14, 1);
    VAR10 = FUN9(&VAR14);
    if (VAR10 > FUN7(&VAR14))
    {
        FUN4(VAR2, VAR24, "");
        return VAR26;
    }
    for (VAR16 = 0; VAR16 < VAR10; VAR16++)
    {
        VAR17 = FUN3(&VAR14);
        VAR18 = VAR17 & 0x3F;
        VAR17 >>= 6;
        if (VAR19 + VAR18 > VAR20)
        {
            FUN4(VAR2, VAR24, "");
            return VAR26;
        }
        memset(VAR12->VAR32 + VAR19, VAR17, VAR18);
        VAR19 += VAR18;
    }
    if (VAR19 < VAR20)
    {
        FUN4(VAR2, VAR24, "", VAR19, VAR20);
        return VAR26;
    }
    for (VAR16 = 0; VAR16 < VAR12->VAR22; VAR16++)
    {
        VAR10 = FUN10(&VAR14);
        if (VAR10 & 1)
        {
            VAR10 = FUN3(&VAR14) - 1;
        }
        else
        {
            VAR10 = FUN9(&VAR14) >> 1;
        }
        if (!VAR10)
        {
            int VAR33 = 1, VAR34, VAR35 = VAR16 * VAR12->VAR21;
            for (VAR34 = 0; VAR34 < VAR12->VAR21; VAR34++)
            {
                if (VAR12->VAR32[VAR35 + VAR34] == 1 || VAR12->VAR32[VAR35 + VAR34] == 2)
                {
                    VAR33 = 0;
                    break;
                }
            }
            if (!VAR33)
            {
                FUN4(VAR2, VAR24, "");
                return VAR26;
            }
        }
        if (FUN7(&VAR14) < VAR10)
        {
            FUN4(VAR2, VAR24, "" VAR25 "", VAR10, FUN7(&VAR14));
            return VAR26;
        }
        VAR23 = FUN11(VAR12, VAR16, VAR8 + FUN12(&VAR14), VAR10);
        if (VAR23)
        {
            FUN4(VAR2, VAR24, "", VAR16);
            return VAR23;
        }
        FUN8(&VAR14, VAR10);
    }
    *VAR4 = 1;
    if ((VAR23 = FUN6(VAR3, VAR12->VAR27)) < 0)
        return VAR23;
    return VAR9;
}