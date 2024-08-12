static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, uint64_t VAR7, int VAR8, VAR9 *VAR10)
{
    unsigned int VAR11, VAR12, VAR13;
    int VAR14, VAR15, VAR16;
    uint32_t VAR17, *VAR18;
    bool VAR19 = false;
    if (VAR6)
    {
        VAR6->VAR20 = 0;
    }
    if (VAR4->VAR21)
    {
        *VAR10 = VAR4->VAR22;
        return VAR23;
    }
    VAR7 -= (VAR4->VAR24 - VAR4->VAR25) * VAR26;
    VAR11 = (VAR7 >> 9) / VAR4->VAR27;
    if (VAR11 >= VAR4->VAR28)
    {
        return VAR29;
    }
    VAR12 = VAR4->VAR30[VAR11];
    if (!VAR12)
    {
        return VAR31;
    }
    for (VAR15 = 0; VAR15 < VAR32; VAR15++)
    {
        if (VAR12 == VAR4->VAR33[VAR15])
        {
            if (++VAR4->VAR34[VAR15] == 0xffffffff)
            {
                for (VAR16 = 0; VAR16 < VAR32; VAR16++)
                {
                    VAR4->VAR34[VAR16] >>= 1;
                }
            }
            VAR18 = VAR4->VAR35 + (VAR15 * VAR4->VAR36);
            goto VAR37;
        }
    }
    VAR14 = 0;
    VAR17 = 0xffffffff;
    for (VAR15 = 0; VAR15 < VAR32; VAR15++)
    {
        if (VAR4->VAR34[VAR15] < VAR17)
        {
            VAR17 = VAR4->VAR34[VAR15];
            VAR14 = VAR15;
        }
    }
    VAR18 = VAR4->VAR35 + (VAR14 * VAR4->VAR36);
    if (FUN2(VAR4->VAR38, (VAR39)VAR12 * 512, VAR18, VAR4->VAR36 * sizeof(VAR40)) != VAR4->VAR36 * sizeof(VAR40))
    {
        return VAR29;
    }
    VAR4->VAR33[VAR14] = VAR12;
    VAR4->VAR34[VAR14] = 1;
VAR37:
    VAR13 = ((VAR7 >> 9) / VAR4->VAR41) % VAR4->VAR36;
    *VAR10 = FUN3(VAR18[VAR13]);
    if (VAR4->VAR42 && *VAR10 == VAR43)
    {
        VAR19 = true;
    }
    if (!*VAR10 || VAR19)
    {
        if (!VAR8)
        {
            return VAR19 ? VAR44 : VAR31;
        }
        *VAR10 = FUN4(VAR4->VAR38);
        if (!VAR4->VAR45)
        {
            FUN5(VAR4->VAR38, *VAR10 + (VAR4->VAR41 << 9));
        }
        *VAR10 >>= 9;
        VAR18[VAR13] = FUN6(*VAR10);
        if (FUN7(VAR2, VAR4, *VAR10, VAR7, VAR8) == -1)
        {
            return VAR29;
        }
        if (VAR6)
        {
            VAR6->VAR7 = *VAR10;
            VAR6->VAR11 = VAR11;
            VAR6->VAR13 = VAR13;
            VAR6->VAR12 = VAR12;
            VAR6->VAR20 = 1;
        }
    }
    *VAR10 <<= 9;
    return VAR23;
}