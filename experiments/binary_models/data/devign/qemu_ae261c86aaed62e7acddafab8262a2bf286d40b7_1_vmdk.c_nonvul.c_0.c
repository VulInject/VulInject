static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, uint64_t VAR7, int VAR8, VAR9 *VAR10)
{
    unsigned int VAR11, VAR12, VAR13;
    int VAR14, VAR15, VAR16;
    uint32_t VAR17, *VAR18, VAR19 = 0;
    if (VAR6)
    {
        VAR6->VAR20 = 0;
    }
    if (VAR4->VAR21)
    {
        *VAR10 = VAR4->VAR22;
        return 0;
    }
    VAR11 = (VAR7 >> 9) / VAR4->VAR23;
    if (VAR11 >= VAR4->VAR24)
    {
        return -1;
    }
    VAR12 = VAR4->VAR25[VAR11];
    if (!VAR12)
    {
        return -1;
    }
    for (VAR15 = 0; VAR15 < VAR26; VAR15++)
    {
        if (VAR12 == VAR4->VAR27[VAR15])
        {
            if (++VAR4->VAR28[VAR15] == 0xffffffff)
            {
                for (VAR16 = 0; VAR16 < VAR26; VAR16++)
                {
                    VAR4->VAR28[VAR16] >>= 1;
                }
            }
            VAR18 = VAR4->VAR29 + (VAR15 * VAR4->VAR30);
            goto VAR31;
        }
    }
    VAR14 = 0;
    VAR17 = 0xffffffff;
    for (VAR15 = 0; VAR15 < VAR26; VAR15++)
    {
        if (VAR4->VAR28[VAR15] < VAR17)
        {
            VAR17 = VAR4->VAR28[VAR15];
            VAR14 = VAR15;
        }
    }
    VAR18 = VAR4->VAR29 + (VAR14 * VAR4->VAR30);
    if (FUN2(VAR4->VAR32, (VAR33)VAR12 * 512, VAR18, VAR4->VAR30 * sizeof(VAR34)) != VAR4->VAR30 * sizeof(VAR34))
    {
        return -1;
    }
    VAR4->VAR27[VAR14] = VAR12;
    VAR4->VAR28[VAR14] = 1;
VAR31:
    VAR13 = ((VAR7 >> 9) / VAR4->VAR35) % VAR4->VAR30;
    *VAR10 = FUN3(VAR18[VAR13]);
    if (!*VAR10)
    {
        if (!VAR8)
        {
            return -1;
        }
        *VAR10 = FUN4(VAR4->VAR32);
        FUN5(VAR4->VAR32, *VAR10 + (VAR4->VAR35 << 9));
        *VAR10 >>= 9;
        VAR19 = FUN6(*VAR10);
        VAR18[VAR13] = VAR19;
        if (FUN7(VAR2, VAR4, *VAR10, VAR7, VAR8) == -1)
        {
            return -1;
        }
        if (VAR6)
        {
            VAR6->VAR7 = VAR19;
            VAR6->VAR11 = VAR11;
            VAR6->VAR13 = VAR13;
            VAR6->VAR12 = VAR12;
            VAR6->VAR20 = 1;
        }
    }
    *VAR10 <<= 9;
    return 0;
}