static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    uint32_t VAR10, VAR11;
    int VAR12, VAR13;
    if (VAR6->VAR14 >= VAR6->VAR15)
        return VAR16;
    if (FUN2(VAR9))
        return VAR16;
    if (VAR6->VAR17)
    {
        if (FUN3(VAR4, VAR6->VAR18) < 0)
            return FUN4(VAR19);
        memcpy(VAR4->VAR20, VAR6->VAR21, VAR6->VAR18);
        VAR4->VAR22 = VAR23 * (VAR6->VAR18 / VAR24);
        VAR4->VAR25 |= VAR26;
        VAR4->VAR27 = 1;
        VAR6->VAR17 = 0;
        return VAR4->VAR12;
    }
    VAR10 = (VAR6->VAR14 == 0) ? VAR6->VAR28 : VAR6->VAR29[VAR6->VAR14 - 1];
    for (VAR13 = 0; VAR13 < VAR10; VAR13++)
    {
        if (VAR6->VAR30 >= VAR6->VAR31)
            return VAR32;
        VAR11 = VAR6->VAR33[VAR6->VAR30] & ~(1U << 31);
        if (VAR6->VAR33[VAR6->VAR30] & (1U << 31))
        {
            if (VAR11 > VAR6->VAR18 - VAR6->VAR34)
                return VAR32;
            FUN5(VAR9, VAR6->VAR35 + VAR11, VAR6->VAR34);
            if (VAR11 == (VAR6->VAR36 - 2) * VAR6->VAR34)
            {
                memcpy(VAR6->VAR21, VAR6->VAR35, VAR6->VAR18);
                VAR6->VAR17 = 1;
            }
        }
        else
        {
            if (VAR11 > VAR6->VAR37 - VAR6->VAR34)
                return VAR32;
            FUN5(VAR9, VAR6->VAR38 + VAR11, VAR6->VAR34);
        }
        VAR6->VAR30++;
    }
    VAR12 = VAR6->VAR37 - VAR6->VAR39[VAR6->VAR14];
    if (VAR12 < 1)
        return VAR32;
    if (FUN3(VAR4, VAR12) < 0)
        return FUN4(VAR19);
    VAR4->VAR27 = 0;
    VAR4->VAR22 = 1;
    memcpy(VAR4->VAR20, VAR6->VAR38 + VAR6->VAR39[VAR6->VAR14], VAR12);
    if (VAR4->VAR20[0] & 0x20)
        VAR4->VAR25 |= VAR26;
    VAR6->VAR14++;
    return VAR4->VAR12;
}