FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4, int *VAR5, VAR1 **VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = &VAR8->VAR11;
    uint32_t VAR12 = (FUN2(1) << VAR11->VAR13);
    uint64_t VAR14 = VAR3 * VAR15;
    unsigned long VAR16 = VAR14 / VAR12, VAR17 = FUN3((VAR3 + VAR4) * VAR15, VAR12);
    unsigned long VAR18;
    int64_t VAR19 = VAR20 | VAR21 | VAR14;
    for (VAR18 = VAR16; VAR18 < VAR17; VAR18++)
    {
        if (VAR11->VAR22[VAR18] == 0)
        {
            break;
        }
    }
    if (VAR18 == VAR16)
    {
        VAR19 = 0;
        for (VAR18 = VAR16 + 1; VAR18 < VAR17; VAR18++)
        {
            if (VAR11->VAR22[VAR18] != 0)
            {
                break;
            }
        }
    }
    *VAR5 = (VAR18 - VAR16) * VAR12 / VAR15;
    if (*VAR5 > VAR4)
    {
        *VAR5 = VAR4;
    }
    return VAR19;
}