static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, uint64_t VAR7, bool VAR8, VAR9 *VAR10, uint64_t VAR11, uint64_t VAR12)
{
    unsigned int VAR13, VAR14, VAR15;
    int VAR16, VAR17, VAR18;
    uint32_t VAR19, *VAR20;
    bool VAR21 = false;
    int64_t VAR22;
    int64_t VAR23;
    if (VAR6)
    {
        VAR6->VAR24 = 0;
    }
    if (VAR4->VAR25)
    {
        *VAR10 = VAR4->VAR26;
        return VAR27;
    }
    VAR7 -= (VAR4->VAR28 - VAR4->VAR29) * VAR30;
    VAR13 = (VAR7 >> 9) / VAR4->VAR31;
    if (VAR13 >= VAR4->VAR32)
    {
        return VAR33;
    }
    VAR14 = VAR4->VAR34[VAR13];
    if (!VAR14)
    {
        return VAR35;
    }
    for (VAR17 = 0; VAR17 < VAR36; VAR17++)
    {
        if (VAR14 == VAR4->VAR37[VAR17])
        {
            if (++VAR4->VAR38[VAR17] == 0xffffffff)
            {
                for (VAR18 = 0; VAR18 < VAR36; VAR18++)
                {
                    VAR4->VAR38[VAR18] >>= 1;
                }
            }
            VAR20 = VAR4->VAR39 + (VAR17 * VAR4->VAR40);
            goto VAR41;
        }
    }
    VAR16 = 0;
    VAR19 = 0xffffffff;
    for (VAR17 = 0; VAR17 < VAR36; VAR17++)
    {
        if (VAR4->VAR38[VAR17] < VAR19)
        {
            VAR19 = VAR4->VAR38[VAR17];
            VAR16 = VAR17;
        }
    }
    VAR20 = VAR4->VAR39 + (VAR16 * VAR4->VAR40);
    if (FUN2(VAR4->VAR42, (VAR43)VAR14 * 512, VAR20, VAR4->VAR40 * sizeof(VAR44)) != VAR4->VAR40 * sizeof(VAR44))
    {
        return VAR33;
    }
    VAR4->VAR37[VAR16] = VAR14;
    VAR4->VAR38[VAR16] = 1;
VAR41:
    VAR15 = ((VAR7 >> 9) / VAR4->VAR45) % VAR4->VAR40;
    VAR23 = FUN3(VAR20[VAR15]);
    if (VAR4->VAR46 && VAR23 == VAR47)
    {
        VAR21 = true;
    }
    if (!VAR23 || VAR21)
    {
        if (!VAR8)
        {
            return VAR21 ? VAR48 : VAR35;
        }
        VAR23 = VAR4->VAR49;
        VAR4->VAR49 += VAR4->VAR45;
        VAR22 = FUN4(VAR2, VAR4, VAR23 * VAR50, VAR7, VAR11, VAR12);
        if (VAR22)
        {
            return VAR22;
        }
        if (VAR6)
        {
            VAR6->VAR24 = 1;
            VAR6->VAR13 = VAR13;
            VAR6->VAR15 = VAR15;
            VAR6->VAR14 = VAR14;
            VAR6->VAR51 = &VAR20[VAR15];
        }
    }
    *VAR10 = VAR23 << VAR52;
    return VAR27;
}