FUN1(VAR1 *VAR2)
{
    uint16_t VAR3, *VAR4;
    unsigned int VAR5 = VAR2->VAR6.VAR7, VAR8, VAR9, VAR10;
    struct VAR11 *VAR12 = &VAR2->VAR6;
    if (VAR12->VAR13 && VAR12->VAR14)
    {
        VAR8 = VAR12->VAR15;
        FUN2(VAR16, "", VAR5, VAR12->VAR17, VAR8);
        if (VAR12->VAR18)
        {
            FUN3((VAR19 *)(VAR12->VAR20 + VAR8 + 2), VAR12->VAR17 - VAR8);
            FUN3((VAR19 *)(VAR12->VAR20 + VAR8 + 4), FUN4((VAR19 *)(VAR12->VAR20 + VAR8 + 4)) + VAR5);
        }
        else
            FUN3((VAR19 *)(VAR12->VAR20 + VAR8 + 4), VAR12->VAR17 - VAR8);
        VAR8 = VAR12->VAR21;
        VAR3 = VAR12->VAR17 - VAR8;
        FUN2(VAR16, "", VAR12->VAR22, VAR8, VAR3);
        if (VAR12->VAR22)
        {
            VAR9 = VAR5 * VAR12->VAR23;
            FUN5((VAR24 *)(VAR12->VAR20 + VAR8 + 4), FUN6((VAR24 *)(VAR12->VAR20 + VAR8 + 4)) + VAR9);
            if (VAR12->VAR25 - VAR9 > VAR12->VAR23)
                VAR12->VAR20[VAR8 + 13] &= ~9;
        }
        else
            FUN3((VAR19 *)(VAR12->VAR20 + VAR8 + 4), VAR3);
        if (VAR12->VAR26 & VAR27)
        {
            VAR4 = (VAR19 *)(VAR12->VAR20 + VAR12->VAR28);
            FUN3(VAR4, FUN4(VAR4) + VAR3);
        }
        VAR12->VAR7++;
    }
    if (VAR12->VAR26 & VAR27)
        FUN7(VAR12->VAR20, VAR12->VAR17, VAR12->VAR28, VAR12->VAR21, VAR12->VAR29);
    if (VAR12->VAR26 & VAR30)
        FUN7(VAR12->VAR20, VAR12->VAR17, VAR12->VAR31, VAR12->VAR15, VAR12->VAR32);
    if (VAR12->VAR33)
    {
        memmove(VAR12->VAR34, VAR12->VAR20, 4);
        memmove(VAR12->VAR20, VAR12->VAR20 + 4, 8);
        memcpy(VAR12->VAR20 + 8, VAR12->VAR35, 4);
        FUN8(&VAR2->VAR36->VAR37, VAR12->VAR34, VAR12->VAR17 + 4);
    }
    else
        FUN8(&VAR2->VAR36->VAR37, VAR12->VAR20, VAR12->VAR17);
    VAR2->VAR38[VAR39]++;
    VAR2->VAR38[VAR40]++;
    VAR10 = VAR2->VAR38[VAR41];
    if ((VAR2->VAR38[VAR41] += VAR2->VAR6.VAR17) < VAR10)
        VAR2->VAR38[VAR42]++;
}